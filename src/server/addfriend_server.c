#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <sqlite3.h>
#include <string.h>

#include <proto_mode.h>

#define IPSTRSIZE 	1024

#if 0
int get_db_user(struct sockaddr_in *raddr,char *username)
{
	sqlite3 *db;
	int ret;	
	char *sql;	
	sqlite3_stmt *stmt;

	ret = sqlite3_open("./wechat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}

	//确认当前用户在线，并检索出其信息

	sql = "select * from onlinetable where ip = ? ";

	ret = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_prepare_v2()");
		exit(1);
	}

	sqlite3_bind_text(stmt,1,(void *)&raddr->sin_addr,-1,NULL);

	ret = sqlite3_step(stmt);
	if(ret == SQLITE_DONE)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return -1;
	}
	if(ret == SQLITE_ROW)
	{
		//获取当前用户用户名信息
		strcpy(username,sqlite3_column_text(stmt,0));
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return 0;
	}
	sqlite3_finalize(stmt);	/*!!*/
	sqlite3_close(db);
}

#endif

int check_db_user(struct friendmanager_st *rbuf)
{
	sqlite3 *db;
	int ret;	
	char *sql;	
	sqlite3_stmt *stmt;

	ret = sqlite3_open("./wechat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}

	//检查要添加的好友是否存在

	sql = "select * from usertable where uname = ? ";

	ret = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_prepare_v2()");
		exit(1);
	}

	sqlite3_bind_text(stmt,1,rbuf->uname,-1,NULL);

	ret = sqlite3_step(stmt);
	if(ret == SQLITE_DONE)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return -1;
	}
	if(ret == SQLITE_ROW)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return 0;
	}
	sqlite3_finalize(stmt);	/*!!*/
	sqlite3_close(db);
}

int check_db_friend(struct friendmanager_st *rbuf)
{
	sqlite3 *db;
	int ret;	
	char *sql,tmp[MAXSIZE];
	sqlite3_stmt *stmt;

	ret = sqlite3_open("./wechat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}

	//检查要添加的好友是否存在好友列表中

	sql = "select * from ? where uname = ? ";

	ret = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_prepare_v2()");
		exit(1);
	}

	strcpy(tmp,rbuf->src_uname);
	strcat(tmp,"table");
	sqlite3_bind_text(stmt,1,tmp,-1,NULL);
	sqlite3_bind_text(stmt,2,rbuf->uname,-1,NULL);

	ret = sqlite3_step(stmt);
	if(ret == SQLITE_ROW)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return -1;
	}
	if(ret == SQLITE_DONE)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return 0;
	}
	sqlite3_finalize(stmt);	/*!!*/
	sqlite3_close(db);
}

int addfriend(struct friendmanager_st *rbuf)
{
	sqlite3 *db;
	int ret;	
	char *sql,tmp[MAXSIZE];
	sqlite3_stmt *stmt;

	ret = sqlite3_open("./wechat.sqlite",&db);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_open()");
		exit(1);
	}

	//在好友列表中增加好友

	sql = "insert into ? (uname) values(?) ";

	ret = sqlite3_prepare_v2(db,sql,-1,&stmt,NULL);
	if(ret != SQLITE_OK)
	{
		perror("sqlite3_prepare_v2()");
		exit(1);
	}

	strcpy(tmp,rbuf->src_uname);
	strcat(tmp,"table");
	sqlite3_bind_text(stmt,1,tmp,-1,NULL);
	sqlite3_bind_text(stmt,2,rbuf->uname,-1,NULL);

	ret = sqlite3_step(stmt);
	/*
	   if(ret == SQLITE_ROW)
	   {
	   sqlite3_finalize(stmt);	
	   sqlite3_close(db);
	   return -1;
	   }
	 */

	if(ret == SQLITE_DONE)
	{
		sqlite3_finalize(stmt);	/*!!*/
		sqlite3_close(db);
		return 0;
	}
	sqlite3_finalize(stmt);	/*!!*/
	sqlite3_close(db);
	return -1;
}

int main()
{
	int sd;
	struct sockaddr_in laddr,raddr;
	socklen_t raddr_len;
	struct friendmanager_st rbuf;
	char ipstr[IPSTRSIZE];	
	int ret;

	sd = socket(AF_INET,SOCK_DGRAM,0);
	if(sd < 0)
	{
		perror("socket()");
		exit(1);
	}

	laddr.sin_family = AF_INET;
	laddr.sin_port = htons(FRIENDMANAGER_SERVER_PORT);
	inet_pton(AF_INET,DEFAULT_SERVER_IP,&laddr.sin_addr);
	if(bind(sd,(void *)&laddr,sizeof(laddr)) < 0)
	{
		perror("bind()");
		exit(1);
	}

	raddr_len = sizeof(raddr);

	while(1)
	{
		//接收添加好友请求
		if(recvfrom(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,&raddr_len) < 0)
		{
			perror("recvfrom()");
			exit(1);
		}

		inet_ntop(AF_INET,&raddr.sin_addr,ipstr,IPSTRSIZE);		   printf("------MESSAGE FROM:%s:%d-------\n",ipstr,ntohs(raddr.sin_port));

		//去数据库中验证好友是否存在信息
		ret = check_db_user(&rbuf);

		if(ret == 0)
		{
			//若用户存在,再检查是否已是好友
			ret = check_db_friend(&rbuf);
			if(ret == 0)
			{
				//添加好友
				ret = addfriend(&rbuf);
				if(ret == 0)
				{

					rbuf.status = FRIENDMANAGER_STATUS_OK;
				}
				else
					rbuf.status = FRIENDMANAGER_STATUS_ERROR;
			}
			else
				rbuf.status = FRIENDMANAGER_STATUS_ERROR_FRIEND;
		}
		else
			rbuf.status = FRIENDMANAGER_STATUS_ERROR_EXIST;


	}

	//组织验证结果，发送给用户 	

	sendto(sd,&rbuf,sizeof(rbuf),0,(void *)&raddr,sizeof(raddr));
	/*if error*/

	close(sd);

	exit(0);
}



