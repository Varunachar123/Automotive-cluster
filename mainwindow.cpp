#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->door_2->hide();
    ui->parking_2->hide();
    ui->seatbelt_2->hide();
    ui->leftindicator->hide();
    ui->rightindicator->hide();
    ui->on_label_2->hide();
    ui->wiper_2->hide();
    ui->wiper1_2->hide();

    ui->door->hide();
    ui->parking->hide();
    ui->seatbelt->hide();
    ui->wiper->hide();
    ui->wiper1->hide();



    ui->highbeam_2->hide();
    ui->lowbeam_2->hide();

    ui->abs->hide();
    ui->engine->hide();
    ui->handbrake->hide();

    ui->low->hide();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_doordata()
{

    static bool active=true;

    if(active==true)
    {
        ui->door_2->show();
        active=false;

    }

    else
    {
        ui->door_2->hide();
        active=true;
    }
}

void MainWindow::on_parkingdata(){

    static bool active=true;

    if(active==true)
    {
        ui->parking_2->show();
        active=false;

    }

    else
    {
        ui->parking_2->hide();
        active=true;
    }


}

void MainWindow::on_seatbeltdata(){

    static bool active=true;
    static QTimer *timer=nullptr;

    if(active==true)
    {
        ui->seatbelt_2->show();
        if(!timer)
        {
            timer=new QTimer(this);
            connect(timer,&QTimer::timeout,this,[this]{
                if(ui->seatbelt_2->isVisible())
                    ui->seatbelt_2->hide();
                else
                    ui->seatbelt_2->show();
            });

            timer->start(500);
        }

        else
        {
            ui->seatbelt_2->hide();

            if(timer)
            {
                timer->stop();
                delete timer;
                timer=nullptr;
            }

            active=true;

        }

    }

}

void MainWindow::on_leftindicatordata()
{

    static bool active=true;
    static QTimer *timer=nullptr;

    if(active==true)
    {
        ui->leftindicator->show();
        if(!timer)
        {
            timer=new QTimer(this);
            connect(timer,&QTimer::timeout,this,[this]{
                if(ui->leftindicator->isVisible())
                    ui->leftindicator->hide();
                else
                    ui->leftindicator->show();
            });

            timer->start(500);
        }

        else
        {
            ui->leftindicator->hide();

            if(timer)
            {
                timer->stop();
                delete timer;
                timer=nullptr;
            }

            active=true;

        }

    }
}



void MainWindow::on_rightindicatordata()
{
    static bool active=true;
     static QTimer *timer=nullptr;

if(active==true)
{
    ui->rightindicator->show();
    if(!timer)
    {
        timer=new QTimer(this);
        connect(timer,&QTimer::timeout,this,[this]{
            if(ui->rightindicator->isVisible())
                ui->rightindicator->hide();
            else
                ui->rightindicator->show();
        });

        timer->start(500);
    }

    else
    {
        ui->rightindicator->hide();

        if(timer)
        {
            timer->stop();
            delete timer;
            timer=nullptr;
        }

        active=true;

    }

}
}

void MainWindow::on_powerdata()
{
   static bool active=true;

    if(active==true)
    {
        ui->on_label_2->show();
        active = false;
    }

    else
    {
        ui->on_label_2->hide();
        active = true;
    }

}

void MainWindow::on_wiperdata()
{
    static bool active=true;

    if(active==true)
    {
        ui->wiper_2->show();
        active = false;
    }

    else
    {
        ui->wiper_2->hide();
        active = true;
    }

}

void MainWindow::on_wiper1data()
{
    static bool active=true;

    if(active==true)
    {
        ui->wiper1_2->show();

        active = false;

    }

    else
    {
        ui->wiper1_2->hide();

        active = true;
    }

}

void MainWindow::on_highbeam_2data()
{
    static bool active=true;

    if(active==true)
    {
        ui->highbeam_2->show();
        active = false;

    }

    else
    {
        ui->highbeam_2->hide();
        active = true;
    }

}

void MainWindow::on_lowbeam_2data()
{
    static bool active=true;

    if(active==true)
    {
        ui->lowbeam_2->show();
        ui->highbeam_2->hide();

        active = false;

    }

    else
    {
        ui->lowbeam_2->hide();
        ui->highbeam_2->show();
        active = true;
    }


}

void MainWindow::on_absdata()
{

    static bool active=true;

    if(active==true)
    {
        ui->abs->show();
        active=false;

    }

    else
    {
        ui->abs->hide();
        active=true;
    }
}

void MainWindow::on_enginedata()
{

    static bool active=true;

    if(active==true)
    {
        ui->engine->show();
        active=false;

    }

    else
    {
        ui->engine->hide();
        active=true;
    }
}

void MainWindow::on_hazarddata()
{

    static bool active=true;
    static QTimer *timer=nullptr;

    if(active==true)
    {
        ui->leftindicator->show();
        ui->rightindicator->show();


        if(!timer)
        {
            timer=new QTimer(this);
            connect(timer,&QTimer::timeout,this,[this]{
                if(ui->leftindicator->isVisible() )
                    ui->leftindicator->hide();

                else
                    ui->leftindicator->show();




            });

            timer->start(500);
        }

        else
        {
            ui->leftindicator->hide();



            if(timer)
            {
                timer->stop();
                delete timer;
                timer=nullptr;
            }

            active=true;

        }

    }
}

void MainWindow::on_handbrakedata()
{
    static bool active=true;

    if(active==true)
    {
        ui->handbrake->show();
        active=false;

    }

    else
    {
        ui->handbrake->hide();
        active=true;
    }


}

void MainWindow::on_coolent_temperaturedata()
{
    static int active=1;

    if(active == 1)
    {
        QIcon icon("C:/Users/rajva/Documents/icons/high.jpeg");
        ui->low->setIcon(icon);
        ui->low->show();

        active = 2;

    }
    else if(active == 2)
    {
        QIcon icon("C:/Users/rajva/Documents/icons/low.jpeg");

        ui->low->setIcon(icon);
        ui->low->show();

        active = 3;
    }

        else
        {
            active=1;
            ui->low->hide();
        }


    }

void MainWindow::on_lcddata(const int value)
{

    ui->lcd->display(value);

    if(value==0)

        ui->red->move(115,100);

    else if(value<=20)

        ui->red->move(95,65);

    else if(value>20 && value<=40)

        ui->red->move(95,132);

    else if(value>40 && value<=60)

        ui->red->move(112,65);

    else if(value>60 && value<=80)

        ui->red->move(114,131);

    else

        ui->red->move(130,65);


}


