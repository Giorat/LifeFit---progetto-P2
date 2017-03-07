#include "friend_label.h"
#include "mainwindow.h"

#include <QGraphicsPixmapItem>

MainWindow::MainWindow(utente * user,bool firstboot,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),inSettings(false)
{
    ui->setupUi(this);
    this->ui->no_data_img->hide();
    this->ui->content2->hide();

    //carico utente
    ultima_sess.user = QString::fromStdString(user->getNome());
    ui->eta->setText(QString::number(user->getAge()));
    ui->nome->setText(ultima_sess.user);


    if(firstboot||user->getGiorniFit()==0){
        QImage image(":/resources/no_data.png");
        this->ui->no_data_img->setPixmap(QPixmap::fromImage(image));
        this->ui->no_data_img->show();
    }

    QMainWindow::showMaximized();
        calendar = ui->calendarWidget;
        calendar->setGridVisible(true);
        calendar->setStyleSheet("background-color: rgb(255, 255, 255);");

    if(user->getGiorniFit()!=0){
                calendar->setDateRange(user->primaAtt(),user->ultimaAtt());
                QMessageBox::information(NULL,"FIT","Fit Utente Att");
    }

 //gestione progressi ultimo giorno o giorno attuale CON FUNZIONE A CUI PASSARE TRE VALORI SEMPRE REALIZZA QUESTO
 CircularProgress *w = ui->progressoMovim;
     w->setColors("#00cc66","#00cc66");
     w->setDiscWidth(20);
     w->setLoadingAngle(270);
     w->setStyleSheet("background-color: rgb(255, 255, 255);");
     w->show();
 CircularProgress *progs = ui->progressoSonno;
     progs->setColors("#0099ff","#0099ff");
     progs->setDiscWidth(20);
     progs->setLoadingAngle(340);
     progs->setStyleSheet("background-color: rgb(255, 255, 255);");
     progs->show();
 CircularProgress *progm = ui->progressoMese;
     progm->setColors("#9999ff","#9999ff");
     progm->setDiscWidth(20);
     progm->setLoadingAngle(360);
     progm->setStyleSheet("background-color: rgb(255, 255, 255);");
     progm->show();


loadSettings();

//CREO FUNZIONE CHE DATO VETTORE FA QUESTA OPERAZIONE SU MAIN WINDOW
friend_label *label = new friend_label("Ercole M. 10.000 passi");
friend_label *label1 = new friend_label("Riccardo Giorato 8.580 passi");
friend_label *label2 = new friend_label("Ercole M. 5.000 passi");
ui->friend_list->addWidget(label);
ui->friend_list->addWidget(label1);
ui->friend_list->addWidget(label2);



//gestione eventi
QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(slotClicked(const QDate)));
QObject::connect(this->ui->settings,SIGNAL(clicked()),this,SLOT(vaiImpostazioni()));
QObject::connect(this->ui->logout,SIGNAL(clicked()),this,SLOT(vaiLogout()));
QObject::connect(this->ui->aggiungi_dati,SIGNAL(clicked()),this,SLOT(caricaDatiFitXml()));
}





void MainWindow::vaiLogout(){
    loginF = new LoginForm();
    loginF->setWindowTitle("LIFE-FIT LOGIN");
    loginF->show();
    this->close();
}

void MainWindow::vaiImpostazioni(){
if(inSettings){
    this->ui->content2->hide();
    this->ui->content->show();
}
else{
    this->ui->content->hide();
    this->ui->content2->show();
}
inSettings=!inSettings;
}

void MainWindow::loadSettings()
{
  QSettings settings;
  QString config_dir = QFileInfo(settings.fileName()).filePath() + "/";
  //cartella settings config_dir.toUtf8().constData();

  settings.beginGroup("app");
  ultima_sess.user = (settings.value("user","root").toString()).toUtf8().constData();
  ultima_sess.first_boot = settings.value("firstboot", 0).toInt();
  ultima_sess.obb_pass_giorn = settings.value("obb_pass_giorn", 10000).toInt();
  settings.endGroup();

  QMessageBox::about(this, tr("PASSI CONSIGLIATI:"), tr((QString::number(ultima_sess.obb_pass_giorn)).toUtf8().constData()));

  settings.beginGroup("MainWindow");
  resize(settings.value("size", QSize(400, 400)).toSize());
  move(settings.value("pos", QPoint(0, 0)).toPoint());
  settings.endGroup();
}

void MainWindow::caricaDatiFitXml(){

    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "INSERIMENTO DATI FIT", "Hai controllato il file xml?", QMessageBox::Yes|QMessageBox::No).exec())
    {
     QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Apri il file"),"/",tr("XML Files (*.xml)"));
     if(!fileNames.empty())
        QMessageBox::information(NULL,"File!!",fileNames.first());
     QString fileScelto = fileNames.first();
     if(fileScelto.endsWith(".xml", Qt::CaseInsensitive))
         QMessageBox::information(NULL,"File GIUSTO!!",fileScelto);

    }
    //else
    //    qDebug() << "Yes was *not* clicked";
}




void MainWindow::saveSettings()
{
    ultima_sess.obb_pass_giorn = 10000;
    ultima_sess.user = ui->nome->text();
    QSettings settings;

    settings.beginGroup("app");
    settings.setValue("user", ultima_sess.user);
    settings.setValue("firstboot", ultima_sess.first_boot);
    settings.setValue("obb_pass_giorn", ultima_sess.obb_pass_giorn);
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
