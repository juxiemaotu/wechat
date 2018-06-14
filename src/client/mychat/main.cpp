#include "login.h"
#include <QApplication>
#include "register.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Register w;
    w.show();

    return a.exec();
}
