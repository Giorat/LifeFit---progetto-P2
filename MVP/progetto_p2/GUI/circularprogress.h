#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPaintEvent;

class CircularProgress : public QWidget
{
    Q_OBJECT

public:
    explicit CircularProgress(QWidget *parent = 0);

    /**
    * @brief imposta i due colori dominanti per progress circolare
    * @param QString primo colore fascia circolare formato #000000
    * @param QString secondo colore fascia circolare in formato formato #000000
    */
    void setColors(QString, QString);

    /**
    * @param imposta l'angolo di caricamento del progresso circolare
    * @param percentuale angolo di caricamento in centesimi interi
    */
    void setLoadingAngle(int loadingAngle);

private:
    int m_loadingAngle;
    int m_width;
    QLinearGradient gradient;
    int disc_width;

    void paintEvent(QPaintEvent *);
};

#endif // WIDGET_H
