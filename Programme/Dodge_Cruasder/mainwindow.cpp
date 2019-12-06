#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "gameover.h"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bkgnd("Images/M_BG.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartButton_clicked()
{
    game gWindow;
    gWindow.setModal(true);
    gWindow.exec();
}

void MainWindow::on_EndButton_clicked()
{
    gameover goWindow;
    //goWindow.setModal(true);
    //goWindow.exec();
}
