#include "timerclass.h"
#include <QDebug>
TimerClass::TimerClass()
{
    timer = new QTimer;//1
    timer->start(1000);//1
    connect(timer,SIGNAL(timeout()),this,SLOT(timerSlot())); //1

    timeCount = 0;//1
}

void TimerClass::timerSlot()
{
    qDebug() <<"timeCount" << timeCount << "Show temp";//1

    emit timerCustomSignal(timeCount); //2

    timeCount++;//1

}
