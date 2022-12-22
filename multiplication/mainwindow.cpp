#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QRandomGenerator"
#include "QColor"
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    this->setFixedSize(600,500);
    hint_1 = new hint();
    about_1 = new About();
    help_1 = new help();
    rezult_1 = new rezult();
    saverezult_1 = new saverezult();

    ui->radioButton_2->setChecked(true);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(RandSlot()));

   if(ui->radioButton_2->isChecked()){
        int N = 0;
        int N1 = 0;
        ui->lineEdit_2->setText(QString::number(N));
        ui->lineEdit_3->setText(QString::number(N1));

        QIntValidator *roll = new QIntValidator(0,101);
        ui->lineEdit->setValidator(roll);

        QString A = "Введите ответ";
        ui->textEdit->insertPlainText(A+" ");
        int counter = 0;
        int counterTRUE = 0;
        int counterFALSE = 0;

        QString Q = "Всего примеров:";
        ui->textEdit_2->insertPlainText(Q+" ");
        ui->textEdit_3->setText(QString::number(counter));
        QString T = "Верных ответов:";
        ui->textEdit_4->setTextColor(QColor(0,255,0));
        ui->textEdit_4->insertPlainText(T+" ");
        ui->textEdit_5->setText(QString::number(counterTRUE));
        QString F = "Неверных ответов:";
        ui->textEdit_6->setTextColor(Qt::red);
        ui->textEdit_6->insertPlainText(F+" ");
        ui->textEdit_7->setText(QString::number(counterFALSE));
    }

    connect(ui->action, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->action_2,SIGNAL(triggered()), hint_1, SLOT(show()));
    connect(ui->action_3,SIGNAL(triggered()), about_1, SLOT(show()));
    connect(ui->action_4, SIGNAL(triggered()), help_1, SLOT(show()));
    connect(ui->action_5, SIGNAL(triggered()), rezult_1, SLOT(show()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), saverezult_1, SLOT(recieveData(QString)));

    ui->pushButton->setShortcut(Qt::Key_Return); // enter


}


