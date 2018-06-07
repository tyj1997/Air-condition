/********************************************************************************
** Form generated from reading UI file 'managewin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEWIN_H
#define UI_MANAGEWIN_H

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

class Ui_ManageWin
{
public:
    QLabel *label;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *ManageWin)
    {
        if (ManageWin->objectName().isEmpty())
            ManageWin->setObjectName(QStringLiteral("ManageWin"));
        ManageWin->resize(833, 644);
        ManageWin->setStyleSheet(QLatin1String("\n"
"#ManageWin{border-image: url(:/Air-Client/build-Air-Client-Desktop_Qt_5_8_0_MinGW_32bit-Debug/login.jpg);}"));
        label = new QLabel(ManageWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 110, 171, 101));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 24pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        username = new QLineEdit(ManageWin);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(320, 250, 221, 31));
        username->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        password = new QLineEdit(ManageWin);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(320, 320, 221, 31));
        password->setStyleSheet(QLatin1String("border-top-right-radius:5px;\n"
"border-top-left-radius:5px;\n"
"border:1 solid #BDC0BA;\n"
"height:20px;"));
        label_2 = new QLabel(ManageWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 250, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_3 = new QLabel(ManageWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 320, 111, 31));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 16pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton = new QPushButton(ManageWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 430, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));

        retranslateUi(ManageWin);

        QMetaObject::connectSlotsByName(ManageWin);
    } // setupUi

    void retranslateUi(QDialog *ManageWin)
    {
        ManageWin->setWindowTitle(QApplication::translate("ManageWin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ManageWin", "\346\267\273\345\212\240\347\224\250\346\210\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("ManageWin", "\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("ManageWin", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ManageWin", "\346\267\273\345\212\240", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ManageWin: public Ui_ManageWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEWIN_H
