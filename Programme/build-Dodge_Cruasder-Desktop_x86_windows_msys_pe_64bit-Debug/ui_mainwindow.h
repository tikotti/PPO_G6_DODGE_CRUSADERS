/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_score;
    QListView *lst_score;
    QLabel *lbl_charactere;
    QLabel *label_2;
    QPushButton *btn_Start;
    QPushButton *btn_Quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 720);
        MainWindow->setCursor(QCursor(Qt::CrossCursor));
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 480, 701, 221));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_score = new QLabel(verticalLayoutWidget_2);
        lbl_score->setObjectName(QString::fromUtf8("lbl_score"));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lbl_score->setFont(font);
        lbl_score->setFocusPolicy(Qt::StrongFocus);
        lbl_score->setAutoFillBackground(true);
        lbl_score->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_score);

        lst_score = new QListView(verticalLayoutWidget_2);
        lst_score->setObjectName(QString::fromUtf8("lst_score"));

        verticalLayout_2->addWidget(lst_score);

        lbl_charactere = new QLabel(centralWidget);
        lbl_charactere->setObjectName(QString::fromUtf8("lbl_charactere"));
        lbl_charactere->setEnabled(true);
        lbl_charactere->setGeometry(QRect(490, 60, 171, 281));
        lbl_charactere->setPixmap(QPixmap(QString::fromUtf8("Images/Hero.png")));
        lbl_charactere->setScaledContents(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 2, 720, 720));
        label_2->setPixmap(QPixmap(QString::fromUtf8("Images/M_BG.jpg")));
        label_2->setScaledContents(true);
        label_2->setMargin(0);
        label_2->setIndent(-1);
        btn_Start = new QPushButton(centralWidget);
        btn_Start->setObjectName(QString::fromUtf8("btn_Start"));
        btn_Start->setGeometry(QRect(100, 100, 171, 41));
        btn_Start->setFont(font);
        btn_Start->setAutoDefault(true);
        btn_Quit = new QPushButton(centralWidget);
        btn_Quit->setObjectName(QString::fromUtf8("btn_Quit"));
        btn_Quit->setGeometry(QRect(120, 230, 131, 41));
        btn_Quit->setFont(font);
        btn_Quit->setAutoDefault(true);
        MainWindow->setCentralWidget(centralWidget);
        label_2->raise();
        verticalLayoutWidget_2->raise();
        lbl_charactere->raise();
        btn_Start->raise();
        btn_Quit->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dodge Crusader", nullptr));
        lbl_score->setText(QCoreApplication::translate("MainWindow", "Tableau des scores", nullptr));
        lbl_charactere->setText(QString());
        label_2->setText(QString());
        btn_Start->setText(QCoreApplication::translate("MainWindow", "Commencer", nullptr));
        btn_Quit->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
