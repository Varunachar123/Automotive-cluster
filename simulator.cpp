#include "simulator.h"
#include "ui_simulator.h"

simulator::simulator(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::simulator)
{
    ui->setupUi(this);
}

simulator::~simulator()
{
    delete ui;
}

void simulator::on_door_button_clicked()
{
    emit doordata();
}


void simulator::on_parking_button_clicked()
{
    emit parkingdata();
}


void simulator::on_power_button_clicked()
{

    static bool active=true;

    emit absdata();
    emit enginedata();

    if(active==true)
    {
        QIcon icon("C:/Users/rajva/Documents/icons/power on.png");
        ui->power_button->setIcon(icon);

        emit powerdata();

        active=false;

    }
    else
    {
        QIcon icon("C:/Users/rajva/Documents/icons/power off.png");
        ui->power_button->setIcon(icon);

        emit powerdata();

        //emit doordata();
        //emit parkingdata();
        //emit seatbeltdata();
        //emit leftindicatordata();
        //emit rightindicatordata();
        //emit wiperdata();
        //emit wiper1data();

        active=true;
    }

    }



void simulator::on_seatbelt_button_clicked()
{
    emit seatbeltdata();
}


void simulator::on_leftindicator_button_clicked()
{
    emit leftindicatordata();
}


void simulator::on_rightindicator_button_clicked()
{
    emit rightindicatordata();
}


void simulator::on_wiper_button_clicked()
{
    static bool active=true;

    if(active==true)
    {
        QIcon icon("C:/Users/rajva/Documents/icons/car wiper2.jpg");
        ui->wiper_button->setIcon(icon);

        emit wiperdata();


        active=false;

    }
    else
    {
        QIcon icon("C:/Users/rajva/Documents/icons/car wiper3.jpg");

        ui->wiper_button->setIcon(icon);


        emit wiperdata();
        emit wiper1data();


        active=true;


    }


}






void simulator::on_light_button_clicked()
{
    static bool active=true;

    if(active==true)
    {
        QIcon icon("C:/Users/rajva/Documents/icons/headlight_2.png");
        ui->light_button->setIcon(icon);

        emit lowbeam_2data();


        active=false;


    }
    else
    {
        QIcon icon("C:/Users/rajva/Documents/icons/headlight_1.png");

        ui->light_button->setIcon(icon);

        emit highbeam_2data();
        emit lowbeam_2data();


        active=true;
    }




};




void simulator::on_pushButton_clicked()
{

    emit leftindicatordata();
    emit rightindicatordata();


}




void simulator::on_handbrake_clicked()
{
    emit handbrakedata();
}




void simulator::on_coolent_button_clicked()
{
    emit coolent_temperaturedata();

}


void simulator::on_speed_Slider_valueChanged( int value)
{
   emit lcddata( value);
}

