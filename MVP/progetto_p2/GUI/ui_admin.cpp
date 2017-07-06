#include "ui_admin.h"
#include "ui_ui_admin.h"

UiAdmin::UiAdmin(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::UiAdmin)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());

    std::vector<const utente*> users = ioutenti->loadUtenti();

    ui->setupUi(this);
    QListWidgetItem *listWidgetItem;
    for(int i = 0; i < users.size(); i++) {

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


UiAdmin::~UiAdmin()
{
    delete ui;
}

void UiAdmin::on_listUsers_itemPressed(QListWidgetItem *item)
{

}

void UiAdmin::on_listUsers_itemDoubleClicked(QListWidgetItem *item)
{
    (ui->listUsers->currentItem())->setBackground(Qt::green);
    QWidget *widget = ui->listUsers->itemWidget(ui->listUsers->currentItem());
    ui->listUsers->addItem(widget->styleSheet());
    UtenteItem* userDoubleClicked = dynamic_cast<UtenteItem*>(widget);
    if(userDoubleClicked)
        userDoubleClicked->us
}
