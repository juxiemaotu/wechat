/********************************************************************************
** Form generated from reading UI file 'mimasiugai.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIMASIUGAI_H
#define UI_MIMASIUGAI_H

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

class Ui_mimasiugai
{
public:
    QLabel *newpassword;
    QLabel *confirmpassword;
    QPushButton *confirm;
    QPushButton *cancel;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *title;

    void setupUi(QDialog *mimasiugai)
    {
        if (mimasiugai->objectName().isEmpty())
            mimasiugai->setObjectName(QStringLiteral("mimasiugai"));
        mimasiugai->resize(400, 300);
        newpassword = new QLabel(mimasiugai);
        newpassword->setObjectName(QStringLiteral("newpassword"));
        newpassword->setGeometry(QRect(30, 70, 101, 17));
        confirmpassword = new QLabel(mimasiugai);
        confirmpassword->setObjectName(QStringLiteral("confirmpassword"));
        confirmpassword->setGeometry(QRect(30, 130, 131, 20));
        confirm = new QPushButton(mimasiugai);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(230, 220, 89, 25));
        cancel = new QPushButton(mimasiugai);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(60, 220, 89, 25));
        lineEdit = new QLineEdit(mimasiugai);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 60, 113, 25));
        lineEdit_2 = new QLineEdit(mimasiugai);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(220, 130, 113, 25));
        title = new QLabel(mimasiugai);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(150, 20, 67, 17));

        retranslateUi(mimasiugai);

        QMetaObject::connectSlotsByName(mimasiugai);
    } // setupUi

    void retranslateUi(QDialog *mimasiugai)
    {
        mimasiugai->setWindowTitle(QApplication::translate("mimasiugai", "Dialog", Q_NULLPTR));
        newpassword->setText(QApplication::translate("mimasiugai", "new password", Q_NULLPTR));
        confirmpassword->setText(QApplication::translate("mimasiugai", "confirm password", Q_NULLPTR));
        confirm->setText(QApplication::translate("mimasiugai", "OK", Q_NULLPTR));
        cancel->setText(QApplication::translate("mimasiugai", "cancel", Q_NULLPTR));
        title->setText(QApplication::translate("mimasiugai", "change password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mimasiugai: public Ui_mimasiugai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIMASIUGAI_H
