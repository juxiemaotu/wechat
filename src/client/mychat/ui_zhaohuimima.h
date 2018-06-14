/********************************************************************************
** Form generated from reading UI file 'zhaohuimima.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHAOHUIMIMA_H
#define UI_ZHAOHUIMIMA_H

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

class Ui_zhaohuimima
{
public:
    QLabel *username;
    QPushButton *confirm;
    QPushButton *cancel;
    QLineEdit *lineEdit;
    QLabel *tishi;

    void setupUi(QDialog *zhaohuimima)
    {
        if (zhaohuimima->objectName().isEmpty())
            zhaohuimima->setObjectName(QStringLiteral("zhaohuimima"));
        zhaohuimima->resize(400, 300);
        username = new QLabel(zhaohuimima);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(60, 80, 71, 17));
        confirm = new QPushButton(zhaohuimima);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(60, 230, 89, 25));
        cancel = new QPushButton(zhaohuimima);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(230, 230, 89, 25));
        lineEdit = new QLineEdit(zhaohuimima);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 80, 113, 25));
        tishi = new QLabel(zhaohuimima);
        tishi->setObjectName(QStringLiteral("tishi"));
        tishi->setGeometry(QRect(130, 150, 111, 16));
        tishi->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        retranslateUi(zhaohuimima);

        QMetaObject::connectSlotsByName(zhaohuimima);
    } // setupUi

    void retranslateUi(QDialog *zhaohuimima)
    {
        zhaohuimima->setWindowTitle(QApplication::translate("zhaohuimima", "Dialog", Q_NULLPTR));
        username->setText(QApplication::translate("zhaohuimima", "user name", Q_NULLPTR));
        confirm->setText(QApplication::translate("zhaohuimima", "OK", Q_NULLPTR));
        cancel->setText(QApplication::translate("zhaohuimima", "cancel", Q_NULLPTR));
        tishi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhaohuimima: public Ui_zhaohuimima {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHAOHUIMIMA_H
