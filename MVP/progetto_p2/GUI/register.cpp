#include "register.h"
#include "ui_register.h"

Register::Register(UiAdmin *adm,QWidget *parent) :
    QMainWindow(parent),ui(new Ui::Register),adminapp(adm),mainw(nullptr),sesso(-1),gruppo(-1)
{

    adminapp->setEnabled(false);

    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());


    ui->setupUi(this);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);

     //gestione eventi
     connect( this->ui->man, SIGNAL( clicked() ), this, SLOT(SessoM() ));
     connect( this->ui->woman, SIGNAL( clicked() ), this, SLOT(SessoD() ));
     connect( this->ui->go_back, SIGNAL( clicked() ), this, SLOT(tornaAdmin() ));
     connect( this->ui->register_send, SIGNAL( clicked() ), this, SLOT(vaiApp() ));
     connect (this,SIGNAL(closeReg()),adminapp,SLOT(closeRegister()));
}

void Register::SessoM(){
        sesso=1;
}

void Register::SessoD(){
        sesso=0;
}
void Register::tornaAdmin(){
    this->close();
}
void Register::vaiApp(){
    if(ui->nome->text().isEmpty()||ui->cognome->text().isEmpty()||ui->password->text().isEmpty()||sesso==-1||gruppo==-1)
        QMessageBox::warning(this,"Attenzione!","Si prega di inserire dati validi compresa data di nascita corretta, gruppo e sesso");
    else{
    nome = ui->nome->text().toLower().toUtf8().constData();
    cognome = ui->cognome->text().toLower().toUtf8().constData();
    password = QString(QCryptographicHash::hash(ui->password->text().toLower().toUtf8().constData(),QCryptographicHash::Md5).toHex());
    dataNascita = ui->dataNascita->date();
    int codU=ioutenti->LastCodUtente()+1;
    if (gruppo == 1)
        user = new bambino(codU,nome,cognome,dataNascita,sesso,password);
    else if (gruppo == 2)
        user = new adolescente(codU,nome,cognome,dataNascita,sesso,password);
    else if (gruppo == 3)
        user = new adulto(codU,nome,cognome,dataNascita,sesso,password);

   //Provo a creare un utente con queste informazioni
    if(ioutenti->createUser(user)){
        mainw = new UiUser(user,true);
        mainw->setWindowTitle("LIFE-FIT APP");
        mainw->show();
        adminapp->close();
        this->close();
    }else //utente non creato presente già utente con questo username
        QMessageBox::critical(this,"Errore!","Utente non registrato per presenza di un utente con identico username");
    }
}

void Register::on_bambino_clicked()
{
    gruppo=1;
}

void Register::on_adolescente_clicked()
{
    gruppo=2;
}

void Register::on_adulto_clicked()
{
    gruppo=3;
}

void Register::closeEvent(QCloseEvent *event)
{
    event->accept();
    adminapp->setEnabled(true);
    this->closeReg();
}

Register::~Register()
{
    delete ui;
}
