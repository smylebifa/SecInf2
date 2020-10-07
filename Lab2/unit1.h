#ifndef UNIT1_H
#define UNIT1_H

#include <QMainWindow>
#include <fstream>
#include <QErrorMessage>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QCryptographicHash>
#include "qaesencryption.h"

using namespace std;

#define TEMPFILE "TempFile.db"

#define DECFILE "DecFile.db"

struct AccountType
{
    string UserName;
    string UserPass;
    char Block;
    char Restrict;
};

extern AccountType User;

extern int Count;

extern bool CanClose;

extern bool CanEnter;

namespace Ui {
class Unit1;
}

class Unit1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Unit1(QWidget *parent = 0);
    ~Unit1();
    void checkFile();

private slots:
    void on_pushButton_clicked();
    void checkAdmin();
    void changePassword();
    void addUser();
    void editUsers();
    void about();
    void decryption();
    void passPhrase();

private:
    Ui::Unit1 *ui;
};

#endif // UNIT1_H
