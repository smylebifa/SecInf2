/********************************************************************************
** Form generated from reading UI file 'decryption.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECRYPTION_H
#define UI_DECRYPTION_H

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

class Ui_Decryption
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Decryption)
    {
        if (Decryption->objectName().isEmpty())
            Decryption->setObjectName(QStringLiteral("Decryption"));
        Decryption->resize(400, 180);
        label = new QLabel(Decryption);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 260, 15));
        lineEdit = new QLineEdit(Decryption);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 70, 261, 20));
        pushButton = new QPushButton(Decryption);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 120, 75, 23));
        pushButton_2 = new QPushButton(Decryption);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 120, 75, 23));

        retranslateUi(Decryption);

        QMetaObject::connectSlotsByName(Decryption);
    } // setupUi

    void retranslateUi(QDialog *Decryption)
    {
        Decryption->setWindowTitle(QApplication::translate("Decryption", "\320\240\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        label->setText(QApplication::translate("Decryption", "\320\237\320\260\321\200\320\276\320\273\321\214 \320\264\320\273\321\217 \321\200\320\260\321\201\321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\261\320\260\320\267\321\213 \321\203\321\207\320\265\321\202\320\275\321\213\321\205 \320\267\320\260\320\277\320\270\321\201\320\265\320\271", 0));
        pushButton->setText(QApplication::translate("Decryption", "\320\236\320\272", 0));
        pushButton_2->setText(QApplication::translate("Decryption", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Decryption: public Ui_Decryption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTION_H
