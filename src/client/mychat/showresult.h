#ifndef SHOWRESULT_H
#define SHOWRESULT_H

#include <QDialog>

namespace Ui {
class Showresult;
}

class Showresult : public QDialog
{
    Q_OBJECT

public:
    explicit Showresult(QWidget *parent = 0);
    void setMsgLable(QString);
    void setOkButten(QString);
    void setCancelButten(QString);
    ~Showresult();

private slots:
    void on_cancelButton_clicked();

    void on_okButton_clicked();

private:
    Ui::Showresult *ui;
};

#endif // SHOWRESULT_H
