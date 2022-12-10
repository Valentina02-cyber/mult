#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);

    ui->label_2->setText("Приложение было разработано");
    ui->label->setText("<a href=\"https://t.me/walkddd\">Дубининой Валентиной</a>");
    ui->label->setTextFormat(Qt::RichText);
    ui->label->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->label->setOpenExternalLinks(true);
}

About::~About()
{
    delete ui;
}
