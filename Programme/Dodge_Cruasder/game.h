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


private:
    Ui::game *ui;

    int m_x = 340; //position initiale du vaisseau au centre de l'écran sur l'axe des abscisses
    int m_y = 340; //position initiale du vaisseau au centre de l'écran sur l'axe des ordonnées

    int mx_vaisseau = 0; //défini une variable de collision x pour le vaisseau
    int my_vaisseau = 0; //défini une variable de collision y pour le vaisseau

    /* --------------- Astéroide 1 --------------- */

    int mx_asteroide = rand() % 700 + 1; //défini une variable de collision x pour un astéroide
    int my_asteroide = -40; //défini une variable de collision x pour un astéroide
    int taille_asteroide = rand() % 50 + 1; // défini une taille d'astéroide entre 1 et 50

    int timer = 0;

    /* --------------- Astéroide 2 --------------- */

    int mx_asteroide1 = rand() % 700 + 1; //défini une variable de collision x pour un astéroide
    int my_asteroide1 = -50; //défini une variable de collision x pour un astéroide
    int taille_asteroide1 = rand() % 50 + 1; // défini une taille d'astéroide entre 1 et 50

    int timer_2 = 0;

    QTimer *m_timer;

};

#endif // GAME_H
