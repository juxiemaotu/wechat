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

private:
    Ui::Letschat *ui;
};

#endif // LETSCHAT_H
