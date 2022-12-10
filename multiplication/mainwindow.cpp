#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include "hint.h"
#include <QTextStream>
#include "QRandomGenerator"
#include "QMessageBox"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    this->setFixedSize(600,500);
    hint_1 = new hint();
    about_1 = new About();
    ui->radioButton_1->setChecked(true);


    connect(ui->radioButton_1, SIGNAL(clicked()), this, SLOT(slotButn1()));
    connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(slotBut2()));
    connect(ui->radioButton_3, SIGNAL(clicked()), this, SLOT(slotBut3()));

    //connect(pushButton, &MainWindow::signalFromButton, this, &MainWindow::RandSlot);
    connect(this, &MainWindow::signalFromButton, this, &MainWindow::RandSlot);

   // connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(RandSlot()));

    connect(ui->action, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_2,SIGNAL(triggered()), hint_1, SLOT(show()));
    connect(ui->action_3,SIGNAL(triggered()), about_1, SLOT(show()));

    ui->pushButton->setShortcut(Qt::Key_Return); // enter

    int N = QRandomGenerator::global()->bounded(1, 11);
    int N1 = QRandomGenerator::global()->bounded(1, 11);
    ui->lineEdit_2->setText(QString::number(N));
    ui->lineEdit_3->setText(QString::number(N1));

    QString A = "Введите ответ";
    ui->textEdit->insertPlainText(A+" ");
    int counter = 0;
    int counterTRUE = 0;
    int counterFALSE = 0;

    QString Q = "Всего примеров:";
    ui->textEdit_2->insertPlainText(Q+" ");
    ui->textEdit_3->setText(QString::number(counter));
    QString T = "Верных ответов:";
    ui->textEdit_4->insertPlainText(T+" ");
    ui->textEdit_5->setText(QString::number(counterTRUE));
    QString F = "Неверных ответов:";
    ui->textEdit_6->insertPlainText(F+" ");
    ui->textEdit_7->setText(QString::number(counterFALSE));
}

void MainWindow::slotBut1()
{
    emit signalFromButton(1);
}

void MainWindow::slotBut2()
{
    emit signalFromButton(2);
}

void MainWindow::slotBut3()
{
    emit signalFromButton(3);
}

//void MainWindow::slotMessage(int buttonID)
//{
//    QMessageBox::information(this,
//                             "Уведомление о нажатой кнопке",
 //                            "Нажата кнопка под номером " + QString::number(buttonID));
//}

void MainWindow::RandSlot(int buttonID){


    if(buttonID == 1){

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(RandSlot()));

    ui->textEdit_3->setText(QString::number(counter));
    int N_ = ui->lineEdit_2->text().toInt();
    int N_1 = ui->lineEdit_3->text().toInt();

    QString B = "Верно!" "\n"
                "Следующий пример:";
    QString C = "Ошибка!" "\n"
                "Верный ответ:";

    int Y = N_ * N_1;
    int U = ui->lineEdit->text().toInt();

    if(U == Y){ // если ответ верный, то очищаем и выводим "верно" и рандомим новые значения
    ui->textEdit_8->setText("");
    ui->textEdit->setText("");
    ui->textEdit->insertPlainText(B+" ");
    ui->lineEdit->setText("");

    int N = QRandomGenerator::global()->bounded(1, 11);
    int N1 = QRandomGenerator::global()->bounded(1, 11);

    ui->lineEdit_2->setText(QString::number(N));
    ui->lineEdit_3->setText(QString::number(N1));

    counter++; // прибавляем счетчик общий и счетчик верных ответов
    ui->textEdit_3->setText(QString::number(counter));
    counterTRUE++;
    ui->textEdit_5->setText(QString::number(counterTRUE));

     }else{ // иначе выводим "неверно" увеличиваем счетчик общий и неверных ответов
        counter++;
        ui->textEdit_3->setText(QString::number(counter));
        counterFALSE++;
        ui->textEdit_7->setText(QString::number(counterFALSE));


        ui->textEdit_8->setText(QString("%1 * %2 = %3").arg(N_).arg(N_1).arg(Y));
        ui->textEdit->setText("");
        ui->textEdit->insertPlainText(C+" ");
        ui->lineEdit->setText("");

        int N = QRandomGenerator::global()->bounded(1, 11);
        int N1 = QRandomGenerator::global()->bounded(1, 11);
        ui->lineEdit_2->setText(QString::number(N));
        ui->lineEdit_3->setText(QString::number(N1));

    }
    }else if(buttonID == 2){
        ui->lineEdit_2->setText("!");
        ui->lineEdit_3->setText("!");
    }else if(buttonID == 3){
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}
