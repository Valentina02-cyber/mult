#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    ui->label_2->setText("Приложение было разработано");
    ui->label->setText("<a href=\"https://t.me/walkddd\">Дубининой Валентиной</a>");
    QPixmap pic1 = QPixmap("photo.png");
    ui->label_3->setPixmap(pic1);
    ui->label->setTextFormat(Qt::RichText);
    ui->label->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label->setOpenExternalLinks(true);
}

About::~About()
{
    delete ui;
}
