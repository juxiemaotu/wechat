#include "zhuce.h"
#include "ui_zhuce.h"
#include"login.h"
#include "QDebug"
#include <QString>
#include"proto.h"
#include "showresult.h"
#include <QCryptographicHash>
#include <QUdpSocket>
#include <string.h>
#include"iostream"
zhuce::zhuce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhuce)
{
    ui->setupUi(this);

    socket = new QUdpSocket();
    connect(socket,SIGNAL(readyRead()),this,SLOT(readDatatheHandler()));
}

zhuce::~zhuce()
{
    delete ui;
}
void zhuce::readDatatheHandler()
{
    struct zhuce_st Zhuce;
    Login *login=new Login();

    socket->readDatagram((char *)&Zhuce,sizeof(Zhuce));
    switch (Zhuce.status)
    {
        case ZHUCE_STATUS_OK:
        login->setAttribute(Qt::WA_DeleteOnClose);
        login->show();
        close();

        break;

    case  ZHUCE_STATUS_ERROR:
        ui->tishi->text()="user aready exists";
        break;

    }
}
void zhuce::on_cancel_clicked()
{
    close();
}


void zhuce::on_zhuceButton_clicked()
{
    struct zhuce_st zhuce;


    //获取zhuce界面上用户所填信息

    QString uname = ui->username_2->text();
    QString pw = ui->password_2->text();
    QString pro =ui->problem_2->text();
    QString ans =ui->answer_2->text();


      //将用户名与加密后的口令通过socket发送给服务器端

      QByteArray ba = pw.toLatin1();
      ba = QCryptographicHash::hash(ba,QCryptographicHash::Md5);
     const char *p = ba.toHex().data();
     const char *u = uname.toLatin1().data();
      const char *a = pro.toLatin1().data();
      const char *b = ans.toLatin1().data();
      /**************************************************************/
     // const char *u = name.toStdString().c_str();
     /**************************************************************/
      qsnprintf(zhuce.uname,SIZE,u);
      qsnprintf(zhuce.password,SIZE,p);
      qsnprintf(zhuce.problem,SIZE,a);
      qsnprintf(zhuce.answer,SIZE,b);

      QHostAddress *address = new QHostAddress(QString(DEFAULT_SERVER_IP));
      socket->writeDatagram((char *)&zhuce,sizeof(zhuce),*address,DENGLU_SERVER_PORT);


}

void zhuce::on_confirm_clicked()
{
    Login *login=new Login();
    login->setAttribute(Qt::WA_DeleteOnClose);
    login->show();
    close();
}
