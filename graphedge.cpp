#include "graphedge.h"

GraphEdge::GraphEdge(QWidget *parent) : QWidget(parent)
{

}
GraphEdge::GraphEdge(QWidget *parent,int x1,int y1,int x2,int y2){
    startPointers();
    setX1(x1);
    setX2(x2);
    setY1(y1);
    setY2(y2);
    setParent(parent);
    //QPainter painter(Parent);
    //painter.drawLine(*X1,*Y1,*X2,*Y2);
}
void GraphEdge::setPointer(int* &ptr,int data){
    *ptr=*new int(data);
}
void GraphEdge::setX1(int data){
    setPointer(X1,data);
}
void GraphEdge::setX2(int data){
    setPointer(X2,data);
}
void GraphEdge::setY1(int data){
    setPointer(Y1,data);
}
void GraphEdge::setY2(int data){
    setPointer(Y2,data);
}
void GraphEdge::setPrice(int data){
    setPointer(price,data);
}
void GraphEdge::setParent(QWidget *parent){
    Parent=parent;
}
int GraphEdge::getX1(){
    return *X1;
}
int GraphEdge::getX2(){
    return *X2;
}
int GraphEdge::getY1(){
    return *Y1;
}
int GraphEdge::getY2(){
    return *Y2;
}
int GraphEdge::getPrice(){
    return *price;
}
QWidget* GraphEdge::getParent(){
    return Parent;
}
void GraphEdge::paintEvent(QPaintEvent *&event){
    QPainter painter(Parent);
    painter.drawLine(*X1,*Y1,*X2,*Y2);
}
void GraphEdge::startPointers(){
    X1=new int();
    X2=new int();
    Y1=new int();
    Y2=new int();
    price=new int();
}
