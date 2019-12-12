#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QDialog>
#include "mainwindow.h"


namespace Ui {
class gameover;
}

class gameover : public QDialog
{
    Q_OBJECT

public:
    explicit gameover(QDialog *parent = 0);
    ~gameover();
    void test();
    QLabel label;

protected:
    void showEvent(QShowEvent *event);

private:
    Ui::gameover *ui;
    void on_btn_Quit_clicked();
};

#endif // GAMEOVER_H
