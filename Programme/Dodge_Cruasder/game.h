#ifndef GAME_H
#define GAME_H

#include <QDialog>
#include "mainwindow.h"

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

private:
    Ui::game *ui;

    int m_x = 340; //position initaile du vaisseau au centre de l'écran sur l'axe des abscisses
    int m_y = 340; //position initaile du vaisseau au centre de l'écran sur l'axe des ordonnées
};

#endif // GAME_H
