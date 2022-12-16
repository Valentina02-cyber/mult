#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::help)
{
    ui->setupUi(this);
    this->setFixedSize(600,524);
    this->setMaximumSize(this->width(),this->height());
        this->setMinimumSize(this->width(),this->height());

        connect(ui->nextButton, SIGNAL(clicked()), ui->textBrowser, SLOT(forward()));
        connect(ui->backButton, SIGNAL(clicked()), ui->textBrowser, SLOT(backward()));
        connect(ui->homeButton, SIGNAL(clicked()), ui->textBrowser, SLOT(home()));
        connect(ui->textBrowser, SIGNAL(forwardAvailable(bool)), ui->nextButton, SLOT(setEnabled(bool)));
        connect(ui->textBrowser, SIGNAL(backwardAvailable(bool)), ui->backButton, SLOT(setEnabled(bool)));
        ui->textBrowser->setSource(QUrl::fromLocalFile("D:/qt_/build-multiplication-Desktop_Qt_5_10_0_MinGW_32bit-Debug/Resurs/index.html"));
}

help::~help()
{
    delete ui;
}
