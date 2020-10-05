/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_AddUser
{
public:
    QLabel *label;
    QLineEdit *UserName;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(400, 300);
        AddUser->setMinimumSize(QSize(400, 300));
        AddUser->setMaximumSize(QSize(400, 300));
        label = new QLabel(AddUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 120, 131, 16));
        UserName = new QLineEdit(AddUser);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(210, 120, 113, 20));
        pushButton = new QPushButton(AddUser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 210, 75, 23));
        pushButton_2 = new QPushButton(AddUser);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 210, 75, 23));

        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QDialog *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        label->setText(QApplication::translate("AddUser", "\320\230\320\274\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        pushButton->setText(QApplication::translate("AddUser", "\320\236\320\272", 0));
        pushButton_2->setText(QApplication::translate("AddUser", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
