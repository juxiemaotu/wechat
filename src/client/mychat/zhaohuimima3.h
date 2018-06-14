#ifndef ZHAOHUIMIMA3_H
#define ZHAOHUIMIMA3_H

#include <QDialog>

namespace Ui {
class zhaohuimima3;
}

class zhaohuimima3 : public QDialog
{
    Q_OBJECT

public:
    explicit zhaohuimima3(QWidget *parent = 0);
    ~zhaohuimima3();

private slots:
    void on_cancel3_clicked();

    void on_CONFIRM_clicked();

private:
    Ui::zhaohuimima3 *ui;
};

#endif // ZHAOHUIMIMA3_H
