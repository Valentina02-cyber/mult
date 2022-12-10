#include "hint.h"
#include "ui_hint.h"

hint::hint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::hint)
{
    ui->setupUi(this);
    QPixmap pic1 = QPixmap("hint.jpg");
    ui->label->setPixmap(pic1);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

hint::~hint()
{
    delete ui;
}
