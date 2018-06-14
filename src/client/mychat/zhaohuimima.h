#ifndef ZHAOHUIMIMA_H
#define ZHAOHUIMIMA_H

#include <QDialog>

namespace Ui {
class zhaohuimima;
}

class zhaohuimima : public QDialog
{
    Q_OBJECT

public:
    explicit zhaohuimima(QWidget *parent = 0);
    ~zhaohuimima();

private slots:
    void on_cancel_clicked();

    void on_confirm_clicked();

private:
    Ui::zhaohuimima *ui;
};

#endif // ZHAOHUIMIMA_H
