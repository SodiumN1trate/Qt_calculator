#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include <QLabel>

double first_number;

using namespace std;

string textInput = "";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{  
    ui->setupUi(this);
    connect(ui->button_0, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_1, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_2, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_3, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_4, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_5, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_6, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_7, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_8, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->button_9, SIGNAL(clicked()), this, SLOT(on_button_clicked()));
    connect(ui->buttonPlus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->buttonMinus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->buttonMultiply, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->buttonDivide, SIGNAL(clicked()), this, SLOT(operations()));
    ui->buttonPlus->setCheckable(true);
    ui->buttonMinus->setCheckable(true);
    ui->buttonMultiply->setCheckable(true);
    ui->buttonDivide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_clicked()
{
    QPushButton *button = (QPushButton *)sender();
    double text_field;
    text_field = (ui->label->text() + button->text()).toDouble();
    ui->label->setText(QString::number(text_field, 'g', 15));
}

void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();
    first_number = ui->label->text().toDouble();
    ui->label->clear();
    button->setChecked(true);
}

void MainWindow::on_buttonEqual_clicked()
{
    double second_number = ui->label->text().toDouble();
    double result;
    if(ui->buttonPlus->isChecked()){
        result = first_number + second_number;
        ui->label->setText(QString::number(result, 'g', 20));
        ui->buttonPlus->setChecked(false);

    } else if(ui->buttonMinus->isChecked()){
        result = first_number - second_number;
        ui->label->setText(QString::number(result, 'g', 20));
        ui->buttonMinus->setChecked(false);

    } else if(ui->buttonMultiply->isChecked()){
        result = first_number * second_number;
        ui->label->setText(QString::number(result, 'g', 20));
        ui->buttonMultiply->setChecked(false);

    } else if(ui->buttonDivide->isChecked()){
        if(second_number == 0){
            ui->label->setText("Error");
            ui->buttonDivide->setChecked(false);
        }
        else{
            result = first_number / second_number;
            ui->label->setText(QString::number(result, 'g', 20));
            ui->buttonDivide->setChecked(false);
        }
    }

}


void MainWindow::on_buttonClear_clicked()
{
     ui->label->clear();
     first_number = 0;
}


void MainWindow::on_buttonClearEntry_clicked()
{
    ui->label->setText(ui->label->text().mid(0, ui->label->text().length()-1));
}

