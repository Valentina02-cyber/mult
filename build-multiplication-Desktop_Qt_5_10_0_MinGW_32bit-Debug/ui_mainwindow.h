/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action;
    QAction *action_3;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_1;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 500);
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/png-clipart-check-mark-computer-icons-blue-check-mark-blue-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(450, 280, 113, 91));
        lineEdit->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 280, 80, 91));
        lineEdit_2->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 280, 80, 91));
        lineEdit_3->setStyleSheet(QStringLiteral("font: 48pt \"MS Shell Dlg 2\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 260, 41, 81));
        label->setStyleSheet(QStringLiteral("font: 72pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 290, 71, 61));
        label_2->setStyleSheet(QStringLiteral("font: 72pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 410, 75, 23));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setGeometry(QRect(100, 120, 431, 71));
        textEdit->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setEnabled(false);
        textEdit_2->setGeometry(QRect(20, 70, 81, 41));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setEnabled(false);
        textEdit_3->setGeometry(QRect(100, 70, 41, 41));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 40, 91, 17));
        radioButton_3->setMouseTracking(true);
        radioButton_3->setCheckable(true);
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        radioButton_2->setGeometry(QRect(20, 20, 91, 17));
        radioButton_2->setCheckable(true);
        radioButton_1 = new QRadioButton(centralWidget);
        radioButton_1->setObjectName(QStringLiteral("radioButton_1"));
        radioButton_1->setGeometry(QRect(20, 0, 131, 17));
        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setEnabled(false);
        textEdit_4->setGeometry(QRect(170, 70, 81, 41));
        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setEnabled(false);
        textEdit_5->setGeometry(QRect(250, 70, 41, 41));
        textEdit_6 = new QTextEdit(centralWidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setEnabled(false);
        textEdit_6->setGeometry(QRect(320, 70, 81, 41));
        textEdit_7 = new QTextEdit(centralWidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setEnabled(false);
        textEdit_7->setGeometry(QRect(400, 70, 41, 41));
        textEdit_8 = new QTextEdit(centralWidget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setEnabled(false);
        textEdit_8->setGeometry(QRect(100, 190, 431, 41));
        textEdit_8->setStyleSheet(QStringLiteral("font: 16pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 410, 75, 23));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 40, 69, 22));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_3);
        menu_2->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\260\320\266\320\265\321\200 \320\277\320\276 \321\202\320\260\320\261\320\273\320\270\321\206\320\265 \321\203\320\274\320\275\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        action_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\277\320\276\320\264\321\201\320\272\320\260\320\267\320\272\321\203", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", nullptr));
#ifndef QT_NO_WHATSTHIS
        lineEdit_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        lineEdit_3->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("MainWindow", ".", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\224\320\236", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\235\320\220", nullptr));
        radioButton_1->setText(QApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\321\213\320\265 \320\277\321\200\320\270\320\274\320\265\321\200\321\213", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "4", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "5", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "6", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "7", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "8", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "9", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "10", nullptr));

        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\320\272\320\260\320\267\320\272\320\260", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
