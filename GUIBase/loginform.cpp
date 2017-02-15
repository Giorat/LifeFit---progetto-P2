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
    passtext->setFocusPolicy(Qt::StrongFocus);


    connect(loginbtn, SIGNAL(clicked()), this, SLOT(loginclick()));
    connect(usernametext,SIGNAL(editingFinished()),this,SLOT(psetFocus()));
    connect(passtext,SIGNAL(editingFinished()),this,SLOT(loginclick2()));
    connect(registerbtn,SIGNAL(clicked()),this,SLOT(registerTo()));
}


void LoginForm::psetFocus(){
passtext->setFocus();
}

LoginForm::~LoginForm()
{
     delete ui;
}

void LoginForm::loginclick()
{
    usernametext->blockSignals(true);
    passtext->blockSignals(true);
    if (usernametext->text() == "root" && passtext->text() == "root")
    {
        mainapp = new MainWindow(this,usernametext->text());
        mainapp->setWindowTitle("LIFE-FIT APPLICATION");
        mainapp->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password Incorrect");
    }
    usernametext->blockSignals(false);
    passtext->blockSignals(false);
}

void LoginForm::registerTo()
{
    usernametext->blockSignals(true);
    passtext->blockSignals(true);
        registerapp = new Register();
        registerapp->setWindowTitle("LIFE-FIT REGISTER");
        registerapp->show();
        this->close();
    usernametext->blockSignals(false);
    passtext->blockSignals(false);
}



void LoginForm::loginclick2()
{
    usernametext->blockSignals(true);
    passtext->blockSignals(true);
    if (usernametext->text() == "root" && passtext->text() == "root")
    {
        mainapp = new MainWindow(this,usernametext->text());
        mainapp->setWindowTitle("LIFE-FIT APPLICATION");
        mainapp->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password Incorrect");
    }
    usernametext->blockSignals(false);
    passtext->blockSignals(false);
}
