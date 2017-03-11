#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register),sesso(-1),ioutenti("C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\")
{
    ui->setupUi(this);
     connect( this->ui->man, SIGNAL( clicked() ), this, SLOT(SessoM() ));
     connect( this->ui->woman, SIGNAL( clicked() ), this, SLOT(SessoD() ));
     connect( this->ui->go_back, SIGNAL( clicked() ), this, SLOT(tornaLogin() ));
     connect( this->ui->register_send, SIGNAL( clicked() ), this, SLOT(vaiApp() ));

     loginF=nullptr;
     mainw = nullptr;
}

void Register::SessoM(){
        sesso=1;
}

void Register::SessoD(){
        sesso=0;
}
void Register::tornaLogin(){
    loginF = new LoginForm();
    loginF->setWindowTitle("LIFE-FIT LOGIN");
    loginF->show();
    this->close();
}
void Register::vaiApp(){

    if(ui->nome->text().isEmpty()||ui->cognome->text().isEmpty()||ui->password->text().isEmpty()||sesso==-1||ui->dataNascita->date() == QDate(1,1,1971))
        QMessageBox::information(this,"ATTENZIONE!!","Si prega di inserire dati validi compresa data di nascita corretta");
    else{
    nome = ui->nome->text().toUtf8().constData();
    cognome = ui->cognome->text().toUtf8().constData();
    password = ui->password->text().toUtf8().constData();
    dataNascita = ui->dataNascita->date();
    user = new utente(ioutenti.LastCodUtente()+1,nome,cognome,dataNascita,sesso,password);
    QMessageBox::information(this,"ATTENZIONE!!",ui->nome->text());

   //Provo a creare un utente con queste informazioni
    if(ioutenti.createUser(user)){
    mainw = new MainWindow(user);
    mainw->setWindowTitle("LIFE-FIT APP");
    mainw->show();
    this->close();
    }else //utente non creato presente già utente con questo nome se non si ricorda la password tornare al login e cliccare FORGOT PASSWORD
        QMessageBox::information(this,"ATTENZIONE!!","Utente non registrato perchè già presente un utente con questo nome se non si ricorda la password tornare al login e cliccare FORGOT PASSWORD");
    }
}

void Register::closeEvent(QCloseEvent *event)
{
event->accept();
if((mainw == nullptr )&&(loginF == nullptr))
QCoreApplication::quit();
}

Register::~Register()
{
    delete ui;
}
