#include "game.h"
#include "ui_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <iostream>
#include <QApplication>
#include <QTimer>
#include <windows.h>
#include <time.h>
#include "gameover.h"
#include "database.h"
#include <QSqlDatabase>
#include <QtSql>
#include <QString>
#include <QLabel>
#include <QDebug>
#include <conio.h>
#include <QHoverEvent>
#include <QtWidgets>

#define KEY_LEFT 75
#define KEY_X 120

/* ------------------------------------ Jeu ------------------------------------ */

game::game(QWidget *parent) : QDialog(parent), ui(new Ui::game)
{
    /* --------------- Parametrage de la fenetre --------------- */

    this->setFixedSize(QSize(720, 720));

    ui->setupUi(this);

    /* --------------- Affichage Des Images --------------- */

    QPixmap BackGroundGame("Images/BackGroundGame.png");
    ui->BackGroundGame->setPixmap(BackGroundGame);

    QPixmap pix("Images/Hero.png");
    ui->Hero->setPixmap(pix);
    ui->Hero->move(m_x,m_y); //défini la position de base du vaisseau

    QPixmap Asteroide("Images/Asteroid.png");

    ui->Asteroide->setPixmap(Asteroide);
    ui->Asteroide1->setPixmap(Asteroide);
    ui->Asteroide2->setPixmap(Asteroide);

    /* --------------- Codage Des Threads --------------- */

    m_timer = new QTimer(this);
    m_timer->setInterval(timerspeed);

    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide())); //crée l'astéroide et éxecute ses fonctions en parallèle
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide1()));
    connect(m_timer, SIGNAL(timeout()), this, SLOT(asteroide2()));

    connect(m_timer, SIGNAL(timeout()), this, SLOT(Score())); // change le score a chaque initialisation


    m_timer->start(); // démarre les threads

    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);


}

game::~game()
{
    delete ui;
}

/* ------------------------------------ Déplacements Vaisseau ------------------------------------ */

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

        /* ---------------Variables changeant au cours du temps --------------- */

        if(timerspeed < 2.1 ){}
        else if(timerspeed < 3 ){
            timerspeed = timerspeed -0.1;
        }else{
            timerspeed = timerspeed - 0.3; //fonction unique accélérant le jeu au fur et a mesure
        }
        m_timer->setInterval(timerspeed); //fonction unique accélérant le jeu au fur et a mesure

    }

    /* ---------------Collision Astéroide --------------- */

    if( m_y - 50 < my_asteroide && m_y+50 > my_asteroide )
    {

        /* --------------- Codage Des Collisions --------------- */

        if( m_x -50 < mx_asteroide && m_x+50 > mx_asteroide )
        {
            this->close();

            Database();

            gameover goWindow;

            goWindow.setSizeGripEnabled(false);
            goWindow.setModal(true);
            goWindow.exec();
            goWindow.setFixedSize(goWindow.size());
        }
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

    if( m_y - 50 < my_asteroide1 && m_y + 50 > my_asteroide1 )
    {

        /* --------------- Codage Des Collisions --------------- */

        if( m_x - 50 < mx_asteroide1 && m_x + 50 > mx_asteroide1 )
        {

            /* --------------- Codage Win et Score --------------- */
            this->close();

            Database();

            gameover goWindow;

            goWindow.setModal(true);
            goWindow.exec();
            goWindow.setFixedSize(goWindow.size());
            goWindow.setSizeGripEnabled(false);

    }
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

    if( m_y - 50 < my_asteroide2 && m_y + 50 > my_asteroide2 )
    {

        /* --------------- Codage Des Collisions --------------- */

        if( m_x - 50 < mx_asteroide2 && m_x + 50 > mx_asteroide2 )
        {
            this->close();

            Database(); // j'apelle la mise en bdd

            gameover goWindow;

            goWindow.setSizeGripEnabled(false);
            goWindow.setModal(true);
            goWindow.exec();
            goWindow.setFixedSize(goWindow.size());
        }
    }
}

void game::BackGroundGame(){}

int game::Score(){
    score = score + 1;

    std::cout << score << std::endl; // Affichage du score dans l'invite de commande

    std::string stringscore = std::to_string(score); // Conversion du score en string

    QString QStringscore = QString::fromStdString(stringscore); // Conversion du string en Qstring (pour le mettre en texte dans un label)



    ui->lbl_Score->setText("Score : " + QStringscore); // Affichage du score dans le label

    if(score == 13000) // verification si le score est bon
    {
        sw.gagner();        // envoie au serveur que le joueur a gagné
    }

    return score;
}

void game::Database()
{
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); //
        QSqlQuery query;

        char EntreeNom[7] = {0};
        int EntreeScores = 0;

        db.setHostName("127.0.0.1"); // Adresse de la base de données (Ici PhpMyAdmin donc 127.0.0.1)
        db.setDatabaseName("dodgecrusader"); // Nom de la base de données
        db.setUserName("root"); // Nom d'utilisateur pour se connecter a la base de données
        db.setPassword(""); // Mot de passe pour se connecter a la base de données

        if(db.open()) // Si la base de données est ouverte
        {
            std::cout << "Acces a la base de donnees accepte" << std::endl;
            std::cout << "Veuillez choisir un nom" << std::endl;

            std::cin >> EntreeNom; // Choix du nom pour le joueur

            std::cout << "Veuillez choisir un score" << std::endl;

            std::cin >> EntreeScores; // Choix du score (A delete pour plus tard)

            query.prepare("INSERT INTO `scores` (`Nom`, `Total`) VALUES (:Nom, :Total)"); // Commande SQL qui prepare les variables Nom et total dans la base de données
            query.bindValue(":Nom", EntreeNom); // Nom prend la valeur entrée plus haut

            query.bindValue(":Total", score); // Score prend la valeur entrée plus haut
            query.exec(); // Executer la commande SQL


            query.exec("SELECT `Nom` FROM `scores`"); // Execute la commande SQL entre parenthèses
            while (query.next()) // Pendant que la query analyse un nouvelle élément dans la base
            {
                QString Nom = query.value(0).toString(); // Nom = Valeur saisie dans la base
                std::cout << Nom.toStdString() << std::endl; // Affiche Nom
            }

            query.exec("SELECT `Total` FROM `scores`"); // Execute la commande SQL entre parenthèses
            while (query.next()) // Pendant que la query analyse un nouvelle élément dans la base
            {
                int Total = query.value(0).toInt();  // int = Valeur saisie dans la base
                std::cout << Total << std::endl; // Affiche Score
            }
        }
        else
        {
            std::cout << "Impossible d'accéder à la base de données" << std::endl;
        }

}


