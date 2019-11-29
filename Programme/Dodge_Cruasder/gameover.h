#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>
#include "mainwindow.h"
#include <QWidget>
#include <QShowEvent>
#include <QLabel>

namespace Ui {
class gameover;
}

class gameover : public QWidget
{
    Q_OBJECT

public:
    explicit gameover(QWidget *parent = 0);
    ~gameover();
    QLabel label;

protected:
    void showEvent(QShowEvent *event);

private:
    Ui::gameover *ui;
};

#endif // GAMEOVER_H
