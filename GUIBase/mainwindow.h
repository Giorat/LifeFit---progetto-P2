#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCalendarWidget>
#include <QDate>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:

  void slotClicked(const QDate& date)
  {
    QMessageBox::information(NULL,"New Date Selected!",date.toString());
  }

};

#endif // MAINWINDOW_H
