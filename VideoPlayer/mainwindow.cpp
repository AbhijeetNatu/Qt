#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Player = new QMediaPlayer();
    AudioOutput = new QAudioOutput();

    QVBoxLayout *layout = new QVBoxLayout(ui->groupBox);
    layout->setContentsMargins(5, 5, 5, 5);
    ui->groupBox->setLayout(layout);

    ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_SeekBackward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_SeekForward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    ui->horizontalSlider_volume->setMinimum(0);
    ui->horizontalSlider_volume->setMaximum(100);
    ui->horizontalSlider_volume->setValue(30);
    //Player->setVolume(ui->horizontalSlider_volume->value());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Video File"),"",tr("MP4 Files (*.mp4)"));

    Video = new QVideoWidget();
    //Video = new QVideoWidget();
    ui->groupBox->layout()->addWidget(Video);
    Video->show();

    //Video->setGeometry(5,5,ui->groupBox->width()-10,ui->groupBox->height()-10);

    Video->setParent(ui->groupBox);

    Player->setVideoOutput(Video);

    Player->setSource(QUrl(FileName));
  //  Player->setMedia(QMediaContent(QUrl::fromLocalFile(FileName)));

    Video->setVisible(true);

    Video->show();

    Player->play();

}


void MainWindow::on_horizontalSlider_duration_valueChanged(int value)
{
      Player->setPosition(value * 1000);
}


void MainWindow::on_pushButton_PlayPause_clicked()
{
    if(IS_Pause == true)
    {
        IS_Pause = false;
        Player->play();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
    else
    {
        IS_Pause = true;
        Player->pause();
        ui->pushButton_PlayPause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
}


void MainWindow::on_pushButton_Stop_clicked()
{
    Player->stop();
}


void MainWindow::on_pushButton_Volume_clicked()
{
    if(IS_Muted == false)
    {
        AudioOutput = 0;
        IS_Muted = true;
        ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        Player->setAudioOutput(AudioOutput);
    }
    else
    {
        IS_Muted = false;
        ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        Player->setAudioOutput(AudioOutput);

    }
}


void MainWindow::on_horizontalSlider_volume_valueChanged(int value)
{
    AudioOutput->setVolume(value);
}


void MainWindow::on_pushButton_SeekBackward_clicked()
{
    ui->horizontalSlider_duration->setValue(ui->horizontalSlider_duration->value()-20);
    Player->setPosition(ui->horizontalSlider_duration->value() * 1000);
}


void MainWindow::on_pushButton_SeekForward_clicked()
{
    ui->horizontalSlider_duration->setValue(ui->horizontalSlider_duration->value()+20);
    Player->setPosition(ui->horizontalSlider_duration->value() * 1000);
}

