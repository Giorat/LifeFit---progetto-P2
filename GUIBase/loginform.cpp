#include "loginform.h"


LoginForm::LoginForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);

    loginbtn = ui->login;

    registerbtn = ui->register_n;

    usernametext = ui->username;

    passtext = ui->password;
    passtext->setInputMask(QString::fromUtf8(""));
    passtext->setMaxLength(32767);
    passtext->setEchoMode(QLineEdit::Password);



    connect(loginbtn, SIGNAL(clicked()), this, SLOT(loginclick()));
    //connect(registerbtn, SIGNAL(clicked()), this, SLOT(close()));
}




LoginForm::~LoginForm()
{
     delete ui;
}

void LoginForm::loginclick()
{
    if (usernametext->text() == "root" && passtext->text() == "root")
    {
        mainapp = new MainWindow(this);
        mainapp->setWindowTitle("LIFE-FIT");
        mainapp->show();
        this->hide();
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password Incorrect");
    }
}
