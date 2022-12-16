/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QPushButton *backButton;
    QPushButton *homeButton;
    QPushButton *nextButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName(QStringLiteral("help"));
        help->resize(600, 524);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        help->setWindowIcon(icon);
        backButton = new QPushButton(help);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(50, 0, 141, 31));
        homeButton = new QPushButton(help);
        homeButton->setObjectName(QStringLiteral("homeButton"));
        homeButton->setGeometry(QRect(240, 0, 131, 31));
        nextButton = new QPushButton(help);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(420, 0, 131, 31));
        textBrowser = new QTextBrowser(help);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 30, 601, 491));

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QApplication::translate("help", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        backButton->setText(QApplication::translate("help", "<<", nullptr));
        homeButton->setText(QApplication::translate("help", "Home", nullptr));
        nextButton->setText(QApplication::translate("help", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
