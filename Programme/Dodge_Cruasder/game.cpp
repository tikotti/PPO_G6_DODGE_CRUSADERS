#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <unistd.h> // pour les sleeps en micro secondes
#include <iostream>
#include <QApplication>
#include <QTimer>
#include <windows.h>
#include <time.h>

/* ------------------------------------ Jeu ------------------------------------ */

game::game(QWidget *parent) : QDialog(parent), ui(new Ui::game)
{
    ui->setupUi(this);

    /* --------------- Affichage Des Images --------------- */

    QPixmap BackGroundGame("C:/Users/33782/Pictures/BackGroundGame.png");
    ui->BackGroundGame->setPixmap(BackGroundGame);

    QPixmap pix("E:/Github-Kraken/Dodge Crusaders/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Hero.png");
    ui->Hero->setPixmap(pix);
    ui->Hero->move(m_x,m_y); //défini la position de base du vaisseau

    QPixmap Asteroide("E:/Github-Kraken/Dodge Crusaders/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Asteroid.png");

    ui->Asteroide->setPixmap(Asteroide);
    ui->Asteroide1->setPixmap(Asteroide);
    ui->Asteroide2->setPixmap(Asteroide);

    /* --------------- Codage Des Threads --------------- */

    m_timer = new QTimer(this);
    m_timer->setInterval(timerspeed);

    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide())); //crée l'astéroide et éxecute ses fonctions en parallèle
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide1()));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide2()));

    m_timer->start(); // démarre les threads

    /* --------------- Codage Des Collisions --------------- */

    if((m_y - 40) < my_asteroide < (m_y + 40) && (m_x - 40) < mx_asteroide < (m_x + 40))
    {
        std::cout << "Vous etes mort" << std::endl;
    }
}

game::~game()
{
    delete ui;
}

/* ------------------------------------ Gameplay, Apparition, collisions ------------------------------------ */



/* ------------------------------------ Déplacements Vaisseau ------------------------------------ */

void game::on_pushButton_clicked() //haut
{
    if(m_y + 10 < 20){}
    else
    {
        m_y = m_y - 10;
        ui->Hero->move(m_x,m_y);
    }
}

void game::on_pushButton_2_clicked() //bas
{
    if (m_y + 10 > 680){}
    else
    {
        m_y = m_y + 10;
        ui->Hero->move(m_x,m_y);
    }
}


void game::on_pushButton_3_clicked() // droite
{

    if( m_x > 670 ){}
    else
    {
        m_x = m_x + 10;
        ui->Hero->move(m_x,m_y);
    }

}

void game::on_pushButton_4_clicked() //gauche
{
    if( m_x < 10 ){}
    else
    {
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

    if (my_asteroide > 770)
    {
        my_asteroide = -50 ;
        mx_asteroide = rand() % 700 + 1;

        timerspeed = timerspeed - 0.5; //fonction unique accélérant le jeu au fur et a mesure
        m_timer->setInterval(timerspeed); //fonction unique accélérant le jeu au fur et a mesure

    }
}

void game::asteroide1()
{
    my_asteroide1 = my_asteroide1 + 1;
    ui->Asteroide1->move(mx_asteroide1,my_asteroide1);

    if (my_asteroide1 > 770)
    {
        my_asteroide1 = -240 ;
        mx_asteroide1 = rand() % 700 + 1;
    }
}

void game::asteroide2()
{
    /* ---------------Déplacement Astéroide --------------- */

    my_asteroide2 = my_asteroide2 + 1;
    ui->Asteroide2->move(mx_asteroide2,my_asteroide2);

    if (my_asteroide2 > 770)
    {
        my_asteroide2 = -440 ;
        mx_asteroide2 = rand() % 700 + 1;
    }
}

void game::BackGroundGame()
{
}
