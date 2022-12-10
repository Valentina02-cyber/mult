/********************************************************************************
** Form generated from reading UI file 'hint.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HINT_H
#define UI_HINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hint
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *hint)
    {
        if (hint->objectName().isEmpty())
            hint->setObjectName(QStringLiteral("hint"));
        hint->resize(656, 491);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        hint->setWindowIcon(icon);
        pushButton = new QPushButton(hint);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(570, 460, 75, 23));
        label = new QLabel(hint);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(6, 12, 641, 441));
        label->setScaledContents(true);

        retranslateUi(hint);

        QMetaObject::connectSlotsByName(hint);
    } // setupUi

    void retranslateUi(QWidget *hint)
    {
        hint->setWindowTitle(QApplication::translate("hint", "\320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", nullptr));
        pushButton->setText(QApplication::translate("hint", "\320\241\320\277\320\260\321\201\320\270\320\261\320\276", nullptr));
        label->setText(QApplication::translate("hint", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hint: public Ui_hint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HINT_H
