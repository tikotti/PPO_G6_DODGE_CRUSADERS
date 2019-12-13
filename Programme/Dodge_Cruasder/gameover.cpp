#include "gameover.h"
#include "ui_game.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QPixmap>
#include <QGridLayout>
#include <QLayout>
#include <QLabel>
#include <QWidget>
#include <iostream>
#include <QDir>

gameover::gameover(QDialog *parent) :
    QDialog(parent)
{

    QPixmap bkgnd("Images/GO_BG.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

gameover::~gameover()
{

}

void gameover::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
}

void gameover::on_btn_Quit_clicked()
{

    this->close();
}
