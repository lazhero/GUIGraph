#include "graphnode.h"
#include<iostream>

GraphNode::GraphNode(QWidget* parent,std::string& name)
{
    id=new int();
    x_axis=new int();
    y_axis=new int();
    button=new QPushButton(QString::fromStdString(name),parent);
    setParent(parent);
}
GraphNode::GraphNode(QWidget* parent):QWidget(parent){
    GraphNode(parent,*new std::string(""));
}
void GraphNode::setID(int ID){
    *id=*new int(ID);
}
void GraphNode::setPosition(int x, int y){
    *x_axis=*new int(x);
    *y_axis=*new int(y);
    button->move(x,y);
}

int GraphNode::getID(){
    return *id;
}
int GraphNode::getX(){
    return *x_axis;
}
int GraphNode::getY(){
    return *y_axis;
}
QPushButton* GraphNode::getButton(){
    return button;
}
void GraphNode::setString(QString &string){
    button->setText(string);
}
void GraphNode::paintEvent(QPaintEvent* event){
    QPoint point(*x_axis,*y_axis);
    QPainter painter(parent);
    painter.drawEllipse(point,100,100);
}
QWidget* GraphNode::getParent(){
    return parent;
}
void GraphNode::setParent(QWidget *Parent){
    parent=Parent;

}
