#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QFileDialog"
#include "QtMultimedia"
#include "QStyle"
#include "QMediaPlayer"
#include "QtCore"
#include "QtWidgets"
#include "QMessageBox"

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
};
#endif // MAINWINDOW_H
