#include "warning.h"
#include "ui_warning.h"
#include <QFileDialog>
#include <QPushButton>


Warning::Warning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Warning)
{
    ui->setupUi(this);
    this->setFixedSize(522,213);
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
    ui->pushButton->setShortcut(Qt::Key_Return);
}

Warning::~Warning()
{
    delete ui;
}
