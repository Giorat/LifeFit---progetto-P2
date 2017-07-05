#include "ui_admin.h"
#include "ui_ui_admin.h"

UiAdmin::UiAdmin(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::UiAdmin)
{
    ui->setupUi(this);

    for(int i = 0; i < 100; i++) { ui->listUsers->addItem("Item " + QString::number(i)); }
}

UiAdmin::~UiAdmin()
{
    delete ui;
}
