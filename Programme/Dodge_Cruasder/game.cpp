#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <unistd.h> // pour les sleeps en micro secondes
#include <iostream>

/* ------------------------------------ Jeu ------------------------------------ */


game::game(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    QPixmap pix(QApplication::applicationDirPath() + "/Images/Hero.png");
    ui->Hero->setPixmap(pix);
    ui->Hero->move(m_x,m_y);
}




game::~game()
{
    delete ui;
}

/* ------------------------------------ Gameplay, Apparition ------------------------------------ */



/* ------------------------------------ Déplacements Vaisseau ------------------------------------ */

void game::on_pushButton_clicked() //haut
{
        m_y = m_y - 100;
        ui->Hero->move(m_x,m_y);
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

    if( 20 < m_x < 300 )
    {
        m_x = m_x + 10;
        ui->Hero->move(m_x,m_y);
    }else{
        m_x = m_x;
    }

}

void game::on_pushButton_4_clicked() //gauche
{
    m_x = m_x - 10;
    ui->Hero->move(m_x,m_y);
}

/* ------------------------------------ Déplacements Astéroide ------------------------------------ */

void game::asteroide()
{
    int sensrotation_asteroide = rand() % 1 + 1; // variable entre 1 et 2 pour définir dans quel sens l'asteroide tournera

    if (sensrotation_asteroide = 1)
    {
        /* --------------- Rotation Astéroide --------------- */

        for(int i = 0 ; i < 700 ; i++) // tant que l'astéroide est encore sur l'écran
        {
            rotation_asteroide = rotation_asteroide++ ; // la fait tourne d'un degré
            usleep(10); // attente pendant 10 microsecondes
        }

        /* ---------------Déplacement Astéroide --------------- */

        int provenance_asteroide = rand() % 4 + 1; // variable entre 1 et 4 définissant l'arrivée de l'asteroide

        if(provenance_asteroide = 1) // venant du haut
        {
            mx_asteroide = rand() % 720 + 1; //initialise la valeur de la position de l'asteroide
            my_asteroide = -50; //initialise la valeur de la position de l'asteroide

            for(int u = 0 ; u < 770 ; u++)
            {
                my_asteroide = my_asteroide++; //fais déplacer l'asteroide
            }
        }

        if(provenance_asteroide = 1) // venant du bas
        {
            mx_asteroide = rand() % 720 + 1; //initialise la valeur de la position de l'asteroide
            my_asteroide = 770; //initialise la valeur de la position de l'asteroide

            for(int u = 0 ; u < 770 ; u++)
            {
                my_asteroide = my_asteroide--; //fais déplacer l'asteroide
            }
        }

        if(provenance_asteroide = 1) // venant de la gauche
        {
            mx_asteroide = -50 ; //initialise la valeur de la position de l'asteroide
            my_asteroide = rand() % 720 + 1; //initialise la valeur de la position de l'asteroide

            for(int u = 0 ; u < 770 ; u++)
            {
                mx_asteroide = mx_asteroide++; //fais déplacer l'asteroide
            }
        }

        if(provenance_asteroide = 1) // venant de la droite
        {
            mx_asteroide = 770 ; //initialise la valeur de la position de l'asteroide
            my_asteroide = rand() % 720 + 1; //initialise la valeur de la position de l'asteroide

            for(int u = 0 ; u < 770 ; u++)
            {
                mx_asteroide = mx_asteroide--; //fais déplacer l'asteroide
            }
        }

        /* ---------------Déplacement Astéroide --------------- */


    }
}

