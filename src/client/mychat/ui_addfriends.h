/********************************************************************************
** Form generated from reading UI file 'addfriends.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIENDS_H
#define UI_ADDFRIENDS_H

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

class Ui_addfriends
{
public:
    QLabel *addfriends_2;
    QLineEdit *lineEdit;
    QPushButton *confirm;
    QPushButton *cancel;

    void setupUi(QDialog *addfriends)
    {
        if (addfriends->objectName().isEmpty())
            addfriends->setObjectName(QStringLiteral("addfriends"));
        addfriends->resize(400, 300);
        addfriends_2 = new QLabel(addfriends);
        addfriends_2->setObjectName(QStringLiteral("addfriends_2"));
        addfriends_2->setGeometry(QRect(70, 40, 240, 30));
        QFont font;
        font.setPointSize(16);
        addfriends_2->setFont(font);
        addfriends_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(addfriends);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 90, 151, 31));
        confirm = new QPushButton(addfriends);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(230, 230, 89, 25));
        cancel = new QPushButton(addfriends);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(40, 230, 89, 25));

        retranslateUi(addfriends);

        QMetaObject::connectSlotsByName(addfriends);
    } // setupUi

    void retranslateUi(QDialog *addfriends)
    {
        addfriends->setWindowTitle(QApplication::translate("addfriends", "Dialog", Q_NULLPTR));
        addfriends_2->setText(QApplication::translate("addfriends", "addfriends", Q_NULLPTR));
        confirm->setText(QApplication::translate("addfriends", "OK", Q_NULLPTR));
        cancel->setText(QApplication::translate("addfriends", "cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addfriends: public Ui_addfriends {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIENDS_H
