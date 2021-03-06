#include "circularprogress.h"

CircularProgress::CircularProgress(QWidget *parent) :
    QWidget(parent), m_loadingAngle(0), m_width(20){
        this->setStyleSheet("background:white;");
    }

void CircularProgress::setColors(QString start, QString end){
    gradient.setColorAt(0,start);
    gradient.setColorAt(1,end);
}

void CircularProgress::setLoadingAngle(int loadingAngle)
{
    m_loadingAngle = loadingAngle;
}

void CircularProgress::paintEvent(QPaintEvent *)
{
    QRect backgroundRect;
    backgroundRect.setX(rect().x());
    backgroundRect.setY(rect().y());
    backgroundRect.setWidth(rect().width());
    backgroundRect.setHeight(rect().height());

    QRect drawingRect;
    drawingRect.setX(rect().x() + m_width);
    drawingRect.setY(rect().y() + m_width);
    drawingRect.setWidth(rect().width() - m_width * 2);
    drawingRect.setHeight(rect().height() - m_width * 2);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(backgroundRect,QBrush(Qt::white));

    const QRectF bounds(0, 0, width(), height());

     gradient.setStart(bounds.width() / 2, 0);
     gradient.setFinalStop(bounds.width() / 2, bounds.height());

    int arcLengthApproximation = m_width + m_width / 3;
    QPen pen(QBrush(gradient), m_width);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.drawArc(drawingRect, 90 * 16 - arcLengthApproximation, -m_loadingAngle * 16);

    float perc= round(((float)m_loadingAngle/360)*100);

    if(perc >= 100)
        painter.drawText(drawingRect,Qt::AlignCenter, QString::fromStdString(std::to_string(perc)).left(3)+ " %");
    else
        painter.drawText(drawingRect,Qt::AlignCenter, QString::fromStdString(std::to_string(perc)).left(2)+ " %");

    this->setStyleSheet("background-color: rgb(255, 255, 255);");
}
