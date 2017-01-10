#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPaintEvent;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void setLoadingAngle(int loadingAngle);
    int loadingAngle() const;

    void setDiscWidth(int width);
    int discWidth() const;

protected:
    void paintEvent(QPaintEvent *);

private:
    int m_loadingAngle;
    int m_width;
};

#endif // WIDGET_H
