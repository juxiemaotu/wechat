#include "zhaohuimima.h"
#include "ui_zhaohuimima.h"
#include"zhaohuimima2.h"
zhaohuimima::zhaohuimima(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhaohuimima)
{
    ui->setupUi(this);
}

zhaohuimima::~zhaohuimima()
{
    delete ui;
}

void zhaohuimima::on_cancel_clicked()
{
    close();
}

void zhaohuimima::on_confirm_clicked()
{

    zhaohuimima2 *Zhaohuimima=new zhaohuimima2();
    Zhaohuimima->setAttribute(Qt::WA_DeleteOnClose);
    Zhaohuimima->show();
    close();
}
