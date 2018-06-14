#ifndef ZHAOHUIMIMA2_H
#define ZHAOHUIMIMA2_H

#include <QDialog>

namespace Ui {
class zhaohuimima2;
}

class zhaohuimima2 : public QDialog
{
    Q_OBJECT

public:
    explicit zhaohuimima2(QWidget *parent = 0);
    ~zhaohuimima2();

private slots:
    void on_cancel2_clicked();

    void on_confirm_clicked();

private:
    Ui::zhaohuimima2 *ui;
};

#endif // ZHAOHUIMIMA2_H
