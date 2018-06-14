#include "mibaosiugai.h"
#include "ui_mibaosiugai.h"
#include"letschat.h"
mibaosiugai::mibaosiugai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mibaosiugai)
{
    ui->setupUi(this);
}

mibaosiugai::~mibaosiugai()
{
    delete ui;
}

void mibaosiugai::on_confirm_clicked()
{
    Letschat *letschat=new Letschat();
    letschat->setAttribute(Qt::WA_DeleteOnClose);
    letschat->show();
    close();
}

void mibaosiugai::on_cancel_clicked()
{
    Letschat *letschat=new Letschat();
    letschat->setAttribute(Qt::WA_DeleteOnClose);
    letschat->show();
    close();
}
