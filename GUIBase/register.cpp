#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
     connect( this->ui->man, SIGNAL( clicked() ), this, SLOT(SessoM() ));
     connect( this->ui->woman, SIGNAL( clicked() ), this, SLOT(SessoD() ));
     connect( this->ui->go_back, SIGNAL( clicked() ), this, SLOT(tornaLogin() ));
     connect( this->ui->register_send, SIGNAL( clicked() ), this, SLOT(vaiApp() ));
}

void Register::SessoM(){
        QMessageBox::information(this, "SESSO", "UOMO");
}

void Register::SessoD(){
        QMessageBox::information(this, "SESSO", "DONNA");
}
void Register::tornaLogin(){
    loginF = new LoginForm();
    loginF->setWindowTitle("LIFE-FIT LOGIN");
    loginF->show();
    this->close();
}
void Register::vaiApp(){
    mainw = new MainWindow(this,this->ui->nome->text(),true);
    mainw->setWindowTitle("LIFE-FIT APP");
    mainw->show();
    this->close();
}

Register::~Register()
{
    delete ui;
}
