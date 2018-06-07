/********************************************************************************
** Form generated from reading UI file 'stasticwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STASTICWIN_H
#define UI_STASTICWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StasticWin
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QTableWidget *tableWidget;
    QComboBox *comboBox;

    void setupUi(QDialog *StasticWin)
    {
        if (StasticWin->objectName().isEmpty())
            StasticWin->setObjectName(QStringLiteral("StasticWin"));
        StasticWin->resize(1014, 673);
        StasticWin->setStyleSheet(QStringLiteral("#StasticWin{border-image: url(:/Air-Client/build-Air-Client-Desktop_Qt_5_8_0_MinGW_32bit-Debug/main.jpg)}"));
        label = new QLabel(StasticWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 20, 171, 71));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 24pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        pushButton = new QPushButton(StasticWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(810, 110, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        label_2 = new QLabel(StasticWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 101, 31));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_3 = new QLabel(StasticWin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 120, 101, 31));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        dateEdit = new QDateEdit(StasticWin);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(170, 120, 110, 22));
        dateEdit_2 = new QDateEdit(StasticWin);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(430, 120, 110, 22));
        tableWidget = new QTableWidget(StasticWin);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(70, 180, 871, 401));
        comboBox = new QComboBox(StasticWin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(610, 115, 91, 31));

        retranslateUi(StasticWin);

        QMetaObject::connectSlotsByName(StasticWin);
    } // setupUi

    void retranslateUi(QDialog *StasticWin)
    {
        StasticWin->setWindowTitle(QApplication::translate("StasticWin", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("StasticWin", "\346\212\245\350\241\250\347\273\237\350\256\241", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StasticWin", "\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("StasticWin", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("StasticWin", "\347\273\210\346\255\242\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StasticWin: public Ui_StasticWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STASTICWIN_H
