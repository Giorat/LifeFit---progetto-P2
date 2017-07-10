#ifndef UI_USER_H
#define UI_USER_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QDate>
#include <QFileDialog>
#include <QCloseEvent>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QGraphicsPixmapItem>

#include "ui_ui_user.h"

#include "loginform.h"
#include "circularprogress.h"
#include "friend_label.h"

#include "../MODEL/utente.h"

class UiUser;
class LoginForm;

namespace Ui {
class UiUser;
}

class UiUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit UiUser(utente *user, bool iAV=false, QWidget *parent = 0);
    ~UiUser();

private:
    Ui::UiUser *ui;
    utente * UtenteOn;
    bool inSettings;
    LoginForm *loginF;
    bool isAdminView;
    iofit * ioutenti;
    QCalendarWidget *calendar;
    QDate dataSel;
    giorno * selGiorno;
    int gruppo;
    CircularProgress *progp;
    CircularProgress *progs;
    CircularProgress *progm;
    std::vector<friend_label*> flist;


    /**
     * @brief carica lista amici generando friend_label da ultimiSetteGiorniUtenti
     */
    void loadFriendList();

    /**
     * @brief carica Informazioni Utente su UI - info-calendario-progressi
     */
    void loadUserOnUi();

    /**
     * @brief aggiorna calendario utente con minimo massimo giorni e carica giorno ultima attività
     */
    void updateCalendarioUtente();

    void closeEvent(QCloseEvent* event);

private slots:
  void vaiImpostazioni();
  void vaiLogout();
  void caricaDatiFitXml();
  void loadGiorno(const QDate&);

  //Aggiunti da Designer
  void on_saveUser_clicked();
  void on_uomo_clicked();
  void on_donna_clicked();
  void on_calendarWidget_currentPageChanged(int year, int month);
  void on_elimina_utente_clicked();
  void on_elimina_giorno_clicked();
  void on_bambino_clicked();
  void on_adolescente_clicked();
  void on_adulto_clicked();
};

#endif // UI_USER_H
