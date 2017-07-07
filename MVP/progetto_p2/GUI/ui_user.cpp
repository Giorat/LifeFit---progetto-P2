#include "ui_user.h"

UiUser::UiUser(utente * user,QWidget *parent) :
    QMainWindow(parent),UtenteOn(user),inSettings(false),
    ui(new Ui::UiUser)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());

    ui->setupUi(this);

    if(!UtenteOn->settingsEnabled())
        this->ui->settings->hide();
    if(!UtenteOn->aggiungiAttivita())
        this->ui->aggiungi_dati->hide();
    if(!UtenteOn->viewCalendar()){
        this->ui->top_title->setText();
        this->ui->right_progress->move(0,80);
        this->ui->right_ui->hide();
    }
    this->ui->content2->hide();

    QMainWindow::showMaximized();
        calendar = ui->calendarWidget;
        calendar->setGridVisible(true);
        calendar->setStyleSheet("background-color: rgb(255, 255, 255);");
 if(UtenteOn->getGiorniFit()!=0)
         ui->mese_calendario->setText(UtenteOn->ultimaAtt().toString("MMMM yyyy"));


loadUserOnUi();
//loadFriendList();

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
         }
    }
    }
}


void UiUser::closeEvent(QCloseEvent *event)
{
event->accept();
if(UtenteOn)
    ioutenti->saveUserFit(UtenteOn);
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
   if(!ui->password->text().isEmpty())
       UtenteOn->setPassword(ui->password->text().toLower());
    UtenteOn->setDataNascita(ui->datanascita->date());

    if(!ioutenti->saveUser(UtenteOn)){
       QMessageBox::information(this, tr("ATTENZIONE USERNAME!!"), tr("La combinazione nome e cognome è già usata da un altro utente, si prega di usare un nome e cognome univoci tra tutti gli utenti"));
       UtenteOn = copia;
       }
    else{
        QMessageBox::information(this, tr("FIT UTENTE SALVATO"), tr("Utente salvato correttamente, ricordarsi di effettuare il logout o di chiudere il programma per salvare pure i giorni eliminati o aggiunti"));
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
