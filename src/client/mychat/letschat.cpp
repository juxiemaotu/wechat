#include "letschat.h"
#include "ui_letschat.h"

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
