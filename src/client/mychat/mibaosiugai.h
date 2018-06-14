#ifndef MIBAOSIUGAI_H
#define MIBAOSIUGAI_H

#include <QDialog>

namespace Ui {
class mibaosiugai;
}

class mibaosiugai : public QDialog
{
    Q_OBJECT

public:
    explicit mibaosiugai(QWidget *parent = 0);
    ~mibaosiugai();

private slots:
    void on_confirm_clicked();

    void on_cancel_clicked();

private:
    Ui::mibaosiugai *ui;
};

#endif // MIBAOSIUGAI_H
