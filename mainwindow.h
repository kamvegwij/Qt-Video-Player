#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "QMessageBox"
#include <QMediaPlayer>
#include <QAudioOutput>

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

private slots:
    void on_progress_slider_sliderMoved(int position);

    void on_volume_slider_sliderMoved(int position);

    void on_volume_slider_valueChanged(int value);

    void on_volume_button_clicked();

    void on_play_button_clicked();

    void on_rewind_button_clicked();

    void on_forward_button_clicked();

    void on_settings_button_clicked();

    void on_fullscreen_button_clicked();

    void on_actionOpen_Files_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *video_Player;
    QVideoWidget *video_Widget;
    QAudioOutput *audioOutput;

    qint64 mDuration;
    bool is_Paused = true;
    bool is_Muted = false;
};
#endif // MAINWINDOW_H
