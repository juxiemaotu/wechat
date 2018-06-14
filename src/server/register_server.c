#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include </usr/local/include/sqlite3.h>

//#include "../include/proto.h"
#include <../include/proto_mode.h>

#define IPSTRSIZE	1024



int user_cmp(struct user_st *rbuf)
{

}

int user_register(struct user_st *rbuf)
{
	sqlite3 *db;
	int ret;	
	char sqlstr[MAXSIZE];	

	ret = sqlite3_open("./wechat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}

	//检查用户是否存在
	//    snprintf(sqlstr,MAXSIZE,"insert into usertable (no,uname,pw,question,answer) values(10000,'%s','%s','%s','%s');",rbuf->uname,rbuf->password,rbuf->question,rbuf->answer);
	//    create table usertable (no integer primary key autoincrement not null,uname text not null,pw text not null ,question text not null ,answer text not null);

	snprintf(sqlstr,MAXSIZE,"insert into usertable (uname,pw,question,answer) values('%s','%s','%s','%s');",rbuf->uname,rbuf->password,rbuf->question,rbuf->answer);
	ret = sqlite3_exec(db,sqlstr,NULL,NULL,NULL);
	//若用户存在，则检查用户信息与密码是否与数据库中相匹配 
	
	sqlite3_close(db);
	printf("ret [%d]\n",ret);
	
	return ret;
	
}


int main()
{
	int sd;
	struct sockaddr_in laddr,raddr;
	socklen_t raddr_len;
	struct user_st rbuf;
	char ipstr[IPSTRSIZE];	
	int ret;

	sd = socket(AF_INET,SOCK_DGRAM,0);
	if(sd < 0)
	{
		perror("socket()");
		exit(1);
	}

	laddr.sin_family = AF_INET;
	laddr.sin_port = htons(REGISTER_SERVER_PORT);
	inet_pton(AF_INET,REGISTER_SERVER_IP,&laddr.sin_addr);
	if(bind(sd,(void *)&laddr,sizeof(laddr)) < 0)
	{
		perror("bind()");
		exit(1);
	}

	raddr_len = sizeof(raddr);

	while(1)
	{
		//接收注册请求
		if(recvfrom(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,&raddr_len) < 0)
		{
			perror("recvfrom()");
			exit(1);
		}

		inet_ntop(AF_INET,&raddr.sin_addr,ipstr,IPSTRSIZE);
		printf("------MESSAGE FROM:%s:%d-------\n",ipstr,ntohs(raddr.sin_port));

		//去数据库中验证用户消息
		ret = user_register(&rbuf);

		//组织验证结果，发送给用户 	
		
		if(ret == 0)
			rbuf.status = REGISTER_STATUS_OK;
		else 
			rbuf.status = REGISTER_STATUS_ERROR;

		sendto(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,sizeof(raddr));
		/*if error*/
	}

	close(sd);

	exit(0);
}



