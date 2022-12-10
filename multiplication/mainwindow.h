#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "warning.h"
#include "hint.h"
#include "about.h"
#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QRadioButton>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void signalFromButton(int buttonID);  // Сигнал для передачи номерa нажатой кнопки

private slots:
    void slotBut1();
    void slotBut2();
    void slotBut3();

    //void slotMessage(int buttonID);

    void RandSlot(int buttonID);


    //void on_comboBox_activated(int index);

private:
    int counter = 0;
    int counterTRUE = 0;
    int counterFALSE = 0;
    //QButtonGroup * rb_group;
    Ui::MainWindow *ui;
    hint *hint_1;
    About *about_1;
};
#endif // MAINWINDOW_H
