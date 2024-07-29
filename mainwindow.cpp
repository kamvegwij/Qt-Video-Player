#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->play_button->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->rewind_button->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->forward_button->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->settings_button->setIcon(style()->standardIcon(QStyle::SP_MessageBoxQuestion));
    ui->fullscreen_button->setIcon(style()->standardIcon(QStyle::SP_ToolBarHorizontalExtensionButton));
    ui->volume_button->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_Files_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Video File"),"",tr("Files (*.MP4)"));
    //m_player->setSource(QUrl(FileName));

    QFileInfo File(FileName);
    ui->video_title_label->setText(File.fileName());
}

void MainWindow::on_progress_slider_sliderMoved(int position)
{

}


void MainWindow::on_volume_slider_sliderMoved(int position)
{

}


void MainWindow::on_volume_slider_valueChanged(int value)
{

}


void MainWindow::on_volume_button_clicked()
{

}


void MainWindow::on_play_button_clicked()
{

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
