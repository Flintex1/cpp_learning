#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Объявление переменной для последующего вывода её на форму
    auto labelText = "Hello World";
    //Вывод переменной на форму
    ui->label->setText(labelText);
}

MainWindow::~MainWindow()
{

    delete ui;
}
