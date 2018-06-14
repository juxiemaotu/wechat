#include "zhaohuimima2.h"
#include "ui_zhaohuimima2.h"
#include"zhaohuimima3.h"
zhaohuimima2::zhaohuimima2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhaohuimima2)
{
    ui->setupUi(this);
}

zhaohuimima2::~zhaohuimima2()
{
    delete ui;
}

void zhaohuimima2::on_cancel2_clicked()
{
    close();
}

void zhaohuimima2::on_confirm_clicked()
{
    zhaohuimima3 *Zhaohuimima=new zhaohuimima3();
    Zhaohuimima->setAttribute(Qt::WA_DeleteOnClose);
    Zhaohuimima->show();
    close();
}
