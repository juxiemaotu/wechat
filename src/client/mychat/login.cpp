#include "login.h"
#include "ui_login.h"
#include "QDebug"
#include "letschat.h"
#include <QUdpSocket>
#include "proto.h"
#include "showresult.h"
#include <QCryptographicHash>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    socket = new QUdpSocket();
    //  socket->bind();

//连接信号与槽，收到数据后会产生信号，从而调用某个指定的槽函数
    connect(socket,SIGNAL(readyRead()),this,SLOT(readDataHandler()));

}

Login::~Login()
{
    delete ui;
}

void Login::readDataHandler()
{
    struct denglu_st denglu;
    Letschat *letschat;
    Showresult *showresult;

    socket->readDatagram((char *)&denglu,sizeof(denglu));

    switch(denglu.status)
    {
    case DENGLU_STATUS_OK:
        letschat = new Letschat();
        letschat->setAttribute(Qt::WA_DeleteOnClose);
        letschat->show();
        close();
        break;
    case DENGLU_STATUS_ERROR:
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

void Login::on_loginButton_clicked()
{
    struct denglu_st denglu;

    //获取login界面上用户所填信息

    QString uname = ui->unameLineEdit->text();
    QString pw = ui->pwLineEdit->text();

    //  qDebug() << uname << "--" << pw << endl;

      //将用户名与加密后的口令通过socket发送给服务器端

      QByteArray ba = pw.toLatin1();
      ba = QCryptographicHash::hash(ba,QCryptographicHash::Md5);
      const char *p = ba.toHex().data();
      const char *u = uname.toLatin1().data();
      /**************************************************************/
     // const char *u = name.toStdString().c_str();
     /**************************************************************/
      qsnprintf(denglu.uname,SIZE,u);
      qsnprintf(denglu.password,SIZE,p);

    //  qDebug() << denglu.uname << "***" << denglu.password << endl;

      QHostAddress *address = new QHostAddress(QString(DEFAULT_SERVER_IP));
      socket->writeDatagram((char *)&denglu,sizeof(denglu),*address,DENGLU_SERVER_PORT);


//    qDebug() << 100 << " " << 200 << endl;
}












