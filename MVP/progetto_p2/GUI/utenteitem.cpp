#include "utenteitem.h"
#include "ui_utenteitem.h"

UtenteItem::UtenteItem(QWidget *parent,utente* us) :
    QWidget(parent),
    ui(new Ui::UtenteItem),deleteUser(false),user(us)
{
    ui->setupUi(this);
    QColor col=user->coloreGruppo();
    this->setStyleSheet(QString("background:rgb(%1,%2,%3);").arg(col.red()).arg(col.green()).arg(col.blue()));
    ui->username->setText(user->nomeGruppo()+": "+QString::fromStdString(user->getUsername()));
}

void UtenteItem::setDeleteUser(bool d){deleteUser=d;}

utente* UtenteItem::getUser()const{return user;}

UtenteItem::~UtenteItem()
{
    if(deleteUser){
        delete user;
    }
    delete ui;
}
