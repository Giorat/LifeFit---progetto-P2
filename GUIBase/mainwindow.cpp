#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMainWindow::showMaximized();
        calendar = ui->calendarWidget;

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

user_edit = ui->username;

user_edit->setPlainText(ultima_sess.last_user);

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
loadSettings();

QMessageBox::about(this, tr("About Application"),
           tr("The <b>Application</b>:" ));

QAction *m_ExitAction = new QAction(tr("E&xit"), this);
m_ExitAction->setShortcut(tr("Ctrl+Q"));
m_ExitAction->setStatusTip(tr("Exit the application"));
connect(m_ExitAction, SIGNAL(triggered()), this, SLOT(close()));

}


void MainWindow::loadSettings()
{
  QSettings settings;
  settings.beginGroup("app");
  ultima_sess.last_user = (settings.value("lastuser","").toString()).toUtf8().constData();
  ultima_sess.first_boot = settings.value("firstboot", 10).toInt();
  settings.endGroup();

  settings.beginGroup("MainWindow");
  resize(settings.value("size", QSize(400, 400)).toSize());
  move(settings.value("pos", QPoint(0, 0)).toPoint());
  settings.endGroup();

  ui->username->setPlainText(ultima_sess.last_user);
  ui->nome->setText(ultima_sess.last_user);
}

void MainWindow::saveSettings()
{
    ultima_sess.last_user = ui->username->toPlainText();
    QSettings settings;
    settings.beginGroup("app");
    settings.setValue("lastuser", ultima_sess.last_user);
    settings.setValue("firstboot", ultima_sess.first_boot);
    settings.endGroup();

    settings.beginGroup("MainWindow");
    settings.setValue("size", size());
    settings.setValue("pos", pos());
    settings.endGroup();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
saveSettings();
event->accept();
}

MainWindow::~MainWindow()
{
    delete ui;
}
