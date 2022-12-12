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

private slots:
   // void RandSlot();
    void on_radioButton_1_clicked(bool checked);
    void on_radioButton_2_clicked(bool checked);
    void on_radioButton_3_clicked(bool checked);

private:
    int counter = 0;
    int counterTRUE = 0;
    int counterFALSE = 0;
    Ui::MainWindow *ui;
    hint *hint_1;
    About *about_1;
};
#endif // MAINWINDOW_H
