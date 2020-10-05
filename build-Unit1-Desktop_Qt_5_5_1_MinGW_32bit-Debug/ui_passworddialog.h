/********************************************************************************
** Form generated from reading UI file 'passworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDDIALOG_H
#define UI_PASSWORDDIALOG_H

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

class Ui_PasswordDialog
{
public:
    QPushButton *pushButton_2;
    QLineEdit *Login;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *Password;
    QPushButton *pushButton;

    void setupUi(QDialog *PasswordDialog)
    {
        if (PasswordDialog->objectName().isEmpty())
            PasswordDialog->setObjectName(QStringLiteral("PasswordDialog"));
        PasswordDialog->resize(400, 300);
        PasswordDialog->setMaximumSize(QSize(400, 300));
        pushButton_2 = new QPushButton(PasswordDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 210, 75, 23));
        Login = new QLineEdit(PasswordDialog);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(110, 98, 91, 20));
        label_2 = new QLabel(PasswordDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 124, 86, 16));
        label = new QLabel(PasswordDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 61, 68, 16));
        Password = new QLineEdit(PasswordDialog);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(110, 160, 161, 20));
        Password->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(PasswordDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 210, 75, 23));

        retranslateUi(PasswordDialog);

        QMetaObject::connectSlotsByName(PasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswordDialog)
    {
        PasswordDialog->setWindowTitle(QApplication::translate("PasswordDialog", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", 0));
        pushButton_2->setText(QApplication::translate("PasswordDialog", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        label_2->setText(QApplication::translate("PasswordDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", 0));
        label->setText(QApplication::translate("PasswordDialog", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217:", 0));
        pushButton->setText(QApplication::translate("PasswordDialog", "\320\236\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class PasswordDialog: public Ui_PasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDDIALOG_H
