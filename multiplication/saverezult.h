#ifndef SAVEREZULT_H
#define SAVEREZULT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDebug>

namespace Ui {
class saverezult;
}

class saverezult : public QWidget
{
    Q_OBJECT

public:
    explicit saverezult(QWidget *parent = 0);
    ~saverezult();

signals:
    void refresh_table2();

private slots:
    void on_pushButton_clicked();

    void recieveData(QString str);

private:
    Ui::saverezult *ui;
    QSqlDatabase db;
    QSqlQuery *query_Update;
};

#endif // SAVEREZULT_H
