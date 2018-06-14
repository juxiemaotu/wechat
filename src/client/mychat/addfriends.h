#ifndef ADDFRIENDS_H
#define ADDFRIENDS_H

#include <QDialog>

namespace Ui {
class addfriends;
}

class addfriends : public QDialog
{
    Q_OBJECT

public:
    explicit addfriends(QWidget *parent = 0);
    ~addfriends();

private slots:
    void on_cancel_clicked();

    void on_confirm_clicked();

private:
    Ui::addfriends *ui;
};

#endif // ADDFRIENDS_H
