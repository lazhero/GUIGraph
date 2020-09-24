#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QPaintEvent>
#include<Graph.h>
#include<QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void paintEvent(QPaintEvent* event);


private slots:
    void on_AddEdge_clicked();

    void on_getRoute_clicked();

    void on_AddNode_clicked();

private:
    Graph * graph;
    Ui::MainWindow *ui;
    QString getLineEditText(QLineEdit* lineEdit);
};
#endif // MAINWINDOW_H
