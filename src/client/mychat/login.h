#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();


private slots:
    void on_loginButton_clicked();
    void readDataHandler();

    void on_registerButton_clicked();

    void on_findpwButton_clicked();

private:
    Ui::Login *ui;
    QUdpSocket *socket;
};

#endif // LOGIN_H
