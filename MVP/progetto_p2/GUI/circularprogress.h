#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPaintEvent;

class CircularProgress : public QWidget
{
    Q_OBJECT

public:
    explicit CircularProgress(QWidget *parent = 0);
    ~CircularProgress();

    void setColors(QString, QString);

    void setLoadingAngle(int loadingAngle);
    int loadingAngle() const;

    void setDiscWidth(int width);
    int discWidth() const;

protected:
    void paintEvent(QPaintEvent *);

private:
    int m_loadingAngle;
    int m_width;
    QLinearGradient gradient;
};

#endif // WIDGET_H
