#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <QDialog>

namespace Ui {
class simulator;
}

class simulator : public QDialog
{
    Q_OBJECT

public:
    explicit simulator(QWidget *parent = nullptr);
    ~simulator();

signals:

    void doordata();

    void parkingdata();

    void seatbeltdata();

    void leftindicatordata();

    void rightindicatordata();

    void powerdata();

    void wiperdata();

    void wiper1data();

    void highbeam_2data();

    void lowbeam_2data();

    void absdata();

    void enginedata();

    void hazarddata();

    void handbrakedata();

    void coolent_temperaturedata();

    void lcddata(const int value);













private slots:
    void on_door_button_clicked();

    void on_parking_button_clicked();

    void on_power_button_clicked();

    void on_seatbelt_button_clicked();

    void on_leftindicator_button_clicked();

    void on_rightindicator_button_clicked();

    void on_wiper_button_clicked();

    void on_light_button_clicked();

    void on_pushButton_clicked();

    void on_handbrake_clicked();


    void on_coolent_button_clicked();

   // void on_speed_Slider_valueChanged(int value);

    void on_speed_Slider_valueChanged(int value);

private:
    Ui::simulator *ui;
};

#endif // SIMULATOR_H
