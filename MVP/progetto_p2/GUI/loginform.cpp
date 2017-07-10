#include "loginform.h"


LoginForm::LoginForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginForm),mainapp(nullptr),adminapp(nullptr)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());

    ui->setupUi(this);

    loginbtn = ui->login;

    usernametext = ui->username;

    passtext = ui->password;
    passtext->setInputMask(QString::fromUtf8(""));
    passtext->setMaxLength(32767);
    passtext->setEchoMode(QLineEdit::Password);
    passtext->setFocusPolicy(Qt::StrongFocus);

    connect(loginbtn, SIGNAL(clicked()), this, SLOT(loginclick()));
    connect(usernametext,SIGNAL(editingFinished()),this,SLOT(psetFocus()));
    connect(passtext,SIGNAL(editingFinished()),this,SLOT(loginclick2()));
}


void LoginForm::psetFocus(){
passtext->setFocus();
}

void LoginForm::loginclick()
{
    LoginUser();
}

void LoginForm::LoginUser(){
    if(adminapp==nullptr && mainapp==nullptr){
    usernametext->blockSignals(true);
    passtext->blockSignals(true);

    if(!strcmp(usernametext->text().toLower().toUtf8().constData(),"root")){
        if(!strcmp(passtext->text().toLower().toUtf8().constData(),"root")){
            adminapp = new UiAdmin();
            adminapp->setWindowTitle("LIFE-FIT ADMIN");
            adminapp->show();
            this->close();
        }
        else
            QMessageBox::information(this, "Errore", "Password Amministratore non corretta");
    }
    else{
    std::string pass = QString(QCryptographicHash::hash((passtext->text()).toLower().toUtf8().constData(),QCryptographicHash::Md5).toHex()).toUtf8().constData();
    utenteLog = ioutenti->loadUser(usernametext->text().toLower().toUtf8().constData(),pass);
        if(utenteLog){
            mainapp = new UiUser(utenteLog);
            mainapp->setWindowTitle("LIFE-FIT APP");
            mainapp->show();
            this->close();
        }
        else
        {
            QMessageBox::information(this, "Errore", "Password o Username non corretti");
        }
    }
    usernametext->blockSignals(false);
    passtext->blockSignals(false);
    }
}

void LoginForm::loginclick2()
{
    LoginUser();
}

void LoginForm::closeEvent(QCloseEvent *event)
{
event->accept();
if((mainapp == nullptr)&&(adminapp == nullptr))
QCoreApplication::quit();
}

LoginForm::~LoginForm()
{
     delete ui;
}

void LoginForm::on_forgotpass_clicked()
{
QString passHashata = ioutenti->hash_password_utente(usernametext->text().toLower());
       if(!passHashata.isEmpty())
       QDesktopServices::openUrl(QUrl("https://md5.gromweb.com/?md5="+passHashata));
       else
       QMessageBox::information(this, "Failure!", "Username Incorrect");
}
