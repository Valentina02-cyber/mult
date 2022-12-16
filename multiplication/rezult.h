#ifndef REZULT_H
#define REZULT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QDebug>

#include "warning.h"


namespace Ui {
class rezult;
}

class rezult : public QWidget
{
    Q_OBJECT

public:
    explicit rezult(QWidget *parent = 0);
    Warning* warning_1;
    ~rezult();

private slots:

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void obrabotka();

private:
    Ui::rezult *ui;

    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
    int row;
};

#endif // REZULT_H
