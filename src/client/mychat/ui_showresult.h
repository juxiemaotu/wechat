/********************************************************************************
** Form generated from reading UI file 'showresult.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWRESULT_H
#define UI_SHOWRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Showresult
{
public:
    QLabel *msgLabel;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Showresult)
    {
        if (Showresult->objectName().isEmpty())
            Showresult->setObjectName(QStringLiteral("Showresult"));
        Showresult->resize(400, 227);
        msgLabel = new QLabel(Showresult);
        msgLabel->setObjectName(QStringLiteral("msgLabel"));
        msgLabel->setGeometry(QRect(90, 40, 191, 31));
        msgLabel->setStyleSheet(QStringLiteral(""));
        okButton = new QPushButton(Showresult);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(70, 140, 89, 25));
        cancelButton = new QPushButton(Showresult);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(200, 140, 89, 25));

        retranslateUi(Showresult);

        QMetaObject::connectSlotsByName(Showresult);
    } // setupUi

    void retranslateUi(QDialog *Showresult)
    {
        Showresult->setWindowTitle(QApplication::translate("Showresult", "Dialog", Q_NULLPTR));
        msgLabel->setText(QString());
        okButton->setText(QString());
        cancelButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Showresult: public Ui_Showresult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWRESULT_H
