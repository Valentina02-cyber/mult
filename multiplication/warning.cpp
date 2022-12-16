#include "warning.h"
#include "ui_warning.h"

Warning::Warning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Warning)
{
    ui->setupUi(this);
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    this->setFixedSize(522,213);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));
    ui->pushButton_2->setShortcut(Qt::Key_Return);

}

Warning::~Warning()
{
    delete ui;
}

void Warning::on_pushButton_2_clicked()
{
    QSqlQuery* query = new QSqlQuery();
    query->prepare("INSERT INTO ResultsTable(Firstname, Date) VALUES (:Firstname, :Date)");
    query->bindValue(":Firstname", ui->lineEdit->text());
    query->bindValue(":Date",ui->dateEdit->text());
    query->exec();

    emit refresh_table();
}

