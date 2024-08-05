#ifndef SQUARE_H
#define SQUARE_H

#endif // SQUARE_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::MainWindow)
{
ui->setupUi(this);
// ���樠�����㥬 ��ꥪ�� QLineEdit
line1 = new QLineEdit();

line2 = new QLineEdit();
// ��⠭��������� �� � gridLayout
ui->gridLayout->addWidget(line1,0,1);
ui->gridLayout->addWidget(line2,0,2);
scene = new QGraphicsScene(); // ���樠�����㥬 ������ �業�
ui->graphicsView->setScene(scene); // ��⠭�������� �業� � graphicsView
scene->setSceneRect(0,0,300,300); // ��⠭�������� ������� �業�
square = new Square(); // ���樠�����㥬 ������
square->setCallbackFunc(getPosition); // ��⠭�������� � ������ callback �㭪��
square->setPos(100,100); // ��⠭�������� ���⮢�� ������ ������
scene->addItem(square); // ������塞 ������ �� ������� �業�
}
MainWindow::~MainWindow()
{
delete ui;
}
/* callback �㭪�� ����砥� ������ ������
* � ����頥� ��� ���न���� � line1 � line2
* */
void MainWindow::getPosition(QPointF point)
{
line1->setText(QString::number(point.x()));
line2->setText(QString::number(point.y()));
}
QLineEdit * MainWindow::line1;
QLineEdit * MainWindow::line2;
