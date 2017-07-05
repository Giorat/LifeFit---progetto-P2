#include "friend_label.h"
#include "ui_user.h"

#include <QGraphicsPixmapItem>

UiUser::UiUser(utente * user,QWidget *parent) :
    QMainWindow(parent),UtenteOn(user),inSettings(false),
    ui(new Ui::UiUser)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());

    ui->setupUi(this);
    this->ui->content2->hide();

    QMainWindow::showMaximized();
        calendar = ui->calendarWidget;
        calendar->setGridVisible(true);
        calendar->setStyleSheet("background-color: rgb(255, 255, 255);");
 if(UtenteOn->getGiorniFit()!=0)
         ui->mese_calendario->setText(UtenteOn->ultimaAtt().toString("MMMM yyyy"));


loadUserOnUi();
//loadFriendList();
loadSettings();


//gestione eventi
QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(loadGiorno(const QDate)));
QObject::connect(this->ui->settings,SIGNAL(clicked()),this,SLOT(vaiImpostazioni()));
QObject::connect(this->ui->logout,SIGNAL(clicked()),this,SLOT(vaiLogout()));
QObject::connect(this->ui->aggiungi_dati,SIGNAL(clicked()),this,SLOT(caricaDatiFitXml()));
}


//void UiUser::loadFriendList()
//{
//   std::vector<const utente*> amici_u = ioutenti->loadUtenti();
//   std::vector<std::pair<int,int>> amici;
//   amici = utente::ultimiSetteGiorniUtenti(amici_u,QDate::currentDate());
//   int i=0;
//    for ( const auto &p : amici ){
//        QString testo;
//        if( (unsigned int)p.first == UtenteOn->getCodiceUtente())
//        testo =  QString::fromStdString("Tu hai fatto "+ std::to_string(p.second)  +" passi");
//        else
//        testo =  QString::fromStdString(utente::utenteCodiceUtente(amici_u,p.first)->getNome()+" ha fatto "+ std::to_string(p.second)  +" passi");

//        friend_label *label = new friend_label(testo);
//        ui->friend_list->addWidget(label);
//        i++;
//    }
//     //std::cout << utente::massimoGiornoUtenti(utenti,QDate(2015,4,20)).second << " passi dell'utente: " <<utente::massimoGiornoUtenti(utenti,QDate(2015,4,21)).first ;
//}


void UiUser::updateCalendarioUtente(){

    if(UtenteOn->getGiorniFit()==0){
       QImage image(":/resources/no_data.png");
       this->ui->no_data_img->setPixmap(QPixmap::fromImage(image));
       this->ui->no_data_img->show();
    }else{
       this->ui->no_data_img->hide();
       calendar->setDateRange(UtenteOn->primaAtt(),UtenteOn->ultimaAtt());
       loadGiorno(UtenteOn->ultimaAtt());
    }
}

void UiUser::loadUserOnUi(){
    ultima_sess.user = QString::fromStdString(UtenteOn->getNome());
    ui->eta->setText(QString::number(UtenteOn->getAge()));
    ui->username->setText(ultima_sess.user);

    updateCalendarioUtente();

}

void UiUser::loadGiorno(const QDate& date)
{
    ui->mese_calendario_giorno->hide();
    ui->right_progress->hide();
    ui->elimina_giorno->hide();
    selGiorno = UtenteOn->giornoData(date);
    if(selGiorno){
        ui->mese_calendario_giorno->setText("Statistiche del "+date.toString("dd MMMM yyyy"));
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

        //float percM = (float)UtenteOn->progressi_mese(date)/(10000*date.daysInMonth());

//    CircularProgress *progm = ui->progressoMese;
//        progm->setColors("#9999ff","#9999ff");
//        progm->setDiscWidth(20);
//        progm->setLoadingAngle(360*percM);
//        progm->setStyleSheet("background-color: rgb(255, 255, 255);");
//        progm->show();

    ui->right_progress->show();
    ui->mese_calendario_giorno->show();
    ui->elimina_giorno->show();
    }
}

