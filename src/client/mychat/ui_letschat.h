/********************************************************************************
** Form generated from reading UI file 'letschat.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LETSCHAT_H
#define UI_LETSCHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QPushButton *addbuddy;
    QPushButton *pushButton_2;
    QLabel *fnameLabel;
    QTreeWidget *flistWidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *confirm;
    QPushButton *encrypted;
    QPushButton *pushButton;

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
        addbuddy = new QPushButton(Letschat);
        addbuddy->setObjectName(QStringLiteral("addbuddy"));
        addbuddy->setGeometry(QRect(10, 270, 41, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../icon/add.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        addbuddy->setIcon(icon);
        addbuddy->setIconSize(QSize(50, 50));
        pushButton_2 = new QPushButton(Letschat);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 380, 40, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../icon/setup.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        fnameLabel = new QLabel(Letschat);
        fnameLabel->setObjectName(QStringLiteral("fnameLabel"));
        fnameLabel->setGeometry(QRect(320, 12, 481, 21));
        fnameLabel->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        flistWidget = new QTreeWidget(Letschat);
        QFont font;
        font.setPointSize(16);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignCenter);
        __qtreewidgetitem->setFont(0, font);
        flistWidget->setHeaderItem(__qtreewidgetitem);
        flistWidget->setObjectName(QStringLiteral("flistWidget"));
        flistWidget->setGeometry(QRect(55, 12, 256, 411));
        textEdit = new QTextEdit(Letschat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(320, 35, 480, 261));
        textEdit_2 = new QTextEdit(Letschat);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(320, 320, 421, 101));
        confirm = new QPushButton(Letschat);
        confirm->setObjectName(QStringLiteral("confirm"));
        confirm->setGeometry(QRect(745, 318, 61, 101));
        encrypted = new QPushButton(Letschat);
        encrypted->setObjectName(QStringLiteral("encrypted"));
        encrypted->setGeometry(QRect(10, 320, 41, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../icon/timg.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        encrypted->setIcon(icon2);
        encrypted->setIconSize(QSize(41, 41));
        pushButton = new QPushButton(Letschat);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 41, 41));

        retranslateUi(Letschat);

        QMetaObject::connectSlotsByName(Letschat);
    } // setupUi

    void retranslateUi(QDialog *Letschat)
    {
        Letschat->setWindowTitle(QApplication::translate("Letschat", "Dialog", Q_NULLPTR));
        label->setText(QString());
        addbuddy->setText(QString());
        pushButton_2->setText(QString());
        fnameLabel->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = flistWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("Letschat", "friends list", Q_NULLPTR));
        confirm->setText(QApplication::translate("Letschat", "enter", Q_NULLPTR));
        encrypted->setText(QString());
        pushButton->setText(QApplication::translate("Letschat", "bye", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Letschat: public Ui_Letschat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LETSCHAT_H
