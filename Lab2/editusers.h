#ifndef EDITUSERS_H
#define EDITUSERS_H

#include <QDialog>
#include <unit1.h>

namespace Ui {
class EditUsers;
}

class EditUsers : public QDialog
{
    Q_OBJECT

public:
    explicit EditUsers(QWidget *parent = 0);
    ~EditUsers();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EditUsers *ui;    
};

#endif // EDITUSERS_H