void UiUser::vaiLogout(){
    loginF = new LoginForm();
    loginF->setWindowTitle("LIFE-FIT LOGIN");
    loginF->show();
    this->close();
}

void UiUser::vaiImpostazioni(){
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

void UiUser::loadSettings()
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

  settings.beginGroup("UiUser");
  resize(settings.value("size", QSize(400, 400)).toSize());
  move(settings.value("pos", QPoint(0, 0)).toPoint());
  settings.endGroup();
}

void UiUser::caricaDatiFitXml(){
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
                ioutenti->inputXMLdatiMovimSleep(fileScelto.toUtf8().constData(),UtenteOn);
                ioutenti->saveUserFit(UtenteOn);
                updateCalendarioUtente();

                QMessageBox::about(this, tr("GIORNI AGGIUNTI!"), tr((QString::number(UtenteOn->getGiorniFit())).toUtf8().constData()));

         }
    }
    }
    //else
    //    qDebug() << "Yes was *not* clicked";
}




void UiUser::saveSettings()
{
    ultima_sess.obb_pass_giorn = 10000;
    ultima_sess.user = ui->nome->text();
    QSettings settings;

    settings.beginGroup("app");
    settings.setValue("user", ultima_sess.user);
    settings.setValue("firstboot", ultima_sess.first_boot);
    settings.setValue("obb_pass_giorn", ultima_sess.obb_pass_giorn);
    settings.endGroup();

    settings.beginGroup("UiUser");
    settings.setValue("size", size());
    settings.setValue("pos", pos());
    settings.endGroup();
}

void UiUser::closeEvent(QCloseEvent *event)
{
if(UtenteOn)
    ioutenti->saveUserFit(UtenteOn);
saveSettings();
event->accept();
if(!loginF)
QCoreApplication::quit();
}

UiUser::~UiUser()
{
    delete ui;
}

void UiUser::on_saveUser_clicked()
{
   utente * copia = UtenteOn->clone();
   if(!ui->nome->text().isEmpty())
    UtenteOn->setNome(ui->nome->text().toLower().toUtf8().constData());
   if(!ui->cognome->text().isEmpty())
       UtenteOn->setCognome(ui->cognome->text().toLower().toUtf8().constData());
   if(ui->datanascita->date() != QDate(1791,1,1))
       UtenteOn->setDataNascita(ui->datanascita->date());
   if(!ui->password->text().isEmpty())
       UtenteOn->setPassword(ui->password->text().toLower());

    if(!ioutenti->saveUser(UtenteOn)){
       QMessageBox::information(this, tr("ATTENZIONE USERNAME!!"), tr("La combinazione nome e cognome è già usata da un altro utente, si prega di usare un nome e cognome univoci tra tutti gli utenti"));
       UtenteOn = copia;
       }
    else{
        QMessageBox::information(this, tr("FIT UTENTE SALVATO"), tr("Utente salvato correttamente, ricordarsi di effettuare il login o di chiudere il programma per salvare pure i giorni eliminati o aggiunti"));
        loadUserOnUi();
    }
}

void UiUser::on_uomo_clicked()
{
    UtenteOn->setSesso(1);
    ioutenti->saveUser(UtenteOn);
}

void UiUser::on_donna_clicked()
{
    UtenteOn->setSesso(0);
    ioutenti->saveUser(UtenteOn);
}

void UiUser::on_calendarWidget_currentPageChanged(int year, int month)
{
    QDate thisMese(year,month,1);
    ui->mese_calendario->setText(thisMese.toString("MMMM yyyy"));
}

void UiUser::on_elimina_utente_clicked()
{
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Question, "Attenzione!", "NON si può tornare indietro, proseguire eliminando utente?", QMessageBox::Yes|QMessageBox::No).exec())
    {
    ioutenti->deleteUser(UtenteOn);
    UtenteOn = nullptr;
    vaiLogout();
    }
}

void UiUser::on_elimina_giorno_clicked()
{
    if(selGiorno){
        UtenteOn->delete_gg(selGiorno->dataOd());
        ui->right_progress->hide();
        ui->mese_calendario_giorno->hide();
        ui->elimina_giorno->hide();
        updateCalendarioUtente();

    }
}
