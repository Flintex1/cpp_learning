#include "square.h"
#include <windows.h>
Square::Square(QObject *parent) :
QObject(parent), QGraphicsItem()
{
// ���樠�����㥬 � ����ࠨ���� ��஢�� ⠩���
timer = new QTimer();
connect(timer, &QTimer::timeout, this, &Square::slotTimer);
timer->start(1000/33);
}
Square::~Square()
{
}
QRectF Square::boundingRect() const
{
return QRectF(-15,-15,30,30);
}

void Square::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
painter->setPen(Qt::black);
painter->setBrush(Qt::green);
painter->drawRect(-15,-15,30,30);
Q_UNUSED(option);
Q_UNUSED(widget);
}
void Square::slotTimer()
{
// � ����ᨬ��� �� ������� ������ ��६�頥� ������ �� �業�
if(GetAsyncKeyState('A')){
this->setX(this->x() - 2);
}
if(GetAsyncKeyState('D')){
this->setX(this->x() + 2);
}
if(GetAsyncKeyState('W')){
this->setY(this->y() - 2);
}
if(GetAsyncKeyState('S')){
this->setY(this->y() + 2);
}
// ��뢠�� callback �㭪�� ��� ��।�� ���न��� ������
callbackFunc(this->pos());
}
void Square::setCallbackFunc(void (*func)(QPointF point))
{
// ��⠭�������� 㪠��⥫� �� callback �㭪��
callbackFunc = func;
}
