/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *add;
    QPushButton *button4;
    QPushButton *button7;
    QPushButton *clearAll;
    QPushButton *rightParen;
    QPushButton *button2;
    QPushButton *clear;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *leftParen;
    QPushButton *button6;
    QPushButton *button1;
    QPushButton *multiply;
    QPushButton *button5;
    QPushButton *divide;
    QPushButton *back;
    QPushButton *button3;
    QPushButton *subtract;
    QPushButton *button0;
    QPushButton *decimal;
    QPushButton *changeSign;
    QPushButton *equals;
    QLineEdit *display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QStringLiteral("Calculator"));
        Calculator->resize(442, 556);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        add->setFont(font);
        add->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(add, 3, 3, 1, 1);

        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setFont(font);
        button4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button4, 3, 0, 1, 1);

        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setFont(font);
        button7->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        clearAll = new QPushButton(centralWidget);
        clearAll->setObjectName(QStringLiteral("clearAll"));
        sizePolicy.setHeightForWidth(clearAll->sizePolicy().hasHeightForWidth());
        clearAll->setSizePolicy(sizePolicy);
        clearAll->setFont(font);
        clearAll->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color:  rgb(255, 55, 58);\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(clearAll, 1, 0, 1, 2);

        rightParen = new QPushButton(centralWidget);
        rightParen->setObjectName(QStringLiteral("rightParen"));
        sizePolicy.setHeightForWidth(rightParen->sizePolicy().hasHeightForWidth());
        rightParen->setSizePolicy(sizePolicy);
        rightParen->setFont(font);
        rightParen->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(rightParen, 2, 4, 1, 1);

        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setFont(font);
        button2->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button2, 4, 1, 1, 1);

        clear = new QPushButton(centralWidget);
        clear->setObjectName(QStringLiteral("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setFont(font);
        clear->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 55, 58);\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(clear, 1, 2, 1, 2);

        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setFont(font);
        button8->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setFont(font);
        button9->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: white;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button9, 2, 2, 1, 1);

        leftParen = new QPushButton(centralWidget);
        leftParen->setObjectName(QStringLiteral("leftParen"));
        sizePolicy.setHeightForWidth(leftParen->sizePolicy().hasHeightForWidth());
        leftParen->setSizePolicy(sizePolicy);
        leftParen->setFont(font);
        leftParen->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(leftParen, 2, 3, 1, 1);

        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setFont(font);
        button6->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button6, 3, 2, 1, 1);

        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setFont(font);
        button1->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button1, 4, 0, 1, 1);

        multiply = new QPushButton(centralWidget);
        multiply->setObjectName(QStringLiteral("multiply"));
        sizePolicy.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy);
        multiply->setFont(font);
        multiply->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(multiply, 4, 3, 1, 1);

        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setFont(font);
        button5->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button5, 3, 1, 1, 1);

        divide = new QPushButton(centralWidget);
        divide->setObjectName(QStringLiteral("divide"));
        sizePolicy.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy);
        divide->setFont(font);
        divide->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(divide, 4, 4, 1, 1);

        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setFont(font);
        back->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 55, 58);\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(back, 1, 4, 1, 1);

        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setFont(font);
        button3->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button3, 4, 2, 1, 1);

        subtract = new QPushButton(centralWidget);
        subtract->setObjectName(QStringLiteral("subtract"));
        sizePolicy.setHeightForWidth(subtract->sizePolicy().hasHeightForWidth());
        subtract->setSizePolicy(sizePolicy);
        subtract->setFont(font);
        subtract->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: orange;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(subtract, 3, 4, 1, 1);

        button0 = new QPushButton(centralWidget);
        button0->setObjectName(QStringLiteral("button0"));
        sizePolicy.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy);
        button0->setFont(font);
        button0->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(button0, 5, 0, 1, 1);

        decimal = new QPushButton(centralWidget);
        decimal->setObjectName(QStringLiteral("decimal"));
        sizePolicy.setHeightForWidth(decimal->sizePolicy().hasHeightForWidth());
        decimal->setSizePolicy(sizePolicy);
        decimal->setFont(font);
        decimal->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(decimal, 5, 1, 1, 1);

        changeSign = new QPushButton(centralWidget);
        changeSign->setObjectName(QStringLiteral("changeSign"));
        sizePolicy.setHeightForWidth(changeSign->sizePolicy().hasHeightForWidth());
        changeSign->setSizePolicy(sizePolicy);
        changeSign->setFont(font);
        changeSign->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: white;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(changeSign, 5, 2, 1, 1);

        equals = new QPushButton(centralWidget);
        equals->setObjectName(QStringLiteral("equals"));
        sizePolicy.setHeightForWidth(equals->sizePolicy().hasHeightForWidth());
        equals->setSizePolicy(sizePolicy);
        equals->setFont(font);
        equals->setStyleSheet(QLatin1String("QPushButton{\n"
"	background-color: rgb(255, 55, 58);\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: black;\n"
"	color: white;\n"
"}"));

        gridLayout->addWidget(equals, 5, 3, 1, 2);

        display = new QLineEdit(centralWidget);
        display->setObjectName(QStringLiteral("display"));
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(26);
        font1.setBold(false);
        font1.setWeight(50);
        display->setFont(font1);
        display->setCursor(QCursor(Qt::CrossCursor));
        display->setStyleSheet(QLatin1String("QLineEdit{\n"
"	background-color: white;\n"
"	color: black;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 442, 23));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        add->setText(QApplication::translate("Calculator", "+", nullptr));
        button4->setText(QApplication::translate("Calculator", "4", nullptr));
        button7->setText(QApplication::translate("Calculator", "7", nullptr));
        clearAll->setText(QApplication::translate("Calculator", "AC", nullptr));
        rightParen->setText(QApplication::translate("Calculator", ")", nullptr));
        button2->setText(QApplication::translate("Calculator", "2", nullptr));
        clear->setText(QApplication::translate("Calculator", "C", nullptr));
        button8->setText(QApplication::translate("Calculator", "8", nullptr));
        button9->setText(QApplication::translate("Calculator", "9", nullptr));
        leftParen->setText(QApplication::translate("Calculator", "(", nullptr));
        button6->setText(QApplication::translate("Calculator", "6", nullptr));
        button1->setText(QApplication::translate("Calculator", "1", nullptr));
        multiply->setText(QApplication::translate("Calculator", "*", nullptr));
        button5->setText(QApplication::translate("Calculator", "5", nullptr));
        divide->setText(QApplication::translate("Calculator", "/", nullptr));
        back->setText(QApplication::translate("Calculator", "Back", nullptr));
        button3->setText(QApplication::translate("Calculator", "3", nullptr));
        subtract->setText(QApplication::translate("Calculator", "-", nullptr));
        button0->setText(QApplication::translate("Calculator", "0", nullptr));
        decimal->setText(QApplication::translate("Calculator", ".", nullptr));
        changeSign->setText(QApplication::translate("Calculator", "+/-", nullptr));
        equals->setText(QApplication::translate("Calculator", "=", nullptr));
        display->setText(QApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
