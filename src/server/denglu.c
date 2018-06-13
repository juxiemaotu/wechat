#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <sqlite3.h>

//#include "../include/proto.h"
#include <proto.h>

#define IPSTRSIZE	1024

int check_db_user(struct denglu_st *rbuf)
{
	sqlite3 *db;
	int ret;	
	char *sql;	
	sqlite3_stmt *stmt;

	ret = sqlite3_open("./myChat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}


	//检查用户是否存在


	//若用户存在，则检查用户信息与密码是否与数据库中相匹配 

	sql = "select * from user where uname = ? and password = ?";

	ret = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_prepare_v2()");
		exit(1);
	}

	sqlite3_bind_text(stmt,1,rbuf->uname,-1,NULL);
	sqlite3_bind_text(stmt,2,rbuf->password,-1,NULL);

	ret = sqlite3_step(stmt);
	if(ret == SQLITE_DONE)
	{
		return -1;
	}
	if(ret == SQLITE_ROW)
		return 0;

	sqlite3_finalize(stmt);	/*!!*/
	

	sqlite3_close(db);
	
}


int main()
{
	int sd;
	struct sockaddr_in laddr,raddr;
	socklen_t raddr_len;
	struct denglu_st rbuf;
	char ipstr[IPSTRSIZE];	
	int ret;

	sd = socket(AF_INET,SOCK_DGRAM,0);
	if(sd < 0)
	{
		perror("socket()");
		exit(1);
	}

	laddr.sin_family = AF_INET;
	laddr.sin_port = htons(DENGLU_SERVER_PORT);
	inet_pton(AF_INET,DEFAULT_SERVER_IP,&laddr.sin_addr);
	if(bind(sd,(void *)&laddr,sizeof(laddr)) < 0)
	{
		perror("bind()");
		exit(1);
	}

	raddr_len = sizeof(raddr);

	while(1)
	{
		//接收登陆请求
		if(recvfrom(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,&raddr_len) < 0)
		{
			perror("recvfrom()");
			exit(1);
		}

//		inet_ntop(AF_INET,&raddr.sin_addr,ipstr,IPSTRSIZE);
//		printf("------MESSAGE FROM:%s:%d-------\n",ipstr,ntohs(raddr.sin_port));

		//去数据库中验证用户消息
		ret = check_db_user(&rbuf);

		//组织验证结果，发送给用户 	
		
		if(ret == 0)
			rbuf.status = DENGLU_STATUS_OK;
		else 
			rbuf.status = DENGLU_STATUS_ERROR;

		sendto(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,sizeof(raddr));
		/*if error*/
	}

	close(sd);

	exit(0);
}



