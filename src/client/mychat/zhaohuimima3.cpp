#include "zhaohuimima3.h"
#include "ui_zhaohuimima3.h"
#include"login.h"
zhaohuimima3::zhaohuimima3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhaohuimima3)
{
    ui->setupUi(this);
}

zhaohuimima3::~zhaohuimima3()
{
    delete ui;
}

void zhaohuimima3::on_cancel3_clicked()
{
    close();
}

void zhaohuimima3::on_CONFIRM_clicked()
{
    Login *login=new Login();
    login->setAttribute(Qt::WA_DeleteOnClose);
    login->show();
    close();
}
