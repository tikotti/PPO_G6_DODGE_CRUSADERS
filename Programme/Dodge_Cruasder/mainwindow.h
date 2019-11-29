#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "QLabel"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QLabel BGpix;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    goToStart();

private slots:
    void on_StartButton_clicked();
    void on_EndButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
