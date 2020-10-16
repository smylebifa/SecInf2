/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

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

class Ui_ChangePassword
{
public:
    QLabel *label;
    QLineEdit *Edit1;
    QLabel *label_2;
    QLineEdit *Edit2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *Edit3;

    void setupUi(QDialog *ChangePassword)
    {
        if (ChangePassword->objectName().isEmpty())
            ChangePassword->setObjectName(QStringLiteral("ChangePassword"));
        ChangePassword->resize(400, 300);
        ChangePassword->setMinimumSize(QSize(400, 300));
        ChangePassword->setMaximumSize(QSize(400, 300));
        label = new QLabel(ChangePassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 71, 16));
        Edit1 = new QLineEdit(ChangePassword);
        Edit1->setObjectName(QStringLiteral("Edit1"));
        Edit1->setGeometry(QRect(180, 90, 111, 20));
        Edit1->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(ChangePassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 91, 16));
        Edit2 = new QLineEdit(ChangePassword);
        Edit2->setObjectName(QStringLiteral("Edit2"));
        Edit2->setGeometry(QRect(180, 150, 111, 20));
        Edit2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(ChangePassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 220, 75, 23));
        pushButton_2 = new QPushButton(ChangePassword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 220, 75, 23));
        label_3 = new QLabel(ChangePassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 30, 81, 16));
        Edit3 = new QLineEdit(ChangePassword);
        Edit3->setObjectName(QStringLiteral("Edit3"));
        Edit3->setGeometry(QRect(180, 30, 111, 20));
        Edit3->setEchoMode(QLineEdit::Password);

        retranslateUi(ChangePassword);

        QMetaObject::connectSlotsByName(ChangePassword);
    } // setupUi

    void retranslateUi(QDialog *ChangePassword)
    {
        ChangePassword->setWindowTitle(QApplication::translate("ChangePassword", "\320\241\320\274\320\265\320\275\320\260 \320\277\320\260\321\200\320\276\320\273\321\217", 0));
        label->setText(QApplication::translate("ChangePassword", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        label_2->setText(QApplication::translate("ChangePassword", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265", 0));
        pushButton->setText(QApplication::translate("ChangePassword", "\320\236\320\272", 0));
        pushButton_2->setText(QApplication::translate("ChangePassword", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        label_3->setText(QApplication::translate("ChangePassword", "\320\241\321\202\320\260\321\200\321\213\320\271 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePassword: public Ui_ChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
