#include "register.h"
#include "ui_register.h"
#include "/home/fortune/project/gitproj/wechat/src/include/proto_mode.h"
#include "QDebug"
#include "letschat.h"
#include <QUdpSocket>
#include "showresult.h"
#include <QCryptographicHash>

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    socket = new QUdpSocket();
    //  socket->bind();

    //连接信号与槽，收到数据后会产生信号，从而调用某个指定的槽函数
    connect(socket,SIGNAL(readyRead()),this,SLOT(readDataHandler()));
}





Register::~Register()
{
    delete ui;
}
void Register::readDataHandler()
{
    struct user_st usr;
    Letschat *letschat;
    Showresult *showresult;

    socket->readDatagram((char *)&usr,sizeof(usr));

    switch(usr.status)
    {
    case REGISTER_STATUS_OK:
        showresult = new Showresult();
        showresult->setAttribute(Qt::WA_DeleteOnClose);
        showresult->setMsgLable(QString("成功注册"));
        showresult->setOkButten(QString("返回"));
        showresult->setCancelButten(QString("退出"));
        showresult->show();
        close();
        break;
    case REGISTER_STATUS_ERROR:
        showresult = new Showresult();
        showresult->setAttribute(Qt::WA_DeleteOnClose);
        showresult->setMsgLable(QString("登陆失败！LOGIN ERROR！"));
        showresult->setOkButten(QString("再试一次"));
        showresult->setCancelButten(QString("算了吧"));
        showresult->show();
        close();
        break;
    default:
        break;
    }
}

void Register::on_okbutton_clicked()
{
   struct user_st usr;

    //获取login界面上用户所填信息

    QString uname = ui->uname->text();
    QString pw1 = ui->pwd1->text();
    QString pw2 = ui->pwd2->text();
    QString ques = ui->que->text();
    QString ans = ui->ans->text();

    if(pw1!=pw2)
         qDebug() << "mimabuyiyang!!!!!" << endl;


qDebug() << uname << "--" << pw1 << endl;
      //将用户名与加密后的口令通过socket发送给服务器端

      QByteArray ba = pw1.toLatin1();
      ba = QCryptographicHash::hash(ba,QCryptographicHash::Md5);
      const char *p = ba.toHex().data();
      const char *u = uname.toLatin1().data();
      const char *q = ques.toLatin1().data();
      const char *a = ans.toLatin1().data();
      /**************************************************************/
     // const char *u = name.toStdString().c_str();
     /**************************************************************/
      qsnprintf(usr.uname,MAXSIZE,u);
      qsnprintf(usr.password,MAXSIZE,p);
      qsnprintf(usr.question,MAXSIZE,q);
      qsnprintf(usr.answer,MAXSIZE,a);
      qDebug() << usr.uname << "***" << usr.password << endl;

      QHostAddress *address = new QHostAddress(QString(DEFAULT_SERVER_IP));
      socket->writeDatagram((char *)&usr,sizeof(usr),*address,REGISTER_SERVER_PORT);

 qDebug() << QString(DEFAULT_SERVER_IP) << "***" << REGISTER_SERVER_PORT << endl;
}
