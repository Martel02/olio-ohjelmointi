#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::on_startGame_clicked()
{
    if(!pQTimer->isActive()) {
        setGameInfo("Game ongoing", 13);
        currentPlayer = 1;
        pQTimer->start(1000);
    }
}

void MainWindow::on_stopGame_clicked()
{
    setGameInfo("Select playtime and press start game", 13);
    pQTimer->stop();

}

void MainWindow::on_sek_clicked()
{
    if(!pQTimer->isActive()) {
        gameTime = 120;
        player1Time = gameTime;
        player2Time = gameTime;
        ui->p1bar->setRange(0, gameTime);
        ui->p2bar->setRange(0, gameTime);
        ui->p1bar->setValue(gameTime);
        ui->p2bar->setValue(gameTime);
        setGameInfo("Ready to play", 13);
    }
}

void MainWindow::on_min_clicked()
{
    if(!pQTimer->isActive()) {
        gameTime = 300;
        player1Time = gameTime;
        player2Time = gameTime;
        ui->p1bar->setRange(0, gameTime);
        ui->p2bar->setRange(0, gameTime);
        ui->p1bar->setValue(gameTime);
        ui->p2bar->setValue(gameTime);
        setGameInfo("Ready to play", 13);
    }
}

void MainWindow::on_p1switch_clicked()
{
    currentPlayer = 2;
    setGameInfo("Player 2 turn", 13);
}

void MainWindow::on_p2switch_clicked()
{
    currentPlayer = 1;
    setGameInfo("Player 1 turn", 13);
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1){
        player1Time -= 1;
        ui->p1bar->setValue(player1Time);
    } else if (currentPlayer == 2){
        player2Time -= 1;
        ui->p2bar->setValue(player2Time);
    }

    if (player1Time == 0){
        setGameInfo("Player 2 won", 13);
        pQTimer->stop();
    } else if (player2Time == 0){
        setGameInfo("Player 1 won", 13);
        pQTimer->stop();
    }
}

void MainWindow::setGameInfo(QString teksti, short size)
{
    QString luku = QString::number(size);
    ui->label->setStyleSheet("font: "+luku+"pt");
    ui->label->setText(teksti);

}

