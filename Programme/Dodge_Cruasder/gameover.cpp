#include "gameover.h"
#include "ui_game.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QPixmap>
#include <QGridLayout>
#include <QLayout>
#include <QLabel>
#include <QWidget>

gameover::gameover(QWidget *parent) : QWidget(parent)
{
    QLabel *Label = new QLabel(this);
    label.setPixmap(QPixmap(QApplication::applicationDirPath() + "/images/GO_BG.jpg"));
}

gameover::~gameover()
{

}

void gameover::showEvent(QShowEvent *event)
{
    Q_UNUSED(event);
}
