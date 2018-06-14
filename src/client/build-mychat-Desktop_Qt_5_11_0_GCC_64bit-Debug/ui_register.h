/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *uname;
    QLineEdit *pwd1;
    QLineEdit *pwd2;
    QLineEdit *que;
    QLineEdit *ans;
    QPushButton *cancelutton;
    QPushButton *okbutton;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(600, 480);
        uname = new QLineEdit(Register);
        uname->setObjectName(QStringLiteral("uname"));
        uname->setGeometry(QRect(100, 50, 421, 25));
        pwd1 = new QLineEdit(Register);
        pwd1->setObjectName(QStringLiteral("pwd1"));
        pwd1->setGeometry(QRect(110, 80, 421, 25));
        pwd2 = new QLineEdit(Register);
        pwd2->setObjectName(QStringLiteral("pwd2"));
        pwd2->setGeometry(QRect(140, 120, 421, 25));
        que = new QLineEdit(Register);
        que->setObjectName(QStringLiteral("que"));
        que->setGeometry(QRect(150, 150, 421, 25));
        ans = new QLineEdit(Register);
        ans->setObjectName(QStringLiteral("ans"));
        ans->setGeometry(QRect(150, 190, 421, 25));
        cancelutton = new QPushButton(Register);
        cancelutton->setObjectName(QStringLiteral("cancelutton"));
        cancelutton->setGeometry(QRect(370, 270, 89, 25));
        okbutton = new QPushButton(Register);
        okbutton->setObjectName(QStringLiteral("okbutton"));
        okbutton->setGeometry(QRect(230, 270, 89, 25));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", nullptr));
        cancelutton->setText(QApplication::translate("Register", "\345\217\226\346\266\210", nullptr));
        okbutton->setText(QApplication::translate("Register", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
