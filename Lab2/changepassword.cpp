#include "changepassword.h"
#include "ui_changepassword.h"

ChangePassword::ChangePassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);

    ui->Edit1->setText("");
    ui->Edit2->setText("");

}

ChangePassword::~ChangePassword()
{
    delete ui;
}

//return true if password is satisfies
//the conditions of restrictions
//false in other case
bool ChangePassword::checkPassOnRestrict(string password)
{
    int x=0;

    for(int i = 0; i < password.length(); i++)
    {
        if(isalpha(password[i]))
        {
            x++;
            break;
        }
    }

    for(int i = 0; i < password.length(); i++)
    {
        if(isdigit(password[i]))
        {
            x++;
            break;
        }
    }

    for(int i = 0; i < password.length(); i++)
    {
        if(ispunct(password[i]))
        {
            x++;
            break;
        }
    }

    if(x==3) return true;

    else return false;

}


void ChangePassword::on_pushButton_clicked()
{
    if(ui->Edit3->text().toStdString() != User.UserPass)
    {
        QErrorMessage msg(this);
        msg.showMessage(tr("Password doesn't match"));
        msg.exec();
    }

    else if(ui->Edit1->text()!=ui->Edit2->text())
    {
        QErrorMessage msg(this);
        msg.showMessage(tr("Password doesn't match"));
        msg.exec();
    }

    else if(User.Restrict=='+')
    {
        if(checkPassOnRestrict(ui->Edit1->text().toStdString()))
            changePassword();
        else
        {
            QErrorMessage msg(this);
            msg.showMessage(tr("Password does not satisfy the restrictions!"));
            msg.exec();
        }
    }

    else changePassword();
}

void ChangePassword::on_pushButton_2_clicked()
{
    this->close();
}

void ChangePassword::changePassword()
{
    string login=User.UserName;
    string newPass=ui->Edit1->text().toStdString();

    ifstream file1(TEMPFILE);
    ofstream file2("TempCopy.db");

    string str,log;    

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
                file2<<login<<" "<<newPass<<" "<<'-'<<" "<<'+'<<"\n";
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

    this->close();
}

