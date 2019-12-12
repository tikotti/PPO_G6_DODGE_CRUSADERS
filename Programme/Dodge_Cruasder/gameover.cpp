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

gameover::gameover(QDialog *parent) :
    QDialog(parent)
{
    // QLabel *Label = new QLabel(this);
    QPixmap bkgnd("C:/Users/33782/Pictures/unity-logo-100571261-large.png");
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
