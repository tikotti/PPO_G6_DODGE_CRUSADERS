/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QPushButton *btn_Quit;
    QLabel *lbl_GO_BG;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(480, 396);
        Form->setToolTipDuration(-2);
        Form->setAutoFillBackground(true);
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 90, 61, 21));
        btn_Quit = new QPushButton(Form);
        btn_Quit->setObjectName(QStringLiteral("btn_Quit"));
        btn_Quit->setGeometry(QRect(200, 200, 75, 23));
        lbl_GO_BG = new QLabel(Form);
        lbl_GO_BG->setObjectName(QStringLiteral("lbl_GO_BG"));
        lbl_GO_BG->setEnabled(true);
        lbl_GO_BG->setGeometry(QRect(0, 0, 481, 401));
        lbl_GO_BG->setAutoFillBackground(false);
        lbl_GO_BG->setPixmap(QPixmap(QString::fromUtf8("Images/GO_BG.jpg")));
        lbl_GO_BG->setScaledContents(true);
        lbl_GO_BG->setMargin(0);
        lbl_GO_BG->setIndent(-1);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "Game Over", Q_NULLPTR));
        btn_Quit->setText(QApplication::translate("Form", "Quit", Q_NULLPTR));
        lbl_GO_BG->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
