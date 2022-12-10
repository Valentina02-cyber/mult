/********************************************************************************
** Form generated from reading UI file 'exercise.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISE_H
#define UI_EXERCISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exercise
{
public:
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;

    void setupUi(QWidget *Exercise)
    {
        if (Exercise->objectName().isEmpty())
            Exercise->setObjectName(QStringLiteral("Exercise"));
        Exercise->resize(600, 500);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/vector-cancel-icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Exercise->setWindowIcon(icon);
        textEdit = new QTextEdit(Exercise);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(430, 230, 121, 91));
        textEdit->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(Exercise);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 430, 75, 23));
        lineEdit = new QLineEdit(Exercise);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 230, 71, 91));
        lineEdit->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        label = new QLabel(Exercise);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 180, 31, 121));
        label->setStyleSheet(QStringLiteral("font: 72pt \"MS Shell Dlg 2\";"));
        lineEdit_2 = new QLineEdit(Exercise);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 230, 71, 91));
        lineEdit_2->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(Exercise);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 240, 51, 61));
        label_2->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));

        retranslateUi(Exercise);

        QMetaObject::connectSlotsByName(Exercise);
    } // setupUi

    void retranslateUi(QWidget *Exercise)
    {
        Exercise->setWindowTitle(QApplication::translate("Exercise", "\320\242\321\200\320\265\320\275\320\260\320\266\320\265\321\200 \320\277\320\276 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \321\203\320\274\320\275\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        pushButton->setText(QApplication::translate("Exercise", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260", nullptr));
        label->setText(QApplication::translate("Exercise", ".", nullptr));
        label_2->setText(QApplication::translate("Exercise", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exercise: public Ui_Exercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISE_H
