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

            string decStr = decodedString.toStdString();

            string StrToWrite;

            int count = 0;

            for(int i=0; i<decStr.length(); i++)
            {
                if(decStr[i] == ' ')
                {
                    count++;
                }

                if(count == 3)
                {
                    count = 0;
                    StrToWrite.push_back(decStr[i]);
                    i++;
                    StrToWrite.push_back(decStr[i]);
                    StrToWrite.push_back('\n');
                }
                else
                {
                    StrToWrite.push_back(decStr[i]);
                }

            }



            ofstream fileTempOut(TEMPFILE);

            if(fileTempOut) fileTempOut<<StrToWrite;

            fileTempOut.close();
        }

        ifstream fileTempIn(TEMPFILE);

        bool findAdmin=false;
        string login;
        int i;
        string x;

        int j=0;
        int count = 0;


        if (fileTempIn)
        {
            while(getline(fileTempIn,str))
            {

                for(int i=0; i<str.length(); i++)
                {
                    while(str[i]!=' ' && count == 0)
                    {
                        login.push_back(str[i]);
                        i++;
                    }

                    x += login;

                    if(login == "ADMIN")
                    {
                        findAdmin = true;
                        CanEnter = true;
                        break;
                    }


                    login.clear();

                    i++;
                    count++;

                    while(str[i]!=' ')
                    {
                        i++;
                    }

                    count++;

                    if(count == 2)
                    {
                        count = 0;
                        i += 4;
                    }
                }
            }
        }

        fileTempIn.close();
        this->close();


        ofstream filex("X.db");

        if(filex)
        {
            filex<<x;
        }
        filex.close();
    }
}


void Decryption::on_pushButton_2_clicked()
{
    this->close();
}
