#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:
    void on_startGame_clicked();

    void on_stopGame_clicked();

    void on_sek_clicked();

    void on_min_clicked();

    void on_p1switch_clicked();

    void on_p2switch_clicked();

    void updateProgressBar();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer* pQTimer;
    void setGameInfo(QString, short);

};
#endif // MAINWINDOW_H
