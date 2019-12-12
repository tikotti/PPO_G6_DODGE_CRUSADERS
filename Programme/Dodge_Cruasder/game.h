#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "mainwindow.h"
#include <QTimer>

namespace Ui {
class game;
}

class game : public QDialog
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);

    ~game();

private slots:

    void on_pushButton_clicked();
    
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void asteroide();

    void asteroide1();

    void asteroide2();

    void BackGroundGame();

    int Score();

private:
    Ui::game *ui;

    /* --------------- Vaisseau --------------- */

    int m_x = 320; //position initiale du vaisseau au centre de l'écran sur l'axe des abscisses
    int m_y = 600; //position initiale du vaisseau au centre de l'écran sur l'axe des ordonnées

    int mx_vaisseau = 0; //défini une variable de collision x pour le vaisseau
    int my_vaisseau = 0; //défini une variable de collision y pour le vaisseau

    /* --------------- Astéroide 1 --------------- */

    int mx_asteroide = rand() % 700 + 1; //défini une variable de collision x pour un astéroide
    int my_asteroide = -40; //défini une variable de collision x pour un astéroide

    /* --------------- Astéroide 2 --------------- */

    int mx_asteroide1 = rand() % 700 + 1; //défini une variable de collision x pour un astéroide
    int my_asteroide1 = -240; //défini une variable de collision x pour un astéroide

    /* --------------- Astéroide 3 --------------- */

    int mx_asteroide2= rand() % 700 + 1; //défini une variable de collision x pour un astéroide
    int my_asteroide2 = -440; //défini une variable de collision x pour un astéroide

    /* --------------- Déclaration du Qtimer, vitesse des astéroides et score --------------- */

    QTimer *m_timer;

    int score = 0;

    double timerspeed = 8; //Défini la vitesse de base d'éxécution du thread
};

#endif // GAME_H
