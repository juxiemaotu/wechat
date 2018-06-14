/********************************************************************************
** Form generated from reading UI file 'letschat.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LETSCHAT_H
#define UI_LETSCHAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_Letschat
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *fnameLabel;
    QTreeWidget *flistWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Letschat)
    {
        if (Letschat->objectName().isEmpty())
            Letschat->setObjectName(QStringLiteral("Letschat"));
        Letschat->resize(811, 436);
        label = new QLabel(Letschat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 13, 40, 40));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../coder98/proj/Chat/src/icon/myhead.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(Letschat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(9, 339, 40, 40));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../coder98/proj/Chat/src/icon/add.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(50, 50));
        pushButton_2 = new QPushButton(Letschat);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 389, 40, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../../../../coder98/proj/Chat/src/icon/setup.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        fnameLabel = new QLabel(Letschat);
        fnameLabel->setObjectName(QStringLiteral("fnameLabel"));
        fnameLabel->setGeometry(QRect(320, 12, 481, 21));
        fnameLabel->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        flistWidget = new QTreeWidget(Letschat);
        flistWidget->setObjectName(QStringLiteral("flistWidget"));
        flistWidget->setGeometry(QRect(55, 12, 256, 411));
        textEdit = new QTextEdit(Letschat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(320, 35, 480, 261));
        textEdit_2 = new QTextEdit(Letschat);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(320, 339, 421, 81));
        pushButton_3 = new QPushButton(Letschat);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(745, 339, 61, 80));
        pushButton_4 = new QPushButton(Letschat);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(323, 306, 61, 25));
        pushButton_5 = new QPushButton(Letschat);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(400, 306, 61, 25));
        pushButton_6 = new QPushButton(Letschat);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(480, 305, 61, 25));
        pushButton_7 = new QPushButton(Letschat);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(560, 306, 61, 25));

        retranslateUi(Letschat);

        QMetaObject::connectSlotsByName(Letschat);
    } // setupUi

    void retranslateUi(QDialog *Letschat)
    {
        Letschat->setWindowTitle(QApplication::translate("Letschat", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        fnameLabel->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = flistWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Letschat", "friend list", nullptr));
        pushButton_3->setText(QApplication::translate("Letschat", "SEND", nullptr));
        pushButton_4->setText(QApplication::translate("Letschat", "PushButton", nullptr));
        pushButton_5->setText(QApplication::translate("Letschat", "PushButton", nullptr));
        pushButton_6->setText(QApplication::translate("Letschat", "PushButton", nullptr));
        pushButton_7->setText(QApplication::translate("Letschat", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Letschat: public Ui_Letschat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LETSCHAT_H
