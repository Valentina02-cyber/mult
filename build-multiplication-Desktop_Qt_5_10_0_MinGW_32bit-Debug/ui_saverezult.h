/********************************************************************************
** Form generated from reading UI file 'saverezult.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEREZULT_H
#define UI_SAVEREZULT_H

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

class Ui_saverezult
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_4;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QWidget *saverezult)
    {
        if (saverezult->objectName().isEmpty())
            saverezult->setObjectName(QStringLiteral("saverezult"));
        saverezult->setEnabled(true);
        saverezult->resize(350, 272);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        saverezult->setWindowIcon(icon);
        pushButton = new QPushButton(saverezult);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 94, 23));
        pushButton->setAutoDefault(false);
        pushButton_2 = new QPushButton(saverezult);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 240, 94, 23));
        textEdit = new QTextEdit(saverezult);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(170, 60, 161, 41));
        textEdit->setAcceptDrops(false);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setStyleSheet(QStringLiteral("font: 18pt \"MS Shell Dlg 2\";"));
        textEdit_2 = new QTextEdit(saverezult);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(170, 110, 161, 41));
        textEdit_2->setAcceptDrops(false);
        textEdit_2->setStyleSheet(QStringLiteral("font: 18pt \"MS Shell Dlg 2\";"));
        label = new QLabel(saverezult);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(166, 20, 171, 31));
        label->setAcceptDrops(true);
        label->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"font: 16pt \"MS Shell Dlg 2\";"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(saverezult);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 151, 41));
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        textEdit_4 = new QTextEdit(saverezult);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(170, 160, 161, 41));
        textEdit_4->setAcceptDrops(false);
        textEdit_4->setStyleSheet(QStringLiteral("font: 18pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(saverezult);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 151, 41));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(saverezult);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 151, 41));
        label_4->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit = new QLineEdit(saverezult);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(12, 9, 151, 41));
        lineEdit->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit->setAlignment(Qt::AlignCenter);

        retranslateUi(saverezult);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(saverezult);
    } // setupUi

    void retranslateUi(QWidget *saverezult)
    {
        saverezult->setWindowTitle(QApplication::translate("saverezult", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        pushButton->setText(QApplication::translate("saverezult", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("saverezult", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260\320\267\320\260\320\264", nullptr));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("saverezult", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textEdit_2->setToolTip(QApplication::translate("saverezult", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("saverezult", ", \320\262\320\260\321\210 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202!", nullptr));
        label_2->setText(QApplication::translate("saverezult", "\320\222\321\201\320\265\320\263\320\276 \320\277\321\200\320\270\320\274\320\265\321\200\320\276\320\262 \321\200\320\265\321\210\320\265\320\275\320\276", nullptr));
#ifndef QT_NO_TOOLTIP
        textEdit_4->setToolTip(QApplication::translate("saverezult", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("saverezult", "\320\237\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
        label_4->setText(QApplication::translate("saverezult", "\320\235\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saverezult: public Ui_saverezult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEREZULT_H
