#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    graph=new Graph(ui->GraphCointainer);

}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::paintEvent(QPaintEvent *event)
{

}



void MainWindow::on_AddEdge_clicked()
{

}

void MainWindow::on_getRoute_clicked()
{

}

void MainWindow::on_AddNode_clicked()

{

    graph->addNode(12,33);
    graph->update();
}
QString MainWindow::getLineEditText(QLineEdit* lineEdit){
    return lineEdit->text() ;
}
