#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>

game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    QPixmap pix("H:/GitHub/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Hero.png");
    ui->Hero->setPixmap(pix);
}

game::~game()
{
    delete ui;
}

void game::on_pushButton_clicked()
{

}
