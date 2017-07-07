#ifndef UI_USER_H
#define UI_USER_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QDate>
#include <QFileDialog>
#include <QCloseEvent>
#include <QPlainTextEdit>
#include <QMessageBox>
#include <QGraphicsPixmapItem>

#include "ui_ui_user.h"

#include "loginform.h"
#include "circularprogress.h"

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
    explicit UiUser(utente *user ,QWidget *parent = 0);
    ~UiUser();

private:
    iofit * ioutenti;
    utente * UtenteOn;
    QCalendarWidget *calendar;
    QDate dataSel;
    giorno * selGiorno;
    bool inSettings;
    LoginForm *loginF;
    Ui::UiUser *ui;

    void loadFriendList();
    void updateCalendarioUtente();
    void loadUserOnUi();
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
};

#endif // UI_USER_H
