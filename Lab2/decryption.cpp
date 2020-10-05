#include "decryption.h"
#include "ui_decryption.h"
#include "simplecrypt.h"

Decryption::Decryption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Decryption)
{
    ui->setupUi(this);
    CanEnter=false;
}

Decryption::~Decryption()
{
    delete ui;
}

void Decryption::on_pushButton_clicked()
{
    Key = ui->lineEdit->text().toStdString();

    if(Key != "12345")
    {
        QErrorMessage msg(this);
        msg.showMessage(tr("Password is not true"));
        msg.exec();
    }

    else
    {

    CanClose=true;

    string str;
    QByteArray encodeText;

    QFile fileDec(DECFILE);
    if(fileDec.open(QIODevice::ReadOnly)) encodeText = fileDec.readAll();
    fileDec.close();

    QString key("12345");
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



//    if(!str.empty())
//    {

//        SimpleCrypt processSimpleCrypt(Key);

//        //Decrypt
//        QString decrypt = processSimpleCrypt.decryptToString(QString::fromStdString(str));

//        ofstream fileTempOut(TEMPFILE);

//        if(fileTempOut) fileTempOut<<decrypt.toStdString();

//        fileTempOut.close();
//    }



    ifstream fileTempIn(TEMPFILE);

    bool findAdmin=false;
    string login;
    int i;

    if (fileTempIn)
    {
        while(getline(fileTempIn,str))
        {
            i=0;
            while (str[i]!=' ')
            {
                login.push_back(str[i]);
                i++;
            }

            if(login=="ADMIN")
            {
                findAdmin=true;
                break;
            }
            login.clear();
        }
    }

    fileTempIn.close();

    if(findAdmin)
    {
        CanEnter=true;
        this->close();
    }

    else
    {
        CanClose=false;
        this->close();
    }

    }

}

void Decryption::on_pushButton_2_clicked()
{
    this->close();
}
