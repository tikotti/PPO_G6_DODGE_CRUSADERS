#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <unistd.h> // pour les sleeps en micro secondes
#include <iostream>
#include <QApplication>
#include <QTimer>

/* ------------------------------------ Jeu ------------------------------------ */


game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{

    mx_asteroide = rand() % 700 + 1;
    taille_asteroide = rand() % 50 + 1;



    m_timer = new QTimer(this);
    m_timer->setInterval(15);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide()));
    m_timer->start();

    /* --------------- Affichage Des Images --------------- */

    ui->setupUi(this);
    QPixmap Hero("C:/Users/matthew.flenet/Desktop/GitHub/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Hero.png");
    ui->Hero->setPixmap(Hero);
    ui->Hero->move(m_x,m_y);

    QPixmap Asteroide("C:/Users/matthew.flenet/Desktop/GitHub/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Asteroid.png");
    ui->Asteroide->setPixmap(Asteroide);
    ui->Asteroide->move(mx_asteroide,my_asteroide);

}

game::~game()
{
    delete ui;
}


/* ------------------------------------ Gameplay, Apparition ------------------------------------ */



/* ------------------------------------ Déplacements Vaisseau ------------------------------------ */

void game::on_pushButton_clicked() //haut
{
    if(m_y + 10 < 20)
    {
        m_y = m_y;
    }else {
        m_y = m_y - 10;
        ui->Hero->move(m_x,m_y);
    }
}

void game::on_pushButton_2_clicked() //bas
{
    if (m_y + 10 > 680)
    {
        m_y = m_y ;
    }else {
        m_y = m_y + 10;
        ui->Hero->move(m_x,m_y);
    }
}

void game::on_pushButton_3_clicked() // droite
{

    if( m_x > 670 )
    {
        m_x = m_x;

    }else{
        m_x = m_x + 10;
        ui->Hero->move(m_x,m_y);
    }

}

void game::on_pushButton_4_clicked() //gauche
{
    if( m_x < 10 )
    {
        m_x = m_x;

    }else{
        m_x = m_x - 10;
        ui->Hero->move(m_x,m_y);
    }
}

/* ------------------------------------ Déplacements Astéroide ------------------------------------ */

void game::asteroide()
{
    /* ---------------Déplacement Astéroide --------------- */
    my_asteroide = my_asteroide + 1;
    ui->Asteroide->move(mx_asteroide,my_asteroide);
    i = i + 1;

    std::cout << i << std::endl;

    if (i > 770)
    {
        my_asteroide = -40;
        mx_asteroide = rand() % 700 + 1;
        taille_asteroide = rand() % 50 + 1;
        i = 0;
    }
};

