#include "ui_user.h"



UiUser::UiUser(utente * user,bool iAV,QWidget *parent) :
    QMainWindow(parent),ui(new Ui::UiUser),UtenteOn(user),inSettings(false),loginF(nullptr),isAdminView(iAV),gruppo(-1)
{
    const QString DEFAULT_DIR_KEY("default_dir");
    QSettings MySettings;
    ioutenti= new iofit( MySettings.value(DEFAULT_DIR_KEY).toString().toUtf8().constData());
    ioutenti->loadUserFit(UtenteOn);
    ui->setupUi(this);
    QMainWindow::showMaximized();

    progp = ui->progressoMovim;
    progp->setColors("#00cc66","#00cc66");

    progs = ui->progressoSonno;
    progs->setColors("#0099ff","#0099ff");

    progm = ui->progressoMese;
    progm->setColors("#9999ff","#9999ff");

    this->ui->content2->hide();

    calendar = ui->calendarWidget;
    calendar->setGridVisible(true);
    calendar->setStyleSheet("background-color: rgb(255, 255, 255);");

    loadUserOnUi();
    loadFriendList();

    //gestione eventi
    QObject::connect(calendar,SIGNAL(clicked(const QDate)),this,SLOT(loadGiorno(const QDate)));
    QObject::connect(this->ui->settings,SIGNAL(clicked()),this,SLOT(vaiImpostazioni()));
    QObject::connect(this->ui->logout,SIGNAL(clicked()),this,SLOT(vaiLogout()));
    QObject::connect(this->ui->aggiungi_dati,SIGNAL(clicked()),this,SLOT(caricaDatiFitXml()));
}


void UiUser::loadFriendList(){
   std::vector<const utente*> amici_u = ioutenti->loadUtenti();
   std::vector<std::pair<int,int>> amici;
   amici = utente::ultimiSetteGiorniUtenti(amici_u,QDate::currentDate());
   int i=0;
    for ( const auto &p : amici ){
        QString testo;
        if( (unsigned int)p.first == UtenteOn->getCodiceUtente())
            testo =  QString::fromStdString("Tu: "+ std::to_string(p.second)  +" passi");
        else
            testo =  QString::fromStdString(utente::utenteCodiceUtente(amici_u,p.first)->getNome()+": "+ std::to_string(p.second)  +" passi");
        flist.push_back(new friend_label(testo));
        ui->amici_list->addWidget(flist.back());
        i++;
    }
}


void UiUser::updateCalendarioUtente(){
    QImage image;
    if(UtenteOn->getGiorniFit()==0){
       if(!UtenteOn->aggiungiAttivita())
        image = QImage(":/resources/no_data_ask.png");
       else
        image = QImage(":/resources/no_data.png");
       ui->no_data_img->setPixmap(QPixmap::fromImage(image));
       ui->right_progress->hide();
       ui->no_data_img->show();
    }else{
       ui->no_data_img->setAttribute(Qt::WA_DontShowOnScreen, true);
       ui->no_data_img->hide();
       calendar->setDateRange(UtenteOn->primaAtt(),UtenteOn->ultimaAtt());
       loadGiorno(UtenteOn->ultimaAtt());
    }
}

void UiUser::loadUserOnUi(){
    if(UtenteOn->getGiorniFit()!=0)
        ui->mese_calendario->setText(UtenteOn->ultimaAtt().toString("MMMM yyyy"));

    if(!isAdminView){
        if(!UtenteOn->settingsEnabled())
            ui->settings->hide();
        if(!UtenteOn->aggiungiAttivita())
            ui->aggiungi_dati->hide();
        if(!UtenteOn->viewCalendar()){
            ui->top_title->setText(UtenteOn->ultimaAtt().toString("MMMM yyyy"));
            ui->right_progress->move(0,80);
            ui->right_ui->hide();
        }
        ui->tipo_utente_padre->hide();
    }else{
        ui->nome_app->setText("LIFE-FIT - ATTENZIONE si sta utilizzando MODALITA  ADMIN");
    }

    ui->eta->setText(QString::number(UtenteOn->getAge()));
    ui->username->setText(QString::fromStdString(UtenteOn->getUsername()));
    ui->datanascita->setDate(UtenteOn->getDataNascita());

    if(UtenteOn->getSesso())
        ui->sesso->setText("Uomo");
    else
        ui->sesso->setText("Donna");

    updateCalendarioUtente();
}

