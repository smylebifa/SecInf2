/********************************************************************************
** Form generated from reading UI file 'unit1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNIT1_H
#define UI_UNIT1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Unit1
{
public:
    QAction *Change;
    QAction *New;
    QAction *All;
    QAction *Exit;
    QAction *About;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Unit1)
    {
        if (Unit1->objectName().isEmpty())
            Unit1->setObjectName(QStringLiteral("Unit1"));
        Unit1->resize(400, 300);
        Unit1->setMinimumSize(QSize(400, 300));
        Unit1->setMaximumSize(QSize(400, 300));
        Change = new QAction(Unit1);
        Change->setObjectName(QStringLiteral("Change"));
        New = new QAction(Unit1);
        New->setObjectName(QStringLiteral("New"));
        All = new QAction(Unit1);
        All->setObjectName(QStringLiteral("All"));
        Exit = new QAction(Unit1);
        Exit->setObjectName(QStringLiteral("Exit"));
        About = new QAction(Unit1);
        About->setObjectName(QStringLiteral("About"));
        centralWidget = new QWidget(Unit1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 110, 100, 25));
        Unit1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Unit1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        Unit1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Unit1);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Unit1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Unit1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Unit1->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(Change);
        menu->addAction(New);
        menu->addAction(All);
        menu->addSeparator();
        menu->addAction(Exit);
        menu_2->addAction(About);

        retranslateUi(Unit1);

        QMetaObject::connectSlotsByName(Unit1);
    } // setupUi

    void retranslateUi(QMainWindow *Unit1)
    {
        Unit1->setWindowTitle(QApplication::translate("Unit1", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", 0));
        Change->setText(QApplication::translate("Unit1", "\320\241\320\274\320\265\320\275\320\260 \320\277\320\260\321\200\320\276\320\273\321\217", 0));
        New->setText(QApplication::translate("Unit1", "\320\235\320\276\320\262\321\213\320\271 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", 0));
        All->setText(QApplication::translate("Unit1", "\320\222\321\201\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", 0));
        Exit->setText(QApplication::translate("Unit1", "\320\222\321\213\321\205\320\276\320\264", 0));
        About->setText(QApplication::translate("Unit1", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        pushButton->setText(QApplication::translate("Unit1", "\320\222\321\205\320\276\320\264 \320\262 \321\201\320\270\321\201\321\202\320\265\320\274\321\203", 0));
        menu->setTitle(QApplication::translate("Unit1", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", 0));
        menu_2->setTitle(QApplication::translate("Unit1", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Unit1: public Ui_Unit1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNIT1_H
