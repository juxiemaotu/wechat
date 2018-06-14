#include "mimasiugai.h"
#include "ui_mimasiugai.h"
#include"login.h"
#include"letschat.h"
mimasiugai::mimasiugai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mimasiugai)
{
    ui->setupUi(this);
}

mimasiugai::~mimasiugai()
{
    delete ui;
}

void mimasiugai::on_cancel_clicked()
{
    Letschat *letschat=new Letschat();
    letschat->setAttribute(Qt::WA_DeleteOnClose);
    letschat->show();
    close();
}

void mimasiugai::on_confirm_clicked()
{
    Login *login=new Login();

    login->setAttribute(Qt::WA_DeleteOnClose);

    login->show();

    close();
}
