#include "calculator.h"
#include "ui_calculator.h"
#include "exprtk.hpp"
#include <QDebug>

QString toAppend = "";
bool isNegative = false;

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
    connect(ui->equals, SIGNAL(released()), this, SLOT(equalPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::numPressed(){
     QPushButton *button = qobject_cast<QPushButton*>(sender());
     QString buttonVal = button->text().split("&")[1];
     QString displayText = ui->display->text();
     if (displayText == "0.0" || displayText == "0" ){
         ui->display->setText(buttonVal);
         toAppend = toAppend + buttonVal;
         qDebug()<< toAppend;
     }
     else if (isNegative && displayText == "-"){
        ui->display->setText("-" + buttonVal);
        toAppend = toAppend + "-" + buttonVal;
    }
     else{
         QString append = displayText + buttonVal;
         toAppend = toAppend + buttonVal;
         qDebug()<<toAppend;
         ui->display->setText(displayText + buttonVal);
     }

}

void Calculator::mathButtonPressed(){
    ui->display->setText("");
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString buttonVal = button->text();

    if (buttonVal == "+"){
        equ = equ + toAppend + "+";
    }
    else if (buttonVal == "-"){
        equ = equ + toAppend + "-";
    }
    else if (buttonVal == "*"){
        equ = equ + toAppend + "*";
    }
    else if(buttonVal == "/"){
        equ = equ + toAppend + "/";
    }
    else if (buttonVal == "("){
        equ = equ + toAppend + "(";
    }
    else{ //right parenthesis
        equ = equ + toAppend + ")";
    }
    toAppend = "";
    isNegative = false;
    qDebug()<<equ;
}

void Calculator::equalPressed(){
    equ = equ + toAppend;
    qDebug()<<equ;
    std::string stdEqu= equ.toStdString();
    parser.compile(stdEqu, expression);
    double result = expression.value();
    qDebug()<<QString::number(result);
    ui->display->setText(QString::number(result));

}

void Calculator::changeNumberSign(){
    // Get the value in the display
    QString displayVal = ui->display->text();

    // Regular expression checks if it is a number
    // plus sign
    QRegExp reg("[-+]?[0-9.]*");

    // If it is a number change the sign
    if(reg.exactMatch(displayVal)){

        // Put solution in display
         double dblDisplayVal = displayVal.toDouble();
         double dblDisplayValSign = -1 * dblDisplayVal;

         ui->display->setText(QString::number(dblDisplayValSign));
    }
    else if (displayVal == "" || displayVal == "0"){
        ui->display->setText("-");
        isNegative = true;
    }
    else if (displayVal == "-"){
        isNegative = false;
        ui->display->setText("");
    }
}

void Calculator::backButtonPressed(){

}

void Calculator::decimalButtonPressed(){

}

void Calculator::clearButtonPressed(){
    toAppend = "";
}

void Calculator::clearAllButtonPressed(){
    equ = "";
    toAppend = "";
    ui->display->setText("0");
}
