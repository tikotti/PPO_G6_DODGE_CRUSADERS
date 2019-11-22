#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>
#include "mainwindow.h"
#include <QWidget>
#include <QShowEvent>
#include <QLabel>

class gameover : public QWidget
{
    Q_OBJECT
public:
    gameover(QWidget *parent = 0);
    ~gameover();
    QLabel label;

protected:
    void showEvent(QShowEvent *event);
};

#endif // GAMEOVER_H
