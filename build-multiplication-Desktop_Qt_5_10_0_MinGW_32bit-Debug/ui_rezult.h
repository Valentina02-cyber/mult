/********************************************************************************
** Form generated from reading UI file 'rezult.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REZULT_H
#define UI_REZULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rezult
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QWidget *rezult)
    {
        if (rezult->objectName().isEmpty())
            rezult->setObjectName(QStringLiteral("rezult"));
        rezult->resize(640, 500);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        rezult->setWindowIcon(icon);
        gridLayout = new QGridLayout(rezult);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableView = new QTableView(rezult);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEnabled(true);

        gridLayout->addWidget(tableView, 0, 0, 1, 2);

        pushButton_3 = new QPushButton(rezult);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton = new QPushButton(rezult);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);


        retranslateUi(rezult);

        QMetaObject::connectSlotsByName(rezult);
    } // setupUi

    void retranslateUi(QWidget *rezult)
    {
        rezult->setWindowTitle(QApplication::translate("rezult", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\276\320\262", nullptr));
        pushButton_3->setText(QApplication::translate("rezult", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\221\320\224", nullptr));
        pushButton->setText(QApplication::translate("rezult", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rezult: public Ui_rezult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REZULT_H
