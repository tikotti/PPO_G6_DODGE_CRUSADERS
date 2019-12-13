#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"
#include "gameover.h"
#include "QLabel"
#include <QSqlDatabase>
#include <QtSql>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap bkgnd("Images/M_BG.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

    QPixmap hero("Images/Hero.png");
    hero = hero.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette hpal;
    hpal.setBrush(QPalette::Background, hero);
    ui->lbl_charactere->setPalette(hpal);
	
	        // -------------------------------------- Connexion a la base de données ----------------------------------------------------- //

        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL"); //
        QSqlQuery query;


        db.setHostName("127.0.0.1"); // Adresse de la base de données (Ici PhpMyAdmin donc 127.0.0.1)
        db.setDatabaseName("dodgecrusader"); // Nom de la base de données
        db.setUserName("root"); // Nom d'utilisateur pour se connecter a la base de données
        db.setPassword(""); // Mot de passe pour se connecter a la base de données

        // -------------------------------------- Connexion a la base de données ----------------------------------------------------- //

        // -------------------------------------- Connexion a la base de données ----------------------------------------------------- //

                query.exec("SELECT `Nom` FROM `scores`"); // Execute la commande SQL entre parenthèses
                while (query.next()) // Pendant que la query analyse un nouvelle élément dans la base
                {
                    QString Nom = query.value(0).toString(); // Nom = Valeur saisie dans la base
                    QStringList List; // Création des données
                    List << Nom;

                    // Création du modèle

                    model = new QStringListModel(this);

                    // Remplissage du model

                    model->setStringList(List);

                   // Glue model and view together
                    ui->lst_score->setModel(model);

                    // Tuto ici : https://www.bogotobogo.com/Qt/Qt5_QListView_QStringListModel_ModelView_MVC.php

                }
	
	
	
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Start_clicked()
{
    game gWindow;
    gWindow.setModal(true);
    gWindow.exec();
    gWindow.setFixedSize(gWindow.size());
    gWindow.setSizeGripEnabled(false);

}

void MainWindow::on_btn_Quit_clicked()
{
    this->close();
}
