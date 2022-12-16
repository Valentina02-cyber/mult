#include "rezult.h"
#include "ui_rezult.h"

#include "warning.h"
#include "saverezult.h"

#include <QApplication>

rezult::rezult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::rezult)
{
    ui->setupUi(this);
    this->setFixedSize(640,500);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./mult.db");
    if(db.open()){
        qDebug("open BD");
    }else{
        qDebug("no open BD");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE ResultsTable(Id INTEGER PRIMARY KEY, Firstname TEXT, Total INT, Right INT, Invalid INT, Date DATE);");

    model = new QSqlTableModel(this, db);
    model->setTable("ResultsTable");
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    warning_1 = new Warning();
    connect(warning_1, SIGNAL(refresh_table()), this, SLOT(obrabotka()));
    warning_1->show();
}

void rezult::on_pushButton_clicked()
{
    model->removeRow(row);
}

void rezult::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}
rezult::~rezult()
{
    delete ui;
}

void rezult::on_pushButton_3_clicked()
{

    model = new QSqlTableModel(this, db);
    model->setTable("ResultsTable");
    model->select();

    ui->tableView->setModel(model);
}

void rezult::obrabotka(){
    on_pushButton_3_clicked();
}

