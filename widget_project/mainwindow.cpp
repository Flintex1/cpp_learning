#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //������� ��६����� ��� ��᫥���饣� �뢮�� �� �� ���
    auto labelText = "Hello World";
    //�뢮� ��६����� �� ���
    ui->label->setText(labelText);
}

MainWindow::~MainWindow()
{

    delete ui;
}
