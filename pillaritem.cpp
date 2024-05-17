#include "pillaritem.h"
#include <QRandomGenerator>

PillarItem::PillarItem() :
    topPillar(new QGraphicsPixmapItem(QPixmap(":/C:/Users/nasti/Desktop/Images Flappy Bird/Pillar2.png"))),
    bottomPillar(new QGraphicsPixmapItem(QPixmap(":/C:/Users/nasti/Desktop/Images Flappy Bird/Pillar.png")))
{
    topPillar->setPos(QPointF(0,0) - QPointF(topPillar->boundingRect().width()/2,
                                              topPillar->boundingRect().height() + 60));

    bottomPillar->setPos(QPointF(0,0) + QPointF(-bottomPillar->boundingRect().width()/2,
                                                 60 ));

    int yPos = QRandomGenerator::global()->bounded(150);

    xAnimation = new QPropertyAnimation(this, "x", this);

    addToGroup(topPillar);
    addToGroup(bottomPillar);
}

qreal PillarItem::x() const
{
    return m_x;
}

void PillarItem::setX(qreal newX)
{
    m_x = newX;
}
