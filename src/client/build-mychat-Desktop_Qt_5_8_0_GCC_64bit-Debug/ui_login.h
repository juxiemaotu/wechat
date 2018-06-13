/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *unameLineEdit;
    QLineEdit *pwLineEdit;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QRadioButton *radioButton;
    QPushButton *findpwButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(326, 344);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 111, 71));
        label->setStyleSheet(QStringLiteral(""));
        label->setPixmap(QPixmap(QString::fromUtf8("../icon/talk.jpeg")));
        label->setScaledContents(true);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(51, 159, 61, 17));
        QFont font;
        font.setPointSize(13);
        label_2->setFont(font);
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(51, 190, 81, 17));
        label_3->setFont(font);
        unameLineEdit = new QLineEdit(Login);
        unameLineEdit->setObjectName(QStringLiteral("unameLineEdit"));
        unameLineEdit->setGeometry(QRect(140, 159, 142, 25));
        unameLineEdit->setAlignment(Qt::AlignCenter);
        pwLineEdit = new QLineEdit(Login);
        pwLineEdit->setObjectName(QStringLiteral("pwLineEdit"));
        pwLineEdit->setGeometry(QRect(140, 190, 142, 25));
        pwLineEdit->setEchoMode(QLineEdit::Password);
        pwLineEdit->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(Login);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(60, 260, 89, 25));
        registerButton = new QPushButton(Login);
        registerButton->setObjectName(QStringLiteral("registerButton"));
        registerButton->setGeometry(QRect(170, 260, 89, 25));
        radioButton = new QRadioButton(Login);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 230, 112, 23));
        findpwButton = new QPushButton(Login);
        findpwButton->setObjectName(QStringLiteral("findpwButton"));
        findpwButton->setGeometry(QRect(170, 300, 89, 25));
        QFont font1;
        font1.setPointSize(9);
        findpwButton->setFont(font1);
        findpwButton->setStyleSheet(QStringLiteral("color: rgb(52, 101, 164);"));
        findpwButton->setFlat(true);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Login", "uname", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "password", Q_NULLPTR));
        loginButton->setText(QApplication::translate("Login", "login", Q_NULLPTR));
        registerButton->setText(QApplication::translate("Login", "register", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Login", "rember me", Q_NULLPTR));
        findpwButton->setText(QApplication::translate("Login", "find pw", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
