#ifndef PASSWORDDIALOG_H
#define PASSWORDDIALOG_H

#include <QDialog>
#include <unit1.h>
#include <changepassword.h>

namespace Ui {
class PasswordDialog;
}

extern int Error;

class PasswordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswordDialog(QWidget *parent = 0);
    ~PasswordDialog();  

    bool checkPassOnRestrict(string password);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();   

private:
    Ui::PasswordDialog *ui;
};

#endif // PASSWORDDIALOG_H
