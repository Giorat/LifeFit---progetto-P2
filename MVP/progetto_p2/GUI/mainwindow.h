#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QDate>
#include <QFileDialog>
#include <QSettings>
#include <QCloseEvent>
#include <QPlainTextEdit>
#include <QMessageBox>

#include "ui_mainwindow.h"
#include "loginform.h"
#include "circularprogress.h"
#include "../MODEL/utente.h"

class LoginForm;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(utente *user ,QWidget *parent = 0);
    ~MainWindow();

private:
    admin_iofit * ioutenti;
    utente * UtenteOn;
    QCalendarWidget *calendar;
    QDate dataSel;
    giorno * selGiorno;
    bool inSettings;
    LoginForm *loginF;
    struct SPreferences
    {
        QString user;
        unsigned int obb_pass_giorn;
        bool first_boot;
    };
    Ui::MainWindow *ui;
    SPreferences ultima_sess;

    void loadFriendList();
    void updateCalendarioUtente();
    void loadUserOnUi();
    void loadSettings();
    void saveSettings();
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

#endif // MAINWINDOW_H
