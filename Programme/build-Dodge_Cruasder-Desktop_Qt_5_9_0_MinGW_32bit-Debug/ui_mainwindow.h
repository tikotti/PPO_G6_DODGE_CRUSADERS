/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *Name_2;
    QListView *listView;
    QLabel *Background;
    QLabel *label;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer;
    QLabel *Name;
    QVBoxLayout *DifficultyLayout;
    QRadioButton *Easy_radioButton;
    QRadioButton *Medium_radioButton;
    QRadioButton *Hard_radioButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *CloseButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(720, 720);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(360, 10, 351, 421));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Name_2 = new QLabel(verticalLayoutWidget_2);
        Name_2->setObjectName(QStringLiteral("Name_2"));

        verticalLayout_2->addWidget(Name_2);

        listView = new QListView(verticalLayoutWidget_2);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_2->addWidget(listView);

        Background = new QLabel(centralWidget);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(0, 0, 731, 701));
        Background->setPixmap(QPixmap(QString::fromUtf8("Images/Art-pictures-red-space-stars_1920x1080.jpg")));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 350, 250, 250));
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 10, 341, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        StartButton = new QPushButton(verticalLayoutWidget_3);
        StartButton->setObjectName(QStringLiteral("StartButton"));

        verticalLayout->addWidget(StartButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        Name = new QLabel(verticalLayoutWidget_3);
        Name->setObjectName(QStringLiteral("Name"));

        verticalLayout->addWidget(Name);

        DifficultyLayout = new QVBoxLayout();
        DifficultyLayout->setSpacing(6);
        DifficultyLayout->setObjectName(QStringLiteral("DifficultyLayout"));
        Easy_radioButton = new QRadioButton(verticalLayoutWidget_3);
        Easy_radioButton->setObjectName(QStringLiteral("Easy_radioButton"));

        DifficultyLayout->addWidget(Easy_radioButton);

        Medium_radioButton = new QRadioButton(verticalLayoutWidget_3);
        Medium_radioButton->setObjectName(QStringLiteral("Medium_radioButton"));
        Medium_radioButton->setEnabled(true);

        DifficultyLayout->addWidget(Medium_radioButton);

        Hard_radioButton = new QRadioButton(verticalLayoutWidget_3);
        Hard_radioButton->setObjectName(QStringLiteral("Hard_radioButton"));

        DifficultyLayout->addWidget(Hard_radioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DifficultyLayout->addItem(horizontalSpacer_2);

        CloseButton = new QPushButton(verticalLayoutWidget_3);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        DifficultyLayout->addWidget(CloseButton);


        verticalLayout->addLayout(DifficultyLayout);

        MainWindow->setCentralWidget(centralWidget);
        Background->raise();
        verticalLayoutWidget_2->raise();
        label->raise();
        verticalLayoutWidget_3->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Dodge Crusader", Q_NULLPTR));
        Name_2->setText(QApplication::translate("MainWindow", "Score Board", Q_NULLPTR));
        Background->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Character Overview", Q_NULLPTR));
        StartButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        Name->setText(QApplication::translate("MainWindow", "Choose difficulty", Q_NULLPTR));
        Easy_radioButton->setText(QApplication::translate("MainWindow", "Easy", Q_NULLPTR));
        Medium_radioButton->setText(QApplication::translate("MainWindow", "Medium", Q_NULLPTR));
        Hard_radioButton->setText(QApplication::translate("MainWindow", "Hard", Q_NULLPTR));
        CloseButton->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
