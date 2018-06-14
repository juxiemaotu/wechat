#ifndef LETSCHAT_H
#define LETSCHAT_H

#include <QDialog>

namespace Ui {
class Letschat;
}

class Letschat : public QDialog
{
    Q_OBJECT

public:
    explicit Letschat(QWidget *parent = 0);
    ~Letschat();

private slots:
    void on_pushButton_clicked();

    void on_addbuddy_clicked();

    void on_encrypted_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Letschat *ui;
};

#endif // LETSCHAT_H
