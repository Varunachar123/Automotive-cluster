#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "cluster_sample12345_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    simulator s;

    QObject::connect(&s,&simulator::doordata, &w,&MainWindow::on_doordata);

    QObject::connect(&s,&simulator::parkingdata, &w,&MainWindow::on_parkingdata);

    QObject::connect(&s,&simulator::seatbeltdata, &w,&MainWindow::on_seatbeltdata);

    QObject::connect(&s,&simulator::leftindicatordata, &w,&MainWindow::on_leftindicatordata);

    QObject::connect(&s,&simulator::rightindicatordata, &w,&MainWindow::on_rightindicatordata);

    QObject::connect(&s,&simulator::powerdata, &w,&MainWindow::on_powerdata);

    QObject::connect(&s,&simulator::wiperdata, &w,&MainWindow::on_wiperdata);

    QObject::connect(&s,&simulator::wiper1data, &w,&MainWindow::on_wiper1data);



    QObject::connect(&s,&simulator::highbeam_2data, &w,&MainWindow::on_highbeam_2data);

    QObject::connect(&s,&simulator::lowbeam_2data, &w,&MainWindow::on_lowbeam_2data);

    QObject::connect(&s,&simulator::absdata, &w,&MainWindow::on_absdata);

    QObject::connect(&s,&simulator::enginedata, &w,&MainWindow::on_enginedata);

    QObject::connect(&s,&simulator::hazarddata, &w,&MainWindow::on_hazarddata);

    QObject::connect(&s,&simulator::handbrakedata, &w,&MainWindow::on_handbrakedata);

    QObject::connect(&s,&simulator::coolent_temperaturedata, &w,&MainWindow::on_coolent_temperaturedata);

    QObject::connect(&s,&simulator::lcddata, &w,&MainWindow::on_lcddata);








    w.show();
    s.show();
    return a.exec();
}
