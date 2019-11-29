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

private:
    Ui::game *ui;

    int m_x = 340; //position initiale du vaisseau au centre de l'écran sur l'axe des abscisses
    int m_y = 340; //position initiale du vaisseau au centre de l'écran sur l'axe des ordonnées

    int i = 0;

    int mx_vaisseau = 0; //défini une variable de collision x pour le vaisseau
    int my_vaisseau = 0; //défini une variable de collision y pour le vaisseau

    int mx_asteroide = 0; //défini une variable de collision x pour un astéroide
    int my_asteroide = -50; //défini une variable de collision x pour un astéroide

    int taille_asteroide; // défini une taille d'astéroide entre 1 et 50

    QTimer *m_timer;

};

#endif // GAME_H
