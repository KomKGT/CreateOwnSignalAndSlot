#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timerObj = new TimerClass(); //2

    Counter2 = 99;//TEST


    timer2 = new QTimer;//TEST
    timer2->start(1000);//TEST
    connect(timer2,SIGNAL(timeout()),this,SLOT(tmSlot()));
    connect(this,SIGNAL(tctSignal(int)),this,SLOT(tctSlot(int)));

    connect(timerObj,SIGNAL(timerCustomSignal(int)),this,SLOT(timerCustomSlot(int))); //2
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::tmSlot()
{
    qDebug()<<"GGGG";

    emit tctSignal(Counter2);

    Counter2++;
}

void MainWindow::timerCustomSlot(int value) //2
{
    ui->label->setText("<center>"+QString::number(value)+"</center>"); //2
}

void MainWindow::tctSlot(int)
{
    qDebug()<<"Check"<<Counter2;
}

