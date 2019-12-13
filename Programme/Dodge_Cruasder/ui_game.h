/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *Hero;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *Asteroide;
    QLabel *Asteroide1;
    QLabel *Asteroide2;
    QLabel *BackGroundGame;
    QLabel *lbl_Score;

    void setupUi(QDialog *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QString::fromUtf8("game"));
        game->resize(720, 720);
        Hero = new QLabel(game);
        Hero->setObjectName(QString::fromUtf8("Hero"));
        Hero->setGeometry(QRect(0, 0, 61, 61));
        Hero->setScaledContents(true);
        pushButton_3 = new QPushButton(game);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(660, 680, 51, 31));
        pushButton_4 = new QPushButton(game);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(10, 680, 61, 31));
        Asteroide = new QLabel(game);
        Asteroide->setObjectName(QString::fromUtf8("Asteroide"));
        Asteroide->setGeometry(QRect(30, 30, 81, 81));
        Asteroide->setScaledContents(true);
        Asteroide1 = new QLabel(game);
        Asteroide1->setObjectName(QString::fromUtf8("Asteroide1"));
        Asteroide1->setGeometry(QRect(280, 30, 81, 81));
        Asteroide1->setScaledContents(true);
        Asteroide2 = new QLabel(game);
        Asteroide2->setObjectName(QString::fromUtf8("Asteroide2"));
        Asteroide2->setGeometry(QRect(520, 20, 81, 81));
        Asteroide2->setScaledContents(true);
        BackGroundGame = new QLabel(game);
        BackGroundGame->setObjectName(QString::fromUtf8("BackGroundGame"));
        BackGroundGame->setGeometry(QRect(0, 0, 721, 721));
        BackGroundGame->setScaledContents(true);
        lbl_Score = new QLabel(game);
        lbl_Score->setObjectName(QString::fromUtf8("lbl_Score"));
        lbl_Score->setGeometry(QRect(260, 30, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        font.setPointSize(20);
        font.setUnderline(true);
        lbl_Score->setFont(font);
        BackGroundGame->raise();
        Asteroide2->raise();
        Asteroide1->raise();
        Asteroide->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        Hero->raise();
        lbl_Score->raise();

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QDialog *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Dialog", nullptr));
        Hero->setText(QString());
        pushButton_3->setText(QApplication::translate("game", "Right", nullptr));
        pushButton_4->setText(QApplication::translate("game", "Left", nullptr));
        Asteroide->setText(QString());
        Asteroide1->setText(QString());
        Asteroide2->setText(QString());
        BackGroundGame->setText(QString());
        lbl_Score->setText(QApplication::translate("game", "Score :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
