/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *Hero;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(720, 720);
        Hero = new QLabel(game);
        Hero->setObjectName(QStringLiteral("Hero"));
        Hero->setGeometry(QRect(0, 0, 40, 40));
        Hero->setScaledContents(true);
        pushButton = new QPushButton(game);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(610, 540, 41, 23));
        pushButton_2 = new QPushButton(game);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 610, 41, 23));
        pushButton_3 = new QPushButton(game);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 570, 41, 31));
        pushButton_4 = new QPushButton(game);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(560, 572, 41, 31));

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QDialog *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Dialog", Q_NULLPTR));
        Hero->setText(QString());
        pushButton->setText(QApplication::translate("game", "Up", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("game", "Down", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("game", "Right", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("game", "Left", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
