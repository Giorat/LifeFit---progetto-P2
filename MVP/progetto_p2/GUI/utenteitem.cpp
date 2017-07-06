#include "utenteitem.h"
#include "ui_utenteitem.h"

UtenteItem::UtenteItem(QWidget *parent,utente* us) :
    QWidget(parent),
    ui(new Ui::UtenteItem),user(us)
{
    ui->setupUi(this);
    QColor col=user->coloreGruppo();
    this->setStyleSheet(QString("background:rgb(%1,%2,%3);").arg(col.red()).arg(col.green()).arg(col.blue()));
    ui->username->setText(user->nomeGruppo()+": "+QString::fromStdString(user->getUsername()));
    QObject::connect(this,SIGNAL(deleteUtente(UtenteItem*)),QWidget::parentWidget(),SIGNAL(deleteUtenteItem(UtenteItem* )));
}


UtenteItem::~UtenteItem()
{
    delete ui;
}
