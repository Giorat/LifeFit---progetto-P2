#include "friend_label.h"
#include "mainwindow.h"

#include <QGraphicsPixmapItem>

MainWindow::MainWindow(utente * user,QWidget *parent) :
    QMainWindow(parent),UtenteOn(user),
    ui(new Ui::MainWindow),inSettings(false),ioutenti("C:\\Users\\giora\\Documents\\GitHub\\progettoP2\\")
{
    ui->setupUi(this);
    this->ui->no_data_img->hide();
    this->ui->content2->hide();

    QMainWindow::showMaximized();
        calendar = ui->calendarWidget;
        calendar->setGridVisible(true);
        calendar->setStyleSheet("background-color: rgb(255, 255, 255);");

    loadUserOnUi();

loadSettings();

//CREO FUNZIONE CHE DATO VETTORE FA QUESTA OPERAZIONE SU MAIN WINDOW
friend_label *label = new friend_label("Ercole M. 10.000 passi");
friend_label *label1 = new friend_label("Riccardo Giorato 8.580 passi");
friend_label *label2 = new friend_label("Ercole M. 5.000 passi");
ui->friend_list->addWidget(label);
ui->friend_list->addWidget(label1);
ui->friend_list->addWidget(label2);



//gestione eventi
QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(loadGiorno(const QDate)));
QObject::connect(this->ui->settings,SIGNAL(clicked()),this,SLOT(vaiImpostazioni()));
QObject::connect(this->ui->logout,SIGNAL(clicked()),this,SLOT(vaiLogout()));
QObject::connect(this->ui->aggiungi_dati,SIGNAL(clicked()),this,SLOT(caricaDatiFitXml()));
}


void MainWindow::loadUserOnUi(){
    if(UtenteOn->getGiorniFit()==0){
        QImage image(":/resources/no_data.png");
        this->ui->no_data_img->setPixmap(QPixmap::fromImage(image));
        this->ui->no_data_img->show();
    }

    ultima_sess.user = QString::fromStdString(UtenteOn->getNome());
    ui->eta->setText(QString::number(UtenteOn->getAge()));
    ui->username->setText(ultima_sess.user);

    if(UtenteOn->getGiorniFit()!=0){
                calendar->setDateRange(UtenteOn->primaAtt(),UtenteOn->ultimaAtt());
                QMessageBox::information(this,"FIT","Fit Utente Att");
    }
    loadGiorno(UtenteOn->ultimaAtt());

}

void MainWindow::loadGiorno(const QDate& date)
{

    ui->mese_calendario_giorno->setText("Statistiche del "+date.toString("dd MMMM yyyy"));
    giorno * selGiorno = UtenteOn->giornoData(date);
    if(selGiorno){
        float percP = (float)selGiorno->movim().totale_passi()/10000;

    //gestione progressi ultimo giorno o giorno attuale CON FUNZIONE A CUI PASSARE TRE VALORI SEMPRE REALIZZA QUESTO
    CircularProgress *w = ui->progressoMovim;
        w->setColors("#00cc66","#00cc66");
        w->setDiscWidth(20);
        w->setLoadingAngle(360*percP);
        w->setStyleSheet("background-color: rgb(255, 255, 255);");
        w->show();

        float percS = (float)selGiorno->dormit().minDormito() /450;

    CircularProgress *progs = ui->progressoSonno;
        progs->setColors("#0099ff","#0099ff");
        progs->setDiscWidth(20);
        progs->setLoadingAngle(360*percS);
        progs->setStyleSheet("background-color: rgb(255, 255, 255);");
        progs->show();

        float percM = (float)UtenteOn->progressi_mese(date)/(10000*date.daysInMonth());

    CircularProgress *progm = ui->progressoMese;
        progm->setColors("#9999ff","#9999ff");
        progm->setDiscWidth(20);
        progm->setLoadingAngle(360*percM);
        progm->setStyleSheet("background-color: rgb(255, 255, 255);");
        progm->show();
    ui->right_progress->show();
    }else
    ui->right_progress->hide();
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
QStringList fileNames;
QString fileScelto;
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Question, "INSERIMENTO DATI FIT", "Hai controllato il file xml?", QMessageBox::Yes|QMessageBox::No).exec())
    {
     QFileDialog* fileDlg = new QFileDialog(this, tr("Apri il file"), QDir::homePath(),    tr("File XML attivita' (*.xml)"));
     if (fileDlg->exec()){
         fileNames = fileDlg->selectedFiles();
         if(!fileNames.empty()){
            fileScelto = fileNames.first();
            if(fileScelto.endsWith(".xml", Qt::CaseInsensitive))
                ioutenti.inputXMLdatiMovimSleep(fileScelto.toUtf8().constData(),UtenteOn);
         }
    }
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
ioutenti.saveUserFit(UtenteOn);
saveSettings();
event->accept();
if(!loginF)
QCoreApplication::quit();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveUser_clicked()
{
   utente * copia = UtenteOn->clone();
   if(!ui->nome->text().isEmpty())
    UtenteOn->setNome(ui->nome->text().toUtf8().constData());
   if(!ui->cognome->text().isEmpty())
       UtenteOn->setCognome(ui->cognome->text().toUtf8().constData());
   if(!ui->datanascita->date().isNull())
       UtenteOn->setDataNascita(ui->datanascita->date());
   if(!ui->password->text().isEmpty())
       UtenteOn->setPassword(ui->password->text());

    if(!ioutenti.saveUser(UtenteOn)){
       QMessageBox::information(this, tr("ATTENZIONE USERNAME!!"), tr("La combinazione nome e cognome è già usata da un altro utente, si prega di usare un nome e cognome univoci tra tutti gli utenti"));
       UtenteOn = copia;
       }
}

void MainWindow::on_uomo_clicked()
{
    UtenteOn->setSesso(1);
    ioutenti.saveUser(UtenteOn);
}

void MainWindow::on_donna_clicked()
{
    UtenteOn->setSesso(0);
    ioutenti.saveUser(UtenteOn);
}

void MainWindow::on_calendarWidget_currentPageChanged(int year, int month)
{
    QDate thisMese(year,month,1);
    ui->mese_calendario->setText(thisMese.toString("MMMM yyyy"));
}
