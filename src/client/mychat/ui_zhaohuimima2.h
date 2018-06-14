/********************************************************************************
** Form generated from reading UI file 'zhaohuimima2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZHAOHUIMIMA2_H
#define UI_ZHAOHUIMIMA2_H

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

class Ui_zhaohuimima2
{
public:
    QLabel *ENCRYPTED;
    QLabel *problem;
    QLabel *label;
    QPushButton *confirm;
    QPushButton *cancel2;
    QLabel *answer;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QDialog *zhaohuimima2)
    {
        if (zhaohuimima2->objectName().isEmpty())
            zhaohuimima2->setObjectName(QStringLiteral("zhaohuimima2"));
        zhaohuimima2->resize(400, 300);
        ENCRYPTED = new QLabel(zhaohuimima2);
        ENCRYPTED->setObjectName(QStringLiteral("ENCRYPTED"));
        ENCRYPTED->setGeometry(QRect(70, 40, 240, 50));
        QFont font;
        font.setPointSize(16);
        ENCRYPTED->setFont(font);
        ENCRYPTED->setAlignment(Qt::AlignCenter);
        problem = new QLabel(zhaohuimima2);
        problem->setObjectName(QStringLiteral("problem"));
        problem->setGeometry(QRect(30, 110, 67, 17));
        problem->setAlignment(Qt::AlignCenter);
        label = new QLabel(zhaohuimima2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 110, 171, 21));
        label->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        confirm = new QPushButton(zhaohuimima2);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(70, 220, 89, 25));
        cancel2 = new QPushButton(zhaohuimima2);
        cancel2->setObjectName(QStringLiteral("cancel2"));
        cancel2->setGeometry(QRect(230, 220, 89, 25));
        answer = new QLabel(zhaohuimima2);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(30, 160, 67, 17));
        answer->setFrameShape(QFrame::NoFrame);
        lineEdit = new QLineEdit(zhaohuimima2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 160, 171, 21));
        label_2 = new QLabel(zhaohuimima2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 200, 67, 17));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        retranslateUi(zhaohuimima2);

        QMetaObject::connectSlotsByName(zhaohuimima2);
    } // setupUi

    void retranslateUi(QDialog *zhaohuimima2)
    {
        zhaohuimima2->setWindowTitle(QApplication::translate("zhaohuimima2", "Dialog", Q_NULLPTR));
        ENCRYPTED->setText(QApplication::translate("zhaohuimima2", "ENCRYPTED", Q_NULLPTR));
        problem->setText(QApplication::translate("zhaohuimima2", "problem", Q_NULLPTR));
        label->setText(QString());
        confirm->setText(QApplication::translate("zhaohuimima2", "OK", Q_NULLPTR));
        cancel2->setText(QApplication::translate("zhaohuimima2", "cancel", Q_NULLPTR));
        answer->setText(QApplication::translate("zhaohuimima2", "answer", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class zhaohuimima2: public Ui_zhaohuimima2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZHAOHUIMIMA2_H
