#include "addfriends.h"
#include "ui_addfriends.h"
#include"letschat.h"
addfriends::addfriends(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addfriends)
{
    ui->setupUi(this);
}

addfriends::~addfriends()
{
    delete ui;
}

void addfriends::on_cancel_clicked()
{
    Letschat *letschat=new Letschat();
    letschat->setAttribute(Qt::WA_DeleteOnClose);
    letschat->show();
    close();
}

void addfriends::on_confirm_clicked()
{
    Letschat *letschat=new Letschat();
    letschat->setAttribute(Qt::WA_DeleteOnClose);
    letschat->show();
    close();
}
