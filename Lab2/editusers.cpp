#include "editusers.h"
#include "ui_editusers.h"

EditUsers::EditUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditUsers)
{
    ui->setupUi(this);

    Count=0;
}

EditUsers::~EditUsers()
{
    delete ui;
}

void EditUsers::on_pushButton_4_clicked()
{
    this->close();
}

void EditUsers::on_pushButton_3_clicked()
{
    this->close();
}

void EditUsers::on_pushButton_clicked()
{
    ifstream file(TEMPFILE);

    string login,str;

    int i;
    char block;
    char res;

    if (file){

        for(int k=0;k<Count;k++)
            getline(file,str);

        if(getline(file,str))
        {
            i=0;
            while (str[i]!=' '){
                login.push_back(str[i]);
                i++;
            }

            if(str[i+1]!='-' && str[i+1]!='+')
            {
                while (str[i+1]!=' ')
                    i++;

                block=str[i+2];
                res=str[i+4];
            }
            else
            {
                block=str[i+1];
                res=str[i+3];
            }

            Count++;
        }

        else Count=0;
    }

    file.close();

    ui->UserName->setText(QString::fromStdString(login));


    ui->checkBox->setChecked(false);

    ui->checkBox_2->setChecked(false);


    if(block=='-') ui->checkBox->setChecked(false);

    else if(block=='+') ui->checkBox->setChecked(true);


    if(res=='-') ui->checkBox_2->setChecked(false);

    else if(res=='+') ui->checkBox_2->setChecked(true);

}


void EditUsers::on_pushButton_2_clicked()
{
    string login=ui->UserName->text().toStdString();
    bool block=ui->checkBox->isChecked();
    bool res=ui->checkBox_2->isChecked();
    char cblock,cres;


    ifstream file1(TEMPFILE);
    ofstream file2("TempCopy.db");

    string str,log,pas;

    int i;

    if (file1 && file2){
        while(getline(file1,str))
        {
            i=0;
            while (str[i]!=' '){
                log.push_back(str[i]);
                i++;
            }

            if(login==log)
            {
                if(str[i+1]!='+' && str[i+1]!='-'){
                    while(str[i+1]!=' '){
                        pas.push_back(str[i+1]);
                        i++;}
                }

                if(block)
                    cblock='+';
                else if(!block)
                    cblock='-';

                if(res)
                    cres='+';
                else if(!res)
                    cres='-';


                file2<<login<<" "<<pas<<" "<<cblock<<" "<<cres<<"\n";
            }

            else file2<<str<<"\n";

            log.clear();
        }
    }

    file1.close();
    file2.close();


    ifstream nfile1("TempCopy.db");
    ofstream nfile2(TEMPFILE);


    if (nfile1 && nfile2){
        while(getline(nfile1,str))
        {
            nfile2<<str<<"\n";
        }
    }

    nfile1.close();
    nfile2.close();

    if(remove("TempCopy.db")!=0)
        return;


}
