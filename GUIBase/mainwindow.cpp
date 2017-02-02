#include <QCalendarWidget>
#include <QDate>
#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "circularprogress.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
        QCalendarWidget *calendar = ui->calendarWidget;

        //calendar->setFirstDayOfWeek();
        calendar->setGridVisible(true);
        calendar->setDateRange(QDate(2016,1,1),QDate(2017,2,1));
        calendar->setStyleSheet("background-color: white;");

 QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(slotClicked(const QDate)));




 CircularProgress *w = ui->progressoMovim;
     w->setColors("#00cc66","#00cc66");
     w->setDiscWidth(20);
     w->setLoadingAngle(270);
     w->show();

 CircularProgress *progs = ui->progressoSonno;
     progs->setColors("#0099ff","#0099ff");
     progs->setDiscWidth(20);
     progs->setLoadingAngle(340);
     progs->show();


 CircularProgress *progm = ui->progressoMese;
     progm->setColors("#9999ff","#9999ff");
     progm->setDiscWidth(20);
     progm->setLoadingAngle(360);
     progm->show();



 //QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Apri il file"),"/",tr("XML Files (*.xml)"));
 //QMessageBox::information(NULL,"File!!",fileNames.first());


  /*QLineSeries *series = new QLineSeries();
  series->append(0, 6);
      series->append(2, 4);
      series->append(3, 8);
      series->append(7, 4);
      series->append(10, 5);
      *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);
        QChart *chart = new QChart();
        chart->legend()->hide();
        chart->addSeries(series);
        chart->createDefaultAxes();
        chart->setTitle("Simple line chart example");

        QChartView *chartView = new QChartView(chart);
          chartView->setRenderHint(QPainter::Antialiasing);

    ui->centralWidget->addWidget(setchartView,0,0);
   */

}

MainWindow::~MainWindow()
{
    delete ui;
}
