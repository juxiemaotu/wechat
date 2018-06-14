/********************************************************************************
** Form generated from reading UI file 'mibaosiugai.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIBAOSIUGAI_H
#define UI_MIBAOSIUGAI_H

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

class Ui_mibaosiugai
{
public:
    QLabel *newencrypyed;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *confirm;
    QPushButton *cancel;
    QLabel *answer;

    void setupUi(QDialog *mibaosiugai)
    {
        if (mibaosiugai->objectName().isEmpty())
            mibaosiugai->setObjectName(QStringLiteral("mibaosiugai"));
        mibaosiugai->resize(400, 300);
        newencrypyed = new QLabel(mibaosiugai);
        newencrypyed->setObjectName(QStringLiteral("newencrypyed"));
        newencrypyed->setGeometry(QRect(60, 60, 111, 17));
        lineEdit = new QLineEdit(mibaosiugai);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 60, 113, 25));
        lineEdit_2 = new QLineEdit(mibaosiugai);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 110, 113, 25));
        confirm = new QPushButton(mibaosiugai);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(230, 230, 89, 25));
        cancel = new QPushButton(mibaosiugai);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(60, 230, 89, 25));
        answer = new QLabel(mibaosiugai);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(60, 120, 67, 17));

        retranslateUi(mibaosiugai);

        QMetaObject::connectSlotsByName(mibaosiugai);
    } // setupUi

    void retranslateUi(QDialog *mibaosiugai)
    {
        mibaosiugai->setWindowTitle(QApplication::translate("mibaosiugai", "Dialog", Q_NULLPTR));
        newencrypyed->setText(QApplication::translate("mibaosiugai", "new encrypted", Q_NULLPTR));
        confirm->setText(QApplication::translate("mibaosiugai", "OK", Q_NULLPTR));
        cancel->setText(QApplication::translate("mibaosiugai", "cancel", Q_NULLPTR));
        answer->setText(QApplication::translate("mibaosiugai", "answer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mibaosiugai: public Ui_mibaosiugai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIBAOSIUGAI_H
