#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QPainter>
#include <QTime>

/*void LoadModules(QSplashScreen* psplash){
    QTime time;
    time.start();
    for(int i=0;i<100;){
        if(time.elapsed()>40){
            time.start();
            i++;
        }

        psplash->showMessage("Загрузка: "
                             + QString::number(i)+"%",
                             Qt::AlignCenter|Qt::AlignBottom,Qt::black
                             );
        qApp->processEvents();
    }
}*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file("style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    //QSplashScreen splash(QPixmap("Screen1.jpg"));
    //splash.show();
    Warning w;
    //LoadModules(&splash);
    //splash.finish(&w);
    w.show();
    MainWindow r;
    r.show();

    return a.exec();
}
