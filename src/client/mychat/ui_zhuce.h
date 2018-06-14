/********************************************************************************
** Form generated from reading UI file 'zhuce.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHUCE_H
#define UI_ZHUCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_zhuce
{
public:
    QLabel *username;
    QLabel *password;
    QLabel *confirmpassword;
    QLabel *label_5;
    QLabel *problem;
    QLabel *answer;
    QPushButton *confirm;
    QPushButton *cancel;
    QLineEdit *username_2;
    QLineEdit *password_2;
    QLineEdit *confirmpassword_2;
    QLineEdit *problem_2;
    QLineEdit *answer_2;
    QLabel *tishi;

    void setupUi(QDialog *zhuce)
    {
        if (zhuce->objectName().isEmpty())
            zhuce->setObjectName(QStringLiteral("zhuce"));
        zhuce->resize(405, 462);
        username = new QLabel(zhuce);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(31, 51, 71, 17));
        password = new QLabel(zhuce);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(31, 106, 69, 17));
        confirmpassword = new QLabel(zhuce);
        confirmpassword->setObjectName(QStringLiteral("confirmpassword"));
        confirmpassword->setGeometry(QRect(31, 161, 121, 17));
        label_5 = new QLabel(zhuce);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 220, 211, 41));
        QFont font;
        font.setPointSize(16);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        problem = new QLabel(zhuce);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setGeometry(QRect(31, 293, 67, 17));
        answer = new QLabel(zhuce);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(31, 334, 67, 17));
        confirm = new QPushButton(zhuce);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(240, 400, 89, 25));
        cancel = new QPushButton(zhuce);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(70, 400, 89, 25));
        username_2 = new QLineEdit(zhuce);
        username_2->setObjectName(QStringLiteral("username_2"));
        username_2->setGeometry(QRect(180, 50, 113, 25));
        password_2 = new QLineEdit(zhuce);
        password_2->setObjectName(QStringLiteral("password_2"));
        password_2->setGeometry(QRect(180, 100, 113, 25));
        confirmpassword_2 = new QLineEdit(zhuce);
        confirmpassword_2->setObjectName(QStringLiteral("confirmpassword_2"));
        confirmpassword_2->setGeometry(QRect(180, 160, 113, 25));
        problem_2 = new QLineEdit(zhuce);
        problem_2->setObjectName(QStringLiteral("problem_2"));
        problem_2->setGeometry(QRect(180, 290, 113, 25));
        answer_2 = new QLineEdit(zhuce);
        answer_2->setObjectName(QStringLiteral("answer_2"));
        answer_2->setGeometry(QRect(180, 330, 113, 25));
        tishi = new QLabel(zhuce);
        tishi->setObjectName(QStringLiteral("tishi"));
        tishi->setGeometry(QRect(160, 370, 67, 17));
        tishi->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        retranslateUi(zhuce);

        QMetaObject::connectSlotsByName(zhuce);
    } // setupUi

    void retranslateUi(QDialog *zhuce)
    {
        zhuce->setWindowTitle(QApplication::translate("zhuce", "Dialog", Q_NULLPTR));
        username->setText(QApplication::translate("zhuce", "user name", Q_NULLPTR));
        password->setText(QApplication::translate("zhuce", "password ", Q_NULLPTR));
        confirmpassword->setText(QApplication::translate("zhuce", "confirm password", Q_NULLPTR));
        label_5->setText(QApplication::translate("zhuce", "encrypted", Q_NULLPTR));
        problem->setText(QApplication::translate("zhuce", "problem", Q_NULLPTR));
        answer->setText(QApplication::translate("zhuce", "answer", Q_NULLPTR));
        confirm->setText(QApplication::translate("zhuce", "OK", Q_NULLPTR));
        cancel->setText(QApplication::translate("zhuce", "cancel", Q_NULLPTR));
        tishi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhuce: public Ui_zhuce {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHUCE_H
