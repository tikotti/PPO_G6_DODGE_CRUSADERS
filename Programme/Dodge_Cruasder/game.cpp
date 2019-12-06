#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <unistd.h> // pour les sleeps en micro secondes
#include <iostream>
#include <QApplication>
#include <QTimer>
#include <windows.h>

/* ------------------------------------ Jeu ------------------------------------ */


game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{

    m_timer = new QTimer(this);
    m_timer->setInterval(10);

    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide()));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide1()));

    m_timer->start();

    /* --------------- Affichage Des Images --------------- */

    ui->setupUi(this);
    QPixmap pix(QApplication::applicationDirPath() + "/Images/Hero.png");
    ui->Hero->setPixmap(pix);
    ui->Hero->move(m_x,m_y);



    QPixmap Asteroide("C:/Users/matthew.flenet/Desktop/GitHub/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Asteroid.png");
    ui->Asteroide->setPixmap(Asteroide);
    ui->Asteroide->move(mx_asteroide,my_asteroide);

    QPixmap Asteroide1("C:/Users/matthew.flenet/Desktop/GitHub/PPO_G6_DODGE_CRUSADERS/Programme/Dodge_Cruasder/Images/Asteroid.png");
    ui->Asteroide1->setPixmap(Asteroide1);
    ui->Asteroide1->move(mx_asteroide1,my_asteroide1);

}

game::~game()
{
    delete ui;
}

/* ------------------------------------ Gameplay, Apparition, collisions ------------------------------------ */



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
    timer = timer + 1;

    if (timer > 770)
    {
        my_asteroide = -40;
        mx_asteroide = rand() % 700 + 1;
        taille_asteroide = rand() % 50 + 1;

        timer = 0;
    }
}
void game::asteroide1()
{
    /* ---------------Déplacement Astéroide --------------- */

    my_asteroide1 = my_asteroide1 + 1;
    ui->Asteroide1->move(mx_asteroide1,my_asteroide1);
    timer_2 = timer_2 + 1;

    if (timer_2 > 770)
    {
        my_asteroide1 = -40;
        mx_asteroide1 = rand() % 700 + 1;
        taille_asteroide1 = rand() % 50 + 1;
        timer_2 = 0;
    }
}
