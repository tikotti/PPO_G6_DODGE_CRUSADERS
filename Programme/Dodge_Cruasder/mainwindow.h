#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game.h"
#include "QLabel"
#include <QStringListModel>


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
    void goToStart();

private slots:
    void on_btn_Start_clicked();
    void on_btn_Quit_clicked();

private:
    Ui::MainWindow *ui;
    QStringListModel *model;
};

#endif // MAINWINDOW_H
