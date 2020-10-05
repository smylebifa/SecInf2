/********************************************************************************
** Form generated from reading UI file 'editusers.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSERS_H
#define UI_EDITUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditUsers
{
public:
    QLabel *label;
    QLineEdit *UserName;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *EditUsers)
    {
        if (EditUsers->objectName().isEmpty())
            EditUsers->setObjectName(QStringLiteral("EditUsers"));
        EditUsers->resize(400, 300);
        EditUsers->setMinimumSize(QSize(400, 300));
        EditUsers->setMaximumSize(QSize(400, 300));
        label = new QLabel(EditUsers);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 60, 101, 16));
        UserName = new QLineEdit(EditUsers);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(190, 60, 131, 20));
        label_2 = new QLabel(EditUsers);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 61, 16));
        label_3 = new QLabel(EditUsers);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 150, 131, 16));
        checkBox = new QCheckBox(EditUsers);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(210, 110, 70, 17));
        checkBox_2 = new QCheckBox(EditUsers);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(210, 150, 70, 17));
        pushButton = new QPushButton(EditUsers);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 202, 80, 25));
        pushButton_2 = new QPushButton(EditUsers);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 202, 80, 25));
        pushButton_3 = new QPushButton(EditUsers);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 252, 80, 25));
        pushButton_4 = new QPushButton(EditUsers);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 252, 80, 25));

        retranslateUi(EditUsers);

        QMetaObject::connectSlotsByName(EditUsers);
    } // setupUi

    void retranslateUi(QDialog *EditUsers)
    {
        EditUsers->setWindowTitle(QApplication::translate("EditUsers", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", 0));
        label->setText(QApplication::translate("EditUsers", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", 0));
        label_2->setText(QApplication::translate("EditUsers", "\320\221\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\272\320\260", 0));
        label_3->setText(QApplication::translate("EditUsers", "\320\237\320\260\321\200\320\276\320\273\321\214\320\275\320\276\320\265 \320\276\320\263\321\200\320\260\320\275\320\270\321\207\320\265\320\275\320\270\320\265", 0));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        pushButton->setText(QApplication::translate("EditUsers", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271", 0));
        pushButton_2->setText(QApplication::translate("EditUsers", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        pushButton_3->setText(QApplication::translate("EditUsers", "\320\236\320\272", 0));
        pushButton_4->setText(QApplication::translate("EditUsers", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class EditUsers: public Ui_EditUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSERS_H
