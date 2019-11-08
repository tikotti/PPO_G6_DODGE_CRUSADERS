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

void game::on_pushButton_clicked() //haut
{
    m_y = m_y - 10;
    ui->Hero->move(m_x,m_y);

    if (m_y - 10 > 40) // si m_y depasse l'ecran
    {
        m_y = m_y ; // le vaisseau ne descends pas
     }else {
        m_y = m_y - 10;
        ui->Hero->move(m_x,m_y);
    }

}

void game::on_pushButton_2_clicked() //bas
{
    if (m_y + 10 > 680) // si m_y depasse l'ecran
    {
        m_y = m_y ; // le vaisseau ne descends pas
     }else {
        m_y = m_y + 10;
        ui->Hero->move(m_x,m_y);
    }

}

void game::on_pushButton_3_clicked() // droite
{
    m_x = m_x + 10;
    ui->Hero->move(m_x,m_y);
}

void game::on_pushButton_4_clicked() //gauche
{
    m_x = m_x - 10;
    ui->Hero->move(m_x,m_y);
}
