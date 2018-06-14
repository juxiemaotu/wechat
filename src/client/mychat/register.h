#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:
    void on_okbutton_clicked();
 void readDataHandler();
private:
    Ui::Register *ui;
     QUdpSocket *socket;
};

#endif // REGISTER_H
