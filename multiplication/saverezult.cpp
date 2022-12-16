#include "saverezult.h"
#include "ui_saverezult.h"

saverezult::saverezult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::saverezult)
{
    ui->setupUi(this);
    this->setFixedSize(350,272);
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
    ui->pushButton->setShortcut(Qt::Key_Return);
}

saverezult::~saverezult()
{
    delete ui;
}

void saverezult::recieveData(QString str){

    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(0));
    ui->textEdit_2->setText(lst.at(1));
    ui->textEdit_4->setText(lst.at(2));
    ui->lineEdit->setText(lst.at(3));
}


void saverezult::on_pushButton_clicked()
{
    QSqlQuery* query_Update = new QSqlQuery();
    QString queryStr = "UPDATE ResultsTable SET Total =:Total, Right =:Right, Invalid =:Invalid WHERE id=(SELECT max(id) FROM ResultsTable)";
    query_Update->prepare(queryStr);
    query_Update->bindValue(":Total",ui->textEdit->toPlainText());
    query_Update->bindValue(":Right",ui->textEdit_2->toPlainText());
    query_Update->bindValue(":Invalid",ui->textEdit_4->toPlainText());
    query_Update->exec();
}
