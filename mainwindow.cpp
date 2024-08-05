#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    video_Player = new QMediaPlayer();
    audioOutput = new QAudioOutput();

    video_Player->setAudioOutput(audioOutput);
    audioOutput->setMuted( false );

    ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->rewind_button->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->forward_button->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->settings_button->setIcon(style()->standardIcon(QStyle::SP_MessageBoxQuestion));
    ui->fullscreen_button->setIcon(style()->standardIcon(QStyle::SP_ToolBarHorizontalExtensionButton));
    ui->volume_button->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    ui->volume_slider->setMinimum(0);
    ui->volume_slider->setMaximum(100);
    ui->volume_slider->setValue(50);

    connect(video_Player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(video_Player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);

    ui->progress_slider->setRange(0, video_Player->duration()/1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::durationChanged(qint64 duration)
{
    video_Duration = duration / 1000;
    ui->progress_slider->setMaximum(duration);
}

void MainWindow::positionChanged(qint64 position)
{
    if (!ui->progress_slider->isSliderDown()){
        ui->progress_slider->setValue( position / 1000);
    }
    updateDuration(position / 1000);
}

void MainWindow::updateDuration(qint64 uDuration)
{
    if (uDuration || video_Duration)
    {
        QTime current_Time( (uDuration/3600)%60, (uDuration/60)%60, (uDuration*1000)%1000 );
        QTime total_Time( (video_Duration/3600)%60, (video_Duration/60)%60, (video_Duration*1000)%1000 );
        QString time_Format = "hh:mm:ss";

        ui->video_current_time_label->setText(current_Time.toString(time_Format));
        ui->video_end_time_label->setText(total_Time.toString(time_Format));
    }

}
void MainWindow::on_actionOpen_Files_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Video File"),"",tr("Files (*.MP4)"));
    QFileInfo File(FileName);
    ui->video_title_label->setText(File.fileName());

    video_Widget = new QVideoWidget();
    video_Widget->setGeometry(5, 5, ui->video_container->width() - 10, ui->video_container->height() - 10);
    video_Widget->setParent(ui->video_container);
    video_Player->setVideoOutput(video_Widget);
    video_Player->setSource(QUrl(FileName));
    video_Widget->setVisible(true);
    video_Widget->show();


}

void MainWindow::on_progress_slider_sliderMoved(int position)
{
    video_Player->setPosition(position);
}


void MainWindow::on_volume_slider_sliderMoved(int position)
{
    audioOutput->setVolume(position);
}


void MainWindow::on_volume_slider_valueChanged(int value)
{
    //audioOutput->setVolume(value);
}


void MainWindow::on_volume_button_clicked()
{
    audioOutput->setMuted( !audioOutput->isMuted() );
    is_Muted = audioOutput->isMuted();

    if (!is_Muted){
        ui->volume_button->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    }
    else{
        ui->volume_button->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
}


void MainWindow::on_play_button_clicked()
{
    if (video_Player->isPlaying()){
        video_Player->pause();
        ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
    else{
        video_Player->play();
        ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }

}


void MainWindow::on_rewind_button_clicked()
{

}


void MainWindow::on_forward_button_clicked()
{

}


void MainWindow::on_settings_button_clicked()
{
    QMessageBox::information(0, "Important", "Settings currently unavailable");
}


void MainWindow::on_fullscreen_button_clicked()
{
    QMessageBox::information(0, "Important", "Fullscreen mode currently unavailable");
}
