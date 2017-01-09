#include <QCalendarWidget>
#include <QDate>


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

        QCalendarWidget *calendar = ui->calendarWidget;

        //calendar->setFirstDayOfWeek();
        calendar->setGridVisible(true);
        calendar->setDateRange(QDate(2017,1,1),QDate(2017,2,1));

 QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(slotClicked(const QDate)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
