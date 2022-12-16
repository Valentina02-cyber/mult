/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QDateEdit *dateEdit;

    void setupUi(QWidget *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QStringLiteral("Warning"));
        Warning->setEnabled(true);
        Warning->resize(522, 213);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        Warning->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        Warning->setWindowIcon(icon);
        label = new QLabel(Warning);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(60, 10, 411, 31));
        label->setStyleSheet(QLatin1String("font: 18pt \"MS Shell Dlg 2\";\n"
""));
        label_2 = new QLabel(Warning);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 41, 51));
        label_2->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
""));
        lineEdit = new QLineEdit(Warning);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 261, 31));
        lineEdit->setAutoFillBackground(false);
        lineEdit->setReadOnly(false);
        pushButton_2 = new QPushButton(Warning);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 170, 161, 23));
        label_3 = new QLabel(Warning);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 120, 47, 13));
        dateEdit = new QDateEdit(Warning);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(150, 110, 110, 22));
        dateEdit->setCalendarPopup(true);

        retranslateUi(Warning);

        pushButton_2->setDefault(true);


        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QWidget *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QApplication::translate("Warning", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\262\320\276\321\221 \320\270\320\274\321\217 \320\264\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270!</span></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Warning", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\262\320\276\321\221 \320\270\320\274\321\217 \320\264\320\273\321\217 \320\260\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\320\270!", nullptr));
#ifndef QT_NO_WHATSTHIS
        label_2->setWhatsThis(QApplication::translate("Warning", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("Warning", "\320\230\320\274\321\217:", nullptr));
        pushButton_2->setText(QApplication::translate("Warning", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270 \320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        label_3->setText(QApplication::translate("Warning", "\320\224\320\260\321\202\320\260:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
