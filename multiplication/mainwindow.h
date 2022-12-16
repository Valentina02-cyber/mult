#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "hint.h"
#include "about.h"
#include "help.h"

#include <QMainWindow>
#include <QString>
#include <QRadioButton>

#include "rezult.h"
#include "saverezult.h"


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
    void sendData(QString str);


private slots:
    void RandSlot();

    void onButtonSend();

    void on_pushButton_2_clicked();

private:
    int counter = 0;
    int counterTRUE = 0;
    int counterFALSE = 0;

    Ui::MainWindow *ui;
    hint *hint_1;
    About *about_1;
    help *help_1;
    rezult *rezult_1;
    saverezult *saverezult_1;
};
#endif // MAINWINDOW_H
