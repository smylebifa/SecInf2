#include "decryption.h"
#include "ui_decryption.h"
#include "simplecrypt.h"

Decryption::Decryption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Decryption)
{
    ui->setupUi(this);
    CanEnter = false;
}

Decryption::~Decryption()
{
    delete ui;
}

void Decryption::on_pushButton_clicked()
{
    string Key = ui->lineEdit->text().toStdString();

    ifstream fileKey("Key.db");

    string keyFromFile;

    if(fileKey)
    {
        getline(fileKey,keyFromFile);
    }
    fileKey.close();

    if(Key != keyFromFile)
    {
        QErrorMessage msg(this);
        msg.showMessage(tr("Password is not true"));
        msg.exec();
    }

    else if(Key == keyFromFile)
    {

        string str;
        QByteArray encodeText;

        QFile fileDec(DECFILE);
        if(fileDec.open(QIODevice::ReadOnly)) encodeText = fileDec.readAll();
        fileDec.close();

        QString key = QString::fromStdString(keyFromFile);
        QString iv("your-IV-vector");

        if(!encodeText.isEmpty())
        {
            QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);

            QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);
            QByteArray hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);

            QByteArray decodeText = encryption.decode(encodeText, hashKey, hashIV);

            QString decodedString = QString(encryption.removePadding(decodeText));

            ofstream fileTempOut(TEMPFILE);

            if(fileTempOut) fileTempOut<<decodedString.toStdString();

            fileTempOut.close();
        }

        ifstream fileTempIn(TEMPFILE);

        bool findAdmin=false;
        string login;
        int i;
        string x;

        int j=0;


        if (fileTempIn)
        {
            getline(fileTempIn,str);

            int count=0;

            for(int i=0; i<str.length(); i++)
            {
                if(str[i]!=' ' && count==0)
                {
                    login.push_back(str[i]);
                }
                else if(str[i]==' ')
                {
                    if(login == "ADMIN")
                    {
                        findAdmin = true;
                        break;
                    }
                    x+=login;
                    login.clear();

                    count++;

                    if(count == 3)
                    {
                        count = 0;
                        i += 2;
                    }
                }
            }
        }

        fileTempIn.close();
    }

}

void Decryption::on_pushButton_2_clicked()
{
    this->close();
}
