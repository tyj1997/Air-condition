/********************************************************************************
** Form generated from reading UI file 'settingwin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGWIN_H
#define UI_SETTINGWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingWin
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *SettingWin)
    {
        if (SettingWin->objectName().isEmpty())
            SettingWin->setObjectName(QStringLiteral("SettingWin"));
        SettingWin->resize(574, 416);
        SettingWin->setStyleSheet(QStringLiteral("#SettingWin {border-image: url(:/Air-Client/build-Air-Client-Desktop_Qt_5_8_0_MinGW_32bit-Debug/ask.jpg)}"));
        pushButton = new QPushButton(SettingWin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 310, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        pushButton_2 = new QPushButton(SettingWin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 310, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background-color: rgb(144,238,144);\n"
"border-radius:8px;\n"
"width:71px;\n"
" height:22px;"));
        label = new QLabel(SettingWin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 190, 101, 41));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label_2 = new QLabel(SettingWin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 101, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        comboBox = new QComboBox(SettingWin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(280, 95, 91, 31));
        comboBox_2 = new QComboBox(SettingWin);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(280, 195, 91, 31));

        retranslateUi(SettingWin);

        QMetaObject::connectSlotsByName(SettingWin);
    } // setupUi

    void retranslateUi(QDialog *SettingWin)
    {
        SettingWin->setWindowTitle(QApplication::translate("SettingWin", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SettingWin", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SettingWin", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("SettingWin", "\345\267\245\344\275\234\346\250\241\345\274\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("SettingWin", "\345\275\223\345\211\215\347\212\266\346\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingWin: public Ui_SettingWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGWIN_H
