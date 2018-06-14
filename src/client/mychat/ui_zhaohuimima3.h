/********************************************************************************
** Form generated from reading UI file 'zhaohuimima3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHAOHUIMIMA3_H
#define UI_ZHAOHUIMIMA3_H

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

class Ui_zhaohuimima3
{
public:
    QLabel *changepassword;
    QLabel *newname;
    QLabel *confirmpassword;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *CONFIRM;
    QPushButton *cancel3;

    void setupUi(QDialog *zhaohuimima3)
    {
        if (zhaohuimima3->objectName().isEmpty())
            zhaohuimima3->setObjectName(QStringLiteral("zhaohuimima3"));
        zhaohuimima3->resize(400, 300);
        changepassword = new QLabel(zhaohuimima3);
        changepassword->setObjectName(QStringLiteral("changepassword"));
        changepassword->setGeometry(QRect(80, 30, 240, 50));
        QFont font;
        font.setPointSize(16);
        changepassword->setFont(font);
        changepassword->setAlignment(Qt::AlignCenter);
        newname = new QLabel(zhaohuimima3);
        newname->setObjectName(QStringLiteral("newname"));
        newname->setGeometry(QRect(30, 100, 81, 17));
        confirmpassword = new QLabel(zhaohuimima3);
        confirmpassword->setObjectName(QStringLiteral("confirmpassword"));
        confirmpassword->setGeometry(QRect(30, 160, 121, 17));
        lineEdit = new QLineEdit(zhaohuimima3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 90, 113, 25));
        lineEdit_2 = new QLineEdit(zhaohuimima3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 150, 113, 25));
        CONFIRM = new QPushButton(zhaohuimima3);
        CONFIRM->setObjectName(QStringLiteral("CONFIRM"));
        CONFIRM->setGeometry(QRect(70, 240, 100, 30));
        cancel3 = new QPushButton(zhaohuimima3);
        cancel3->setObjectName(QStringLiteral("cancel3"));
        cancel3->setGeometry(QRect(230, 240, 89, 25));

        retranslateUi(zhaohuimima3);

        QMetaObject::connectSlotsByName(zhaohuimima3);
    } // setupUi

    void retranslateUi(QDialog *zhaohuimima3)
    {
        zhaohuimima3->setWindowTitle(QApplication::translate("zhaohuimima3", "Dialog", Q_NULLPTR));
        changepassword->setText(QApplication::translate("zhaohuimima3", "changepassword", Q_NULLPTR));
        newname->setText(QApplication::translate("zhaohuimima3", "new name", Q_NULLPTR));
        confirmpassword->setText(QApplication::translate("zhaohuimima3", "confirmpassword", Q_NULLPTR));
        CONFIRM->setText(QApplication::translate("zhaohuimima3", "OK", Q_NULLPTR));
        cancel3->setText(QApplication::translate("zhaohuimima3", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class zhaohuimima3: public Ui_zhaohuimima3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHAOHUIMIMA3_H