void MainWindow::RandSlot(){

    if(ui->radioButton_1->isChecked()){
    ui->textEdit_3->setText(QString::number(counter));
    int N_ = ui->lineEdit_2->text().toInt();
    int N_1 = ui->lineEdit_3->text().toInt();


    QIntValidator *roll = new QIntValidator(0,101);
    ui->lineEdit->setValidator(roll);

    QString B = "Верно!" "\n"
                "Следующий пример:";
    QString C = "Ошибка!" "\n"
                "Верный ответ:";

    int Y = N_ * N_1;
    int U = ui->lineEdit->text().toInt();

    if(U == Y){
    ui->textEdit_8->setText("");
    ui->textEdit->setText("");
    ui->textEdit->setTextColor(QColor(0,255,0));
    ui->textEdit->insertPlainText(B+" ");
    ui->lineEdit->setText("");

    int N = QRandomGenerator::global()->bounded(1, 11);
    int N1 = QRandomGenerator::global()->bounded(1, 11);

    ui->lineEdit_2->setText(QString::number(N));
    ui->lineEdit_3->setText(QString::number(N1));

    counter++;
    ui->textEdit_3->setText(QString::number(counter));
    counterTRUE++;
    ui->textEdit_5->setText(QString::number(counterTRUE));

     }else{
        counter++;
        ui->textEdit_3->setText(QString::number(counter));
        counterFALSE++;
        ui->textEdit_7->setText(QString::number(counterFALSE));

        ui->textEdit_8->setText(QString("%1 * %2 = %3").arg(N_).arg(N_1).arg(Y));
        ui->textEdit->setText("");
        ui->textEdit->setTextColor(Qt::red);
        ui->textEdit->insertPlainText(C+" ");
        ui->lineEdit->setText("");

        int N = QRandomGenerator::global()->bounded(1, 11);
        int N1 = QRandomGenerator::global()->bounded(1, 11);
        ui->lineEdit_2->setText(QString::number(N));
        ui->lineEdit_3->setText(QString::number(N1));
    }
    }else if(ui->radioButton_2->isChecked()){
        ui->textEdit_3->setText(QString::number(counter));
        int N_ = ui->lineEdit_2->text().toInt();
        int N_1 = ui->lineEdit_3->text().toInt();

        QIntValidator *roll = new QIntValidator(0,101);
        ui->lineEdit->setValidator(roll);

        int W = ui->comboBox->currentText().toInt();
        int N1 = QRandomGenerator::global()->bounded(1, 11);

        QString B = "Верно!" "\n"
                    "Следующий пример:";
        QString C = "Ошибка!" "\n"
                    "Верный ответ:";

        int Y = N_ * N_1;
        int U = ui->lineEdit->text().toInt();

        if(U == Y){
        ui->textEdit_8->setText("");
        ui->textEdit->setText("");
        ui->textEdit->setTextColor(QColor(0,255,0));
        ui->textEdit->insertPlainText(B+" ");
        ui->lineEdit->setText("");

        ui->lineEdit_2->setText(QString::number(W));
        ui->lineEdit_3->setText(QString::number(N1));

        if(W == 0){
            QString w = "Умножая любое число на ноль, будет ноль!" "\n"
                        "Измени цифру!";
            ui->textEdit->setText("");
            ui->textEdit->insertPlainText(w+" ");
            ui->lineEdit->setText("");
        }

        counter++;
        ui->textEdit_3->setText(QString::number(counter));
        counterTRUE++;
        ui->textEdit_5->setText(QString::number(counterTRUE));

         }else{
            counter++;
            ui->textEdit_3->setText(QString::number(counter));
            counterFALSE++;
            ui->textEdit_7->setText(QString::number(counterFALSE));

            ui->textEdit_8->setText(QString("%1 * %2 = %3").arg(N_).arg(N_1).arg(Y));
            ui->textEdit->setText("");
            ui->textEdit->setTextColor(Qt::red);
            ui->textEdit->insertPlainText(C+" ");
            ui->lineEdit->setText("");

            int N1 = QRandomGenerator::global()->bounded(1, 11);
            ui->lineEdit_2->setText(QString::number(W));
            ui->lineEdit_3->setText(QString::number(N1));
        }
    }else if(ui->radioButton_3->isChecked()){
        ui->textEdit_3->setText(QString::number(counter));

        int N_ = ui->lineEdit_2->text().toInt();
        int N_1 = ui->lineEdit_3->text().toInt();

        QIntValidator *roll = new QIntValidator(0,101);
        ui->lineEdit->setValidator(roll);

        int W = ui->comboBox_2->currentText().toInt();
        W++;

        W = QRandomGenerator::global()->bounded(1, W);
        int N1 = QRandomGenerator::global()->bounded(W, 11);

        QString B = "Верно!" "\n"
                    "Следующий пример:";
        QString C = "Ошибка!" "\n"
                    "Верный ответ:";

        int Y = N_ * N_1;
        int U = ui->lineEdit->text().toInt();

        if(U == Y){
        ui->textEdit_8->setText("");
        ui->textEdit->setText("");
        ui->textEdit->setTextColor(QColor(0,255,0));
        ui->textEdit->insertPlainText(B+" ");
        ui->lineEdit->setText("");

        ui->lineEdit_2->setText(QString::number(W));
        ui->lineEdit_3->setText(QString::number(N1));

        counter++;
        ui->textEdit_3->setText(QString::number(counter));
        counterTRUE++;
        ui->textEdit_5->setText(QString::number(counterTRUE));

         }else{
            counter++;
            ui->textEdit_3->setText(QString::number(counter));
            counterFALSE++;
            ui->textEdit_7->setText(QString::number(counterFALSE));

            ui->textEdit_8->setText(QString("%1 * %2 = %3").arg(N_).arg(N_1).arg(Y));
            ui->textEdit->setText("");
            ui->textEdit->setTextColor(Qt::red);
            ui->textEdit->insertPlainText(C+" ");
            ui->lineEdit->setText("");

            W = QRandomGenerator::global()->bounded(1, W);
            int N1 = QRandomGenerator::global()->bounded(1, W);
            ui->lineEdit_2->setText(QString::number(W));
            ui->lineEdit_3->setText(QString::number(N1));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    this->saverezult_1->show();
}

void MainWindow::onButtonSend()
{
    QString firstname;
    QSqlQuery* query_Select = new QSqlQuery();

    query_Select->prepare("SELECT Firstname FROM ResultsTable WHERE id=(SELECT max(id) FROM ResultsTable)");

    if(query_Select->exec()){
        query_Select->next();

        firstname = query_Select->value(0).toString();
    }

    QString text3 = ui->textEdit_3->toPlainText();
    QString text5 = ui->textEdit_5->toPlainText();
    QString text7 = ui->textEdit_7->toPlainText();
    QString textF = firstname;

    QString st = text3 + "*" + text5 + "*" + text7 + "*" + textF;
    emit sendData(st);
}
