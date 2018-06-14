#include "showresult.h"
#include "ui_showresult.h"
#include"login.h"
Showresult::Showresult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Showresult)
{
    ui->setupUi(this);
}

void Showresult::setMsgLable(QString msg)
{
    ui->msgLabel->setText(msg);
}
void Showresult::setOkButten(QString msg)
{
    ui->okButton->setText(msg);
}
void Showresult::setCancelButten(QString msg)
{
    ui->cancelButton->setText(msg);
}

Showresult::~Showresult()
{
    delete ui;
}

void Showresult::on_cancelButton_clicked()
{
    close();
}

void Showresult::on_okButton_clicked()
{
    Login *login=new Login();
    login->setAttribute(Qt::WA_DeleteOnClose);
    login->show();
    close();
}
