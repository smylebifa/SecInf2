#include "passworddialog.h"
#include "ui_passworddialog.h"

using namespace std;

int Error;

PasswordDialog::PasswordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswordDialog)
{
    ui->setupUi(this);

    ui->Login->setText("");
    ui->Password->setText("");

    Error=0;

}

PasswordDialog::~PasswordDialog()
{
    delete ui;
}

//return true if password is satisfies
//the conditions of restrictions
//false in other case
bool PasswordDialog::checkPassOnRestrict(string password)
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


void PasswordDialog::on_pushButton_clicked()
{

    string login = ui->Login->text().toStdString();
    string password = ui->Password->text().toStdString();

    AccountType findingUser;
    int x=0;

    if(login=="")
    {
        QErrorMessage msg(this);
        msg.showMessage(tr("Enter login!"));
        msg.exec();
    }

    //check if user is exist and passwords is match
    else
    {
        string str;
        int i;

        string username, userpass;

        ifstream file(TEMPFILE);

        if (file)
        {
            while(getline(file,str))
            {
                for(int i=0; i<str.length(); i++)
                {
                    if(str[i] != ' ')
                    {
                        username.push_back(str[i]);
                    }
                    else if(str[i] == ' ')
                    {
                        //Если имя пользователя совпало с прочитанным из файла...
                        if(username == login)
                        {
                            if(str[i+1] != '-' && str[i+1] != '+')
                            {
                                while (str[i+1]!=' ')
                                {
                                    userpass.push_back(str[i+1]);
                                    i++;
                                }

                                if(userpass == password)
                                {
                                    //Password doesn't satisfy restrictions...
                                    if(!checkPassOnRestrict(password))
                                    {
                                        findingUser.UserName = username;
                                        findingUser.UserPass = userpass;
                                        x = 3;
                                        break;
                                    }

                                    //Password is match...
                                    else
                                    {
                                        findingUser.UserName = username;
                                        findingUser.UserPass = userpass;
                                        findingUser.Block = str[i+2];
                                        findingUser.Restrict = str[i+4];
                                        x=2;
                                        break;
                                    }
                                }

                                //Password isn't match...
                                else
                                {
                                    findingUser.UserName = username;
                                    findingUser.UserPass = userpass;
                                    x=1;
                                    break;
                                }
                            }
                        }

                        //Если имя пользователя не совпало с прочитанным из файла...
                        else
                        {
                            while (str[i+1]!=' ')
                            {
                                i++;
                            }

                            i +=4;

                            username.clear();
                            userpass.clear();

                        }
                    }

                }
            }
        }

        file.close();

        if(x == 3)
        {
            QErrorMessage msg(this);
            msg.showMessage(tr("Password does not satisfy the restrictions!"));
            msg.exec();

            User.UserName = findingUser.UserName;
            User.UserPass = findingUser.UserPass;
            User.Block = findingUser.Block;
            User.Restrict = findingUser.Restrict;

            ChangePassword dialog;
            dialog.show();
            dialog.exec();

        }


        //entering user
        if(x==2)
        {
            User.UserName = findingUser.UserName;
            User.UserPass = findingUser.UserPass;
            User.Block = findingUser.Block;
            User.Restrict = findingUser.Restrict;

            IsAuthorized = true;

            this->close();
        }

        //passwords don't match
        else if(x==1)
        {
            Error++;
            if(Error==3)
            {
                this->close();
            }
            else
            {
                QErrorMessage msg(this);
                msg.showMessage(tr("Password doesn't match!"));
                msg.exec();
            }
        }

        //adding user
        else if(x==0)
        {
            if(!checkPassOnRestrict(password))
            {
                User.UserName = login;
                User.Block = str[i+1];
                User.Restrict = str[i+3];

                QErrorMessage msg(this);
                msg.showMessage(tr("Password does not satisfy the restrictions!"));
                msg.exec();
            }
            else
            {
                User.UserName = login;
                User.Block = str[i+1];
                User.Restrict = str[i+3];
                User.UserPass = password;

                ofstream file(TEMPFILE,std::ios::app);

                if(file){

                    char block,res;
                    block='-';
                    res='+';

                    file<<login<<" "<<password<<" "<<block<<" "<<res<<"\n";

                    User.UserName=login;
                    User.UserPass=password;
                    User.Block=block;
                    User.Restrict=res;

                    file.close();

                    IsAuthorized = true;

                    this->close();

                }
            }
        }
    }
}

void PasswordDialog::on_pushButton_2_clicked()
{
    this->close();
}
