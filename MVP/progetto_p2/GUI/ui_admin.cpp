#include "ui_admin.h"
#include "ui_ui_admin.h"

UiAdmin::UiAdmin(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::UiAdmin),mainapp(nullptr),registerapp(nullptr)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());

    std::vector<const utente*> users = ioutenti->loadUtenti();

    ui->setupUi(this);
    QListWidgetItem *listWidgetItem;
    for(unsigned int i = 0; i < users.size(); i++) {

           //Creating a new list widget item whose parent is the listwidget itself
           listWidgetItem = new QListWidgetItem(ui->listUsers);
           //Adding the item to the listwidget
           ui->listUsers->addItem (listWidgetItem);

           //Creating an object of the designed widget which is to be added to the listwidget
           UtenteItem *theWidgetItem = new UtenteItem(this,const_cast<utente*>(users[i]));

           //Making sure that the listWidgetItem has the same size as the TheWidgetItem
           listWidgetItem->setSizeHint (theWidgetItem->sizeHint());

           //Finally adding the itemWidget to the list
           ui->listUsers->setItemWidget(listWidgetItem, theWidgetItem);

    }

}

void UiAdmin::closeRegister(){
    delete registerapp;
    registerapp=nullptr;
}

void UiAdmin::on_listUsers_itemPressed(QListWidgetItem *item)
{
    ui->listUsers->setCurrentItem(item);
}

void UiAdmin::on_listUsers_itemDoubleClicked(QListWidgetItem *item)
{
    if(item == ui->listUsers->currentItem()){
    UtenteItem* userDoubleClicked = dynamic_cast<UtenteItem*>(ui->listUsers->itemWidget(ui->listUsers->currentItem()));
        if(userDoubleClicked){
            mainapp = new UiUser(userDoubleClicked->getUser(),true);
            mainapp->setWindowTitle("LIFE-FIT APP");
            mainapp->show();
            this->close();
        }
    }
}

void UiAdmin::on_deleteUser_clicked()
{
    if(ui->listUsers->currentItem() == nullptr){
        QMessageBox::warning(this, tr("ATTENZIONE!"), tr("Per eliminare un utente si deve selezionare utente da elenco sottostante"));
    }else{
        UtenteItem* userDelete = dynamic_cast<UtenteItem*>( ui->listUsers->itemWidget(ui->listUsers->currentItem()));
        if(userDelete){
            ioutenti->deleteUser(userDelete->getUser());
            userDelete->setDeleteUser(true);
            delete ui->listUsers->currentItem();
        }
    }
}

void UiAdmin::on_downloadXmlUser_clicked()
{
    bool ok;
       int i = QInputDialog::getInt(this, tr("XML UTENTE"),
                                    tr("Numero di giorni da oggi per XML utente:"), 90, 90, 1000, 1, &ok);
       QString ngiorni=QString::number(i);
       if (ok && i>0)
            QDesktopServices::openUrl(QUrl("https://www.riccardogiorato.com/p2/xmlGen.php?n="+ngiorni));
}

void UiAdmin::on_newUserCreate_clicked()
{
            registerapp = new Register(this);
            registerapp->setWindowTitle("LIFE-FIT REGISTER");
            registerapp->show();
}

void UiAdmin::closeEvent(QCloseEvent *event)
{
    event->accept();
    if((mainapp == nullptr)&&(registerapp == nullptr))
        QCoreApplication::quit();
}

UiAdmin::~UiAdmin()
{
    delete ui;
}
