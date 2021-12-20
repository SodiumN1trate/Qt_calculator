/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *button_2;
    QPushButton *button_0;
    QPushButton *button_7;
    QPushButton *button_1;
    QPushButton *buttonEqual;
    QPushButton *button_5;
    QPushButton *buttonPlus;
    QPushButton *buttonDivide;
    QPushButton *button_9;
    QPushButton *button_8;
    QPushButton *buttonClearEntry;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *button_3;
    QPushButton *buttonMultiply;
    QPushButton *buttonMinus;
    QLabel *label;
    QPushButton *buttonClear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(322, 404);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #2B2A33;\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_2, 3, 1, 1, 1);

        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_0, 5, 1, 1, 1);

        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_7, 1, 0, 1, 1);

        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_1, 3, 0, 1, 1);

        buttonEqual = new QPushButton(centralwidget);
        buttonEqual->setObjectName(QString::fromUtf8("buttonEqual"));
        sizePolicy.setHeightForWidth(buttonEqual->sizePolicy().hasHeightForWidth());
        buttonEqual->setSizePolicy(sizePolicy);
        buttonEqual->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonEqual, 5, 3, 1, 1);

        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_5, 2, 1, 1, 1);

        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName(QString::fromUtf8("buttonPlus"));
        sizePolicy.setHeightForWidth(buttonPlus->sizePolicy().hasHeightForWidth());
        buttonPlus->setSizePolicy(sizePolicy);
        buttonPlus->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonPlus, 5, 2, 1, 1);

        buttonDivide = new QPushButton(centralwidget);
        buttonDivide->setObjectName(QString::fromUtf8("buttonDivide"));
        sizePolicy.setHeightForWidth(buttonDivide->sizePolicy().hasHeightForWidth());
        buttonDivide->setSizePolicy(sizePolicy);
        buttonDivide->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonDivide, 1, 3, 1, 1);

        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_9, 1, 2, 1, 1);

        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_8, 1, 1, 1, 1);

        buttonClearEntry = new QPushButton(centralwidget);
        buttonClearEntry->setObjectName(QString::fromUtf8("buttonClearEntry"));
        sizePolicy.setHeightForWidth(buttonClearEntry->sizePolicy().hasHeightForWidth());
        buttonClearEntry->setSizePolicy(sizePolicy);
        buttonClearEntry->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonClearEntry, 5, 0, 1, 1);

        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_4, 2, 0, 1, 1);

        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_6, 2, 2, 1, 1);

        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #676767;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(button_3, 3, 2, 1, 1);

        buttonMultiply = new QPushButton(centralwidget);
        buttonMultiply->setObjectName(QString::fromUtf8("buttonMultiply"));
        sizePolicy.setHeightForWidth(buttonMultiply->sizePolicy().hasHeightForWidth());
        buttonMultiply->setSizePolicy(sizePolicy);
        buttonMultiply->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonMultiply, 2, 3, 1, 1);

        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName(QString::fromUtf8("buttonMinus"));
        sizePolicy.setHeightForWidth(buttonMinus->sizePolicy().hasHeightForWidth());
        buttonMinus->setSizePolicy(sizePolicy);
        buttonMinus->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonMinus, 3, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 50));
        label->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #5B5B5B;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 20px;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 3);

        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        sizePolicy.setHeightForWidth(buttonClear->sizePolicy().hasHeightForWidth());
        buttonClear->setSizePolicy(sizePolicy);
        buttonClear->setMinimumSize(QSize(0, 10));
        buttonClear->setStyleSheet(QString::fromUtf8("border:  1px solid gray;\n"
"background-color:  #F07427;\n"
"color:  white;\n"
"border-radius: 10px;\n"
"font-size: 17px;"));

        gridLayout->addWidget(buttonClear, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 322, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        buttonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        buttonClearEntry->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label->setText(QString());
        buttonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
