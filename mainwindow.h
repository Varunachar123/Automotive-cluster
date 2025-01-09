#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"simulator.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:

    void on_doordata();

    void on_parkingdata();

    void on_seatbeltdata();

    void on_leftindicatordata();

    void on_rightindicatordata();

    void on_powerdata();

    void on_wiperdata();

    void on_wiper1data();

    void on_highbeam_2data();

    void on_lowbeam_2data();

    void on_absdata();

    void on_enginedata();

    void on_hazarddata();

    void on_handbrakedata();

    void on_coolent_temperaturedata();

    void on_lcddata(const int value);



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
