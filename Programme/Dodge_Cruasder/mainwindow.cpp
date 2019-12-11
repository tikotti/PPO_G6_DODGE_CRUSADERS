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

    QPixmap hero("Images/Hero.png");
    hero = hero.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette hpal;
    hpal.setBrush(QPalette::Background, hero);
    ui->lbl_charactere->setPalette(hpal);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Start_clicked()
{
    game gWindow;
    gWindow.setModal(true);
    gWindow.exec();
    gWindow.setFixedSize(gWindow.size());

    //Fermetrue de l'ancienne fenêtre.
    close();
}

void MainWindow::on_btn_Quit_clicked()
{
    gameover goWindow;
    goWindow.setModal(true);
    goWindow.exec();
    goWindow.setFixedSize(goWindow.size());

    //Fermetrue de l'ancienne fenêtre.
    close();
}
