#include "adduser.h"
#include "ui_adduser.h"

AddUser::AddUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUser)
{
    ui->setupUi(this);

    ui->UserName->setText("");
}

AddUser::~AddUser()
{
    delete ui;
}

void AddUser::on_pushButton_2_clicked()
{
    this->close();
}

void AddUser::on_pushButton_clicked()
{
    string login=ui->UserName->text().toStdString();

    bool find=findUser(login);

    if((login!="") && (!find))
    {
        ofstream file(TEMPFILE,std::ios::app);

        if(file) file<<login<<" "<<'-'<<" "<<'+'<<"\n";

        file.close();

        this->close();
    }
}


bool AddUser::findUser(string login)
{
    ifstream file(TEMPFILE);

    string str,log;

    bool exist=false;

    int i;

    if (file){
        while(getline(file,str))
        {
            i=0;
            while (str[i]!=' '){
                log.push_back(str[i]);
                i++;
            }

            if(login==log)
            {
                QErrorMessage msg(this);
                msg.showMessage(tr("This user already exists"));
                msg.exec();

                exist=true;
            }

            log.clear();
        }
    }

    file.close();

    return exist;
}
