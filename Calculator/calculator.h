#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include "exprtk.hpp"

typedef exprtk::symbol_table<double> symbol_table_t;
typedef exprtk::expression<double>     expression_t;
typedef exprtk::parser<double> parser_t;

/*
 * exprtTK example
 * typedef exprtk::symbol_table<double> symbol_table_t;
   typedef exprtk::expression<double>     expression_t;
   typedef exprtk::parser<double>             parser_t;

   symbol_table_t symbol_table;
   expression_t   expression;
   parser_t       parser;

   double x = 0;
   double y = 0;

   std::string expression_string = "x * y + 3";
   symbol_table.add_variable("x",x);
   symbol_table.add_variable("y",y);

   expression.register_symbol_table(symbol_table);

   parser.compile(expression_string,expression);

   x = 1.0;
   y = 2.0;
    expression.value(); // 1 * 2 + 3
 */

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;
    symbol_table_t symbolTable;
    expression_t expression;
    parser_t parser;

private slots:
    void numPressed();
    void mathButtonPressed();
    void equalPressed();
    void changeNumberSign();
    void backButtonPressed();
    void clearButtonPressed();
    void clearAllButtonPressed();
    void decimalButtonPressed();
};

#endif // CALCULATOR_H
