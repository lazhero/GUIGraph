#ifndef GRAPHEDGE_H
#define GRAPHEDGE_H
#include <QWidget>
#include<QPaintEvent>
#include<QPainter>
class GraphEdge : public QWidget
{
    Q_OBJECT
public:
    explicit GraphEdge(QWidget *parent = nullptr);
    GraphEdge(QWidget *parent,int x1,int y1,int x2,int y2);
    void setX1(int data);
    void setX2(int data);
    void setY1(int data);
    void setY2(int data);
    void setPrice(int data);
    void setParent(QWidget *parent);
    int getX1();
    int getX2();
    int getY1();
    int getY2();
    int getPrice();
    QWidget* getParent();
    virtual void paintEvent(QPaintEvent* &event);
private:
    QWidget *Parent;
    int* X1;
    int *Y1;
    int *X2;
    int *Y2;
    int *price;
    void setPointer(int* &ptr,int data);
    void startPointers();
signals:

};

#endif // GRAPHEDGE_H
