#ifndef DECRYPTION_H
#define DECRYPTION_H

#include <QDialog>
#include <unit1.h>

namespace Ui {
class Decryption;
}

class Decryption : public QDialog
{
    Q_OBJECT

public:
    explicit Decryption(QWidget *parent = 0);
    ~Decryption();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Decryption *ui;
};

#endif // DECRYPTION_H
