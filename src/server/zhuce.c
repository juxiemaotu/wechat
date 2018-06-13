





int main()
{



	while(1)
	{
		//接收用户注册信息


		//去数据库中确认信息是否冲突
		sqlite3_open(  ,&db );



		//冲突报错


		//不冲突，存储新用户信息至数据库相关数据表


		//将新用户的信息填入user表后，建立该用户的好友表
		char *sql = "create table if not exists Alan_friend(no integer primary key,.....)";

	//	char sqlstr[1024];
	//	snprintf(sqlstr,1024,"create table if not exists %s_friend(no integer primary key,.....)",rbuf->uname)



		ret = sqlite3_exec(db,sql,NULL,NULL,NULL);
		if(ret != sqlite3_ok)
		{

		}


		//发送注册状态给用户 
	




	}


}


















