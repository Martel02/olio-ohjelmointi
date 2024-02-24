#include "mainwindow.h"
#include "ui_mainwindow.h"

int i = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    i += 1;
    ui->textBrowser->setText(QString::number(i));
}


void MainWindow::on_pushButton_2_clicked()
{
    i = 0;
    ui->textBrowser->clear();
}

