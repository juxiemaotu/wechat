#include "showresult.h"
#include "ui_showresult.h"

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
