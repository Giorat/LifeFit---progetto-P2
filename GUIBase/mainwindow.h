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

class LoginForm;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QString user,bool firstboot=0,QWidget *parent = 0);
    ~MainWindow();

private:
    QCalendarWidget *calendar;
    bool inSettings;
    LoginForm *loginF;
    struct SPreferences
    {
        QString user;
        unsigned int obb_pass_giorn;
        bool first_boot;
    };
    Ui::MainWindow *ui;
    void loadSettings();
    void saveSettings();
    void closeEvent(QCloseEvent* event);
    SPreferences ultima_sess;

private slots:
  void vaiImpostazioni();
  void vaiLogout();
  void caricaDatiFitXml();
  void slotClicked(const QDate& date)
  {
    QMessageBox::information(NULL,"New Date Selected!",date.toString());
  }

};

#endif // MAINWINDOW_H
