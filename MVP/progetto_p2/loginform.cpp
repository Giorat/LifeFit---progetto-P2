#include "loginform.h"


LoginForm::LoginForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginForm),ioutenti("C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\")
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

    registerapp=nullptr;
    mainapp = nullptr;
}


void LoginForm::psetFocus(){
passtext->setFocus();
}

void LoginForm::loginclick()
{
    usernametext->blockSignals(true);
    passtext->blockSignals(true);

    utenteLog = ioutenti.loadUser(usernametext->text().toUtf8().constData(),passtext->text().toUtf8().constData());

    if(utenteLog){
        ioutenti.loadUserFit(utenteLog);
        mainapp = new MainWindow(utenteLog);
        mainapp->setWindowTitle("LIFE-FIT APP");
        mainapp->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password or Username Incorrect");
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

    utenteLog = ioutenti.loadUser(usernametext->text().toUtf8().constData(),passtext->text().toUtf8().constData());

    if(utenteLog){
        ioutenti.loadUserFit(utenteLog);
        mainapp = new MainWindow(utenteLog);
        mainapp->setWindowTitle("LIFE-FIT APP");
        mainapp->show();
        this->close();
    }
    else
    {
        QMessageBox::information(this, "Failure", "Password or Username Incorrect");
    }
    usernametext->blockSignals(false);
    passtext->blockSignals(false);
}

void LoginForm::closeEvent(QCloseEvent *event)
{
event->accept();
if((mainapp == nullptr)&&(registerapp == nullptr))
QCoreApplication::quit();
}

LoginForm::~LoginForm()
{
     delete ui;
}
