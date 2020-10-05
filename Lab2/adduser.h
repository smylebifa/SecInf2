#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include <unit1.h>

namespace Ui {
class AddUser;
}

class AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = 0);
    ~AddUser();

    bool findUser(string login);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddUser *ui;
};

#endif // ADDUSER_H
