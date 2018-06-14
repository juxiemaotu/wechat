#ifndef ZHUCE_H
#define ZHUCE_H

#include <QDialog>
#include <QUdpSocket>
namespace Ui {
class zhuce;
}

class zhuce : public QDialog
{
    Q_OBJECT

public:
    explicit zhuce(QWidget *parent = 0);
    ~zhuce();

private slots:
    void on_cancel_clicked();
    void readDatatheHandler();
    void on_zhuceButton_clicked();
    void on_confirm_clicked();

    //void on_tishi_linkActivated(const QString &link);

private:
    Ui::zhuce *ui;
    QUdpSocket *socket;
};

#endif // ZHUCE_H
