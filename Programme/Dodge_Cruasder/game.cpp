#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>

game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);

}

game::~game()
{
    delete ui;
}
