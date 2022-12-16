#ifndef WARNING_H
#define WARNING_H

#include <QWidget>
#include <QFileDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Warning;
}

class Warning : public QWidget
{
    Q_OBJECT

public:
    explicit Warning(QWidget *parent = 0);
    ~Warning();

signals:
    void refresh_table();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Warning *ui;
    QSqlDatabase db;
    QSqlQuery *query;
};

#endif // WARNING_H
