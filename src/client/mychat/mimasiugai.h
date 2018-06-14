#ifndef MIMASIUGAI_H
#define MIMASIUGAI_H

#include <QDialog>

namespace Ui {
class mimasiugai;
}

class mimasiugai : public QDialog
{
    Q_OBJECT

public:
    explicit mimasiugai(QWidget *parent = 0);
    ~mimasiugai();

private slots:
    void on_cancel_clicked();

    void on_confirm_clicked();

private:
    Ui::mimasiugai *ui;
};

#endif // MIMASIUGAI_H
