#include "circularprogress.h"

#include <QPaintEvent>
#include <QPainter>
#include <QLinearGradient>
#include <QPen>

CircularProgress::CircularProgress(QWidget *parent) :
    QWidget(parent),
    m_loadingAngle(0),
    m_width(0)
{
}

CircularProgress::~CircularProgress()
{
}

void CircularProgress::setLoadingAngle(int loadingAngle)
{
    m_loadingAngle = loadingAngle;
}

int CircularProgress::loadingAngle() const
{
    return m_loadingAngle;
}

void CircularProgress::setDiscWidth(int width)
{
    m_width = width;
}

int CircularProgress::discWidth() const
{
    return m_width;
}

void CircularProgress::paintEvent(QPaintEvent *)
{
    QRect drawingRect;
    drawingRect.setX(rect().x() + m_width);
    drawingRect.setY(rect().y() + m_width);
    drawingRect.setWidth(rect().width() - m_width * 2);
    drawingRect.setHeight(rect().height() - m_width * 2);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    const QRectF bounds(0, 0, width(), height());


    QLinearGradient gradient;
     gradient.setStart(bounds.width() / 2, 0);
     gradient.setFinalStop(bounds.width() / 2, bounds.height());
     gradient.setColorAt(0, "#1c1c1c");
     gradient.setColorAt(1, "#28ecd6");

    int arcLengthApproximation = m_width + m_width / 3;
    QPen pen(QBrush(gradient), m_width);
    pen.setCapStyle(Qt::RoundCap);
    painter.setPen(pen);
    painter.drawArc(drawingRect, 90 * 16 - arcLengthApproximation, -m_loadingAngle * 16);
    int perc= 0.75;
    painter.drawText(drawingRect,Qt::AlignCenter,QString::number(perc*100)+" %");
}
