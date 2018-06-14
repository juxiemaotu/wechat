#ifndef PROTOCAL_H
#define PROTOCAL_H

#define DEFAULT_SERVER_IP               "172.25.3.86"
#define MAXSIZE	                        1024

//<==================usermanager================>
#define USER_REGISTER_INFO              0
#define USER_CH_PASSWORD                1
#define USER_CH_QUESTION                2
#define USER_FIND_PASSWORD              3

//<==================register================>

#define REGISTER_STATUS_OK			    0
#define REGISTER_STATUS_ERROR           1
#define REGISTER_SERVER_IP              DEFAULT_SERVER_IP
#define REGISTER_SERVER_PORT            10010

//<==================changepassword================>
#define CHPWD_STATUS_OK			    0
#define CHPWD_STATUS_ERROR           1
#define CHPWD_SERVER_IP              DEFAULT_SERVER_IP
#define CHPWD_SERVER_PORT            10011
//<==================changequestion================>
#define CHQUES_STATUS_OK			    0
#define CHQUES_STATUS_ERROR           1
#define CHQUES_SERVER_IP              DEFAULT_SERVER_IP
#define CHQUES_SERVER_PORT            10012
//<==================Retrieve the password================>
#define REPWD_STATUS_OK			    0
#define REPWD_STATUS_ERROR           1
#define REPWD_SERVER_IP              DEFAULT_SERVER_IP
#define REPWD_SERVER_PORT            10013
struct user_st {
    int  no;
    char uname[MAXSIZE];
    char password[MAXSIZE];
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

 

struct login_st {
    char action;    // 登录/退出
    char uname[MAXSIZE];
    char password[MAXSIZE];
    int  status;
};





//<==================FriendManager================>
#define FRIENDMANAGER_STATUS_OK         0
#define FRIENDMANAGER_STATUS_ERROR      1
#define FRIENDMANAGER_SERVER_IP         DEFAULT_SERVER_IP
#define FRIENDMANAGER_SERVER_PORT       10004
#define FRIENDMANAGER_STATUS_FRIEND     2

 


struct friendmanager_st {
    char action;
    char src_uname[MAXSIZE];
    char uname[MAXSIZE];
    char name[MAXSIZE];//server write
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




