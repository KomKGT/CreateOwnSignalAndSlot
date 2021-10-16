#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timerclass.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void tctSignal(int); //TEST

private slots:
    void tmSlot(); //TEST

    void timerCustomSlot(int); //2

    void tctSlot(int); //TEST

private:
    Ui::MainWindow *ui;
    TimerClass *timerObj;    //2

    QTimer *timer2; //TEST
    int Counter2; //TEST
};
#endif // MAINWINDOW_H
