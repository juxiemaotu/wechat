#ifndef PROTOCAL_H
#define PROTOCAL_H

#define DEFAULT_SERVER_IP               "192.168.100.225"

//<==================register================>
#define MAXSIZE	                        1024
#define REGISTER_STATUS_OK			    0
#define REGISTER_STATUS_ERROR           1
#define REGISTER_SERVER_IP              DEFAULT_SERVER_IP
#define REGISTER_SERVER_PORT            10001



struct user_st {
    char action;
    char uname[MAXSIZE];
    char pwd[MAXSIZE];
    char question[MAXSIZE];
    char answer[MAXSIZE];
    int status;
};
//zhuce table
//id(integer, uname text,  passwd text)

//<==================login================>
#define LOGIN_STATUS_OK                 0
#define LOGIN_STATUS_ERROR              1
#define LOGIN_SERVER_IP                 DEFAULT_SERVER_IP
#define LOGIN_SERVER_PORT               10002

#define CLIENT_LOGIN                          0
#define CLIENT_EXIT                           1

#define 

struct login_st {
    char action;    // 登录/退出
    char uname[UNAME_SIZE];
    char password[UNAME_SIZE];
    int  status;
};





//<==================FriendManager================>
#define FRIENDMANAGER_STATUS_OK         0
#define FRIENDMANAGER_STATUS_ERROR      1
#define FRIENDMANAGER_SERVER_IP         DEFAULT_SERVER_IP
#define FRIENDMANAGER_SERVER_PORT       10004
#define FRIENDMANAGER_STATUS_FRIEND     2

#define 


struct friendmanager_st {
    char action;
    char src_uname[UNAME_SIZE];
    char uname[UNAME_SIZE];
    char name[UNAME_SIZE];//server write
    int status;
};



//<==================msg================>
#define MSG_STATUS_OK              0
#define MSG_STATUS_ERROR           1
#define MSG_SERVER_IP              DEFAULT_SERVER_IP
#define MSG_SERVER_PORT            10003


#define MSG_CLIENT_PORT            8888

#define HAOYOU_ITEM                     2

struct msg_st {
    char src_uname[MAXSIZE];
    char dst_uname[MAXSIZE];
    char time[MAXSIZE];
    char msg[MAXSIZE];
    int status;
};


//<==================heart================>
#define HEART_STATUS_OK              0
#define HEART_STATUS_ERROR           1
#define HEART_SERVER_IP              DEFAULT_SERVER_IP
#define HEART_SERVER_PORT            10005


#define LIAOTIAN_CLIENT_PORT            8888

#define HAOYOU_ITEM                     2

struct heart_st {
    char uname[MAXSIZE];   
    char time[MAXSIZE];
    int  status;
};


#endif // PROTOCAL_H




