#include "mainwindow.h"
#include "send_win.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Send_Win sw;

    //std::cout << "commande_message_passe" << std::endl;

    MainWindow w;
    w.show();

    return a.exec();
}