void UiUser::loadGiorno(const QDate& date){
    ui->mese_calendario_giorno->hide();
    ui->right_progress->hide();
    ui->elimina_giorno->hide();
    selGiorno = UtenteOn->giornoData(date);

    if(selGiorno){
        ui->mese_calendario_giorno->setText("Statistiche del "+date.toString("dd MMMM yyyy"));

        float percP = (float)selGiorno->movim().totale_passi()/UtenteOn->passiConsigliati();
        progp->setLoadingAngle(360*percP);
        progp->show();

        float percS = (float)selGiorno->dormit().minDormito() /450;
        progs->setLoadingAngle(360*percS);
        progs->show();

        float percM = (float)UtenteOn->progressi_mese(date)/(UtenteOn->passiConsigliati()*date.daysInMonth());
        progm->setLoadingAngle(360*percM);
        progm->show();

        ui->right_progress->show();
        ui->mese_calendario_giorno->show();
        ui->elimina_giorno->show();
    }
}


void UiUser::caricaDatiFitXml(){
QStringList fileNames;
QString fileScelto;
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Warning, "INSERIMENTO DATI FIT", "Hai controllato il file xml?", QMessageBox::Yes|QMessageBox::No).exec())
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
         }//file scelto non vuoto
    }//se carica file
    }//se ha controllato file xml
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

void UiUser::vaiLogout(){
    loginF = new LoginForm();
    loginF->setWindowTitle("LIFE-FIT LOGIN");
    loginF->show();
    this->close();
}


void UiUser::on_saveUser_clicked()
{
   utente * copia = UtenteOn->clone();
   if(!ui->nome->text().isEmpty())
       UtenteOn->setNome(ui->nome->text().toLower().toUtf8().constData());
   if(!ui->cognome->text().isEmpty())
       UtenteOn->setCognome(ui->cognome->text().toLower().toUtf8().constData());
   if(!ui->password->text().isEmpty())
       UtenteOn->setPassword(QString(QCryptographicHash::hash(ui->password->text().toLower().toUtf8().constData(),QCryptographicHash::Md5).toHex()));
    UtenteOn->setDataNascita(ui->datanascita->date());

    if(!ioutenti->saveUser(UtenteOn)){
       QMessageBox::warning(this, tr("ATTENZIONE USERNAME!!"), tr("La combinazione nome e cognome è già usata da un altro utente, si prega di usare un nome e cognome univoci tra tutti gli utenti"));
       UtenteOn = copia;
       }
    else{

        QMessageBox::information(this, tr("FIT UTENTE SALVATO"), tr("Utente salvato correttamente, ricordarsi di effettuare il logout o di chiudere il programma per salvare pure i giorni eliminati o aggiunti"));
        if(isAdminView && gruppo!=-1 && gruppo!=UtenteOn->codiceGruppo()){
            if(gruppo ==1)
                UtenteOn = new bambino(UtenteOn->getCodiceUtente(),UtenteOn->getNome(),UtenteOn->getCognome(),UtenteOn->getDataNascita(),UtenteOn->getSesso(),UtenteOn->getPassword());
            if(gruppo ==2)
                UtenteOn = new adolescente(UtenteOn->getCodiceUtente(),UtenteOn->getNome(),UtenteOn->getCognome(),UtenteOn->getDataNascita(),UtenteOn->getSesso(),UtenteOn->getPassword());
            if(gruppo ==3)
                UtenteOn = new adulto(UtenteOn->getCodiceUtente(),UtenteOn->getNome(),UtenteOn->getCognome(),UtenteOn->getDataNascita(),UtenteOn->getSesso(),UtenteOn->getPassword());

            UtenteOn->setFit(copia);
            ioutenti->saveUser(UtenteOn);
        }

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
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Warning, "Attenzione!", "NON si può tornare indietro, proseguire eliminando utente?", QMessageBox::Yes|QMessageBox::No).exec())
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

void UiUser::on_bambino_clicked()
{
    gruppo=1;
}

void UiUser::on_adolescente_clicked()
{
    gruppo=2;
}

void UiUser::on_adulto_clicked()
{
    gruppo=3;
}
