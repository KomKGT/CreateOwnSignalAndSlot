#ifndef TIMERCLASS_H
#define TIMERCLASS_H

#include<QTimer>
#include<QObject>

class TimerClass : public QObject
{
    Q_OBJECT

public:
    TimerClass();

private slots:

    void timerSlot(); //1

signals:

    void timerCustomSignal(int);  //2

private:
    QTimer *timer;    //1

    int timeCount;      //1
};

#endif // TIMERCLASS_H
