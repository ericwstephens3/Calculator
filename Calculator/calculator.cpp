#include "calculator.h"
#include "ui_calculator.h"
#include "exprtk.hpp"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    QPushButton *buttons[10];
    for (int i = 0; i < 10; i++){
        QString buttonName = "button"+ QString::number(i);
        buttons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(buttons[i], SIGNAL(released()), this, SLOT(numPressed()));
    }

    connect(ui->back, SIGNAL(released()), this, SLOT(backButtonPressed()));
    connect(ui->changeSign, SIGNAL(released()), this, SLOT(changeNumberSign()));
    connect(ui->clear, SIGNAL(released()), this, SLOT(clearButtonPressed()));
    connect(ui->clearAll, SIGNAL(released()), this, SLOT(clearAllButtonPressed()));
    connect(ui->leftParen, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->rightParen, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->add, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->subtract, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->multiply, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->divide, SIGNAL(released()), this, SLOT(mathButtonPressed()));
    connect(ui->decimal, SIGNAL(released()), this, SLOT(decimalButtonPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::numPressed(){

}

void Calculator::mathButtonPressed(){

}

void Calculator::equalPressed(){

}

void Calculator::changeNumberSign(){

}

void Calculator::backButtonPressed(){

}

void Calculator::decimalButtonPressed(){

}

void Calculator::clearButtonPressed(){

}

void Calculator::clearAllButtonPressed(){

}
