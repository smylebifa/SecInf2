#include "unit1.h"
#include "ui_unit1.h"
#include "passworddialog.h"
#include "changepassword.h"
#include "adduser.h"
#include "editusers.h"
#include "about.h"
#include "decryption.h"
#include "simplecrypt.h"

AccountType User;

int Count;

bool IsAuthorized;

bool CanEnter;

Unit1::Unit1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Unit1)
{
    ui->setupUi(this);

    ui->All->setVisible(false);
    ui->Change->setVisible(false);
    ui->New->setVisible(false);

    ui->pushButton->setVisible(false);

    IsAuthorized = false;

    //�������� �������������� ������...
    passPhrase();

    //���� ������ ������, ��������� �����...
    if (CanEnter)
    {
        ui->pushButton->setVisible(true);
    }

    checkFile();

    connect(ui->Exit,SIGNAL(triggered(bool)),this,SLOT(decryption()));
    connect(ui->Exit,SIGNAL(triggered(bool)),this,SLOT(close()));

    connect(ui->About,SIGNAL(triggered(bool)),this,SLOT(about()));

}

Unit1::~Unit1()
{
    delete ui;
}

void Unit1::checkFile()
{
    ofstream file(TEMPFILE,std::ios::app);

    if(!file)
    {
        User.UserName="ADMIN";
        User.UserPass="";
        User.Block='-';
        User.Restrict='+';

        file<<User.UserName<<" "<<User.UserPass<<" "<<User.Block<<" "<<User.Restrict<<"\n";
    }

    file.close();

}

//����� �������� ����� � ������������� �����...
void Unit1::decryption()
{
    ifstream file(TEMPFILE);

    string text,str;

    if(file)
    {
        while (getline(file,str))
        {
            text.append(str);
    //            text.append("\n");
        }
    }
    file.close();


    ifstream fileKey("Key.db");

    string keyFromFile;

    if(fileKey)
    {
        getline(fileKey,keyFromFile);
    }
    fileKey.close();


    QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);

    QString inputStr = QString::fromStdString(text);
    QString key = QString::fromStdString(keyFromFile);
    QString iv("your-IV-vector");

    QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);
    QByteArray hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);

    QByteArray encodeText = encryption.encode(inputStr.toLocal8Bit(), hashKey, hashIV);

    QFile fileDec(DECFILE);

    if(fileDec.open(QIODevice::WriteOnly))
    {
        fileDec.write(encodeText);
    }

    if(remove("TempFile.db")!=0)
        return;
}


void Unit1::passPhrase()
{
    Decryption decr;
    decr.show();
    decr.exec();
}


void Unit1::on_pushButton_clicked()
{
    PasswordDialog dialog;
    dialog.show();
    dialog.exec();

    if(IsAuthorized)
    {
        ui->pushButton->setVisible(false);

        if(User.Block=='-')
            ui->Change->setVisible(true);
    }

    checkAdmin();

    connect(ui->Change,SIGNAL(triggered(bool)),this,SLOT(changePassword()));
    connect(ui->New,SIGNAL(triggered(bool)),this,SLOT(addUser()));
    connect(ui->All,SIGNAL(triggered(bool)),this,SLOT(editUsers()));

}


void Unit1::about()
{
    About dialog;
    dialog.show();
    dialog.exec();
}

void Unit1::checkAdmin()
{
    if(User.UserName=="ADMIN")
    {
        ui->All->setVisible(true);
        ui->New->setVisible(true);
    }
    else
    {
        ui->All->setVisible(false);
        ui->New->setVisible(false);
    }
}

void Unit1::changePassword()
{
    ChangePassword dialog;
    dialog.show();
    dialog.exec();
}

void Unit1::addUser()
{
    AddUser dialog;
    dialog.show();
    dialog.exec();
}

void Unit1::editUsers()
{
    EditUsers dialog;
    dialog.show();
    dialog.exec();
}
