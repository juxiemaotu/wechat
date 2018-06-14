#include "letschat.h"
#include "ui_letschat.h"
#include"mibaosiugai.h"
#include"mimasiugai.h"
#include"addfriends.h"
Letschat::Letschat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Letschat)
{
    ui->setupUi(this);
}

Letschat::~Letschat()
{
    delete ui;
}

void Letschat::on_pushButton_clicked()
{
    close();
}

void Letschat::on_addbuddy_clicked()
{
    addfriends *Addfriends=new addfriends();
    Addfriends->setAttribute(Qt::WA_DeleteOnClose);
    Addfriends->show();
    close();
}

void Letschat::on_encrypted_clicked()
{
    mibaosiugai *Mibaosiugai=new mibaosiugai();
    Mibaosiugai->setAttribute(Qt::WA_DeleteOnClose);
    Mibaosiugai->show();
    close();
}

void Letschat::on_pushButton_2_clicked()
{
    mimasiugai *Mimasiugai=new mimasiugai();
    Mimasiugai->setAttribute(Qt::WA_DeleteOnClose);
    Mimasiugai->show();
    close();
}
