/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Files;
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttons_container;
    QPushButton *rewind_button;
    QPushButton *play_button;
    QPushButton *forward_button;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *video_tools_container;
    QPushButton *settings_button;
    QPushButton *fullscreen_button;
    QPushButton *volume_button;
    QSlider *volume_slider;
    QGroupBox *video_container;
    QSlider *progress_slider;
    QLabel *video_current_time_label;
    QLabel *video_end_time_label;
    QLabel *video_title_label;
    QMenuBar *menubar;
    QMenu *menu_Browse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(909, 588);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1e272e;\n"
""));
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName("actionOpen_Files");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(370, 480, 178, 56));
        buttons_container = new QHBoxLayout(horizontalLayoutWidget);
        buttons_container->setObjectName("buttons_container");
        buttons_container->setContentsMargins(0, 0, 0, 0);
        rewind_button = new QPushButton(horizontalLayoutWidget);
        rewind_button->setObjectName("rewind_button");
        rewind_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));

        buttons_container->addWidget(rewind_button);

        play_button = new QPushButton(horizontalLayoutWidget);
        play_button->setObjectName("play_button");
        play_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));

        buttons_container->addWidget(play_button);

        forward_button = new QPushButton(horizontalLayoutWidget);
        forward_button->setObjectName("forward_button");
        forward_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));

        buttons_container->addWidget(forward_button);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(765, 480, 117, 61));
        video_tools_container = new QHBoxLayout(horizontalLayoutWidget_2);
        video_tools_container->setObjectName("video_tools_container");
        video_tools_container->setContentsMargins(0, 0, 0, 0);
        settings_button = new QPushButton(horizontalLayoutWidget_2);
        settings_button->setObjectName("settings_button");
        settings_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));

        video_tools_container->addWidget(settings_button);

        fullscreen_button = new QPushButton(horizontalLayoutWidget_2);
        fullscreen_button->setObjectName("fullscreen_button");
        fullscreen_button->setAutoFillBackground(false);
        fullscreen_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));
        fullscreen_button->setFlat(false);

        video_tools_container->addWidget(fullscreen_button);

        volume_button = new QPushButton(centralwidget);
        volume_button->setObjectName("volume_button");
        volume_button->setGeometry(QRect(30, 480, 51, 51));
        volume_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(174, 174, 174, 255), stop:0.927885 rgba(255, 94, 87, 255));\n"
"\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: #00d8d6;\n"
"}		"));
        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setGeometry(QRect(90, 490, 151, 22));
        volume_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 3px;\n"
"	width: 150px;\n"
"	background-color: #808e9b;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	margin: -15px 0px;\n"
"	height: 20px;\n"
"	width: 10px;\n"
"	background-color: #ff3f34;\n"
"}"));
        volume_slider->setOrientation(Qt::Horizontal);
        video_container = new QGroupBox(centralwidget);
        video_container->setObjectName("video_container");
        video_container->setGeometry(QRect(9, 9, 891, 401));
        video_container->setStyleSheet(QString::fromUtf8("color: #4bcffa;\n"
"border: transparent;"));
        progress_slider = new QSlider(centralwidget);
        progress_slider->setObjectName("progress_slider");
        progress_slider->setGeometry(QRect(80, 440, 751, 22));
        progress_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 2px;\n"
"	width: 750;\n"
"	background-color: #808e9b;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	height: 2px;\n"
"	width: 25px;\n"
"	border-radius: 15%;\n"
"	background-color: #d2dae2;\n"
"}"));
        progress_slider->setOrientation(Qt::Horizontal);
        video_current_time_label = new QLabel(centralwidget);
        video_current_time_label->setObjectName("video_current_time_label");
        video_current_time_label->setGeometry(QRect(20, 440, 51, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font.setPointSize(8);
        font.setBold(false);
        video_current_time_label->setFont(font);
        video_current_time_label->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        video_end_time_label = new QLabel(centralwidget);
        video_end_time_label->setObjectName("video_end_time_label");
        video_end_time_label->setGeometry(QRect(840, 440, 61, 21));
        video_end_time_label->setFont(font);
        video_end_time_label->setStyleSheet(QString::fromUtf8("color: #d2dae2;"));
        video_title_label = new QLabel(centralwidget);
        video_title_label->setObjectName("video_title_label");
        video_title_label->setGeometry(QRect(20, 420, 881, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font1.setPointSize(8);
        font1.setBold(true);
        video_title_label->setFont(font1);
        video_title_label->setStyleSheet(QString::fromUtf8("color: rgb(143, 149, 154);\n"
"border: transparent;"));
        video_title_label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        video_container->raise();
        horizontalLayoutWidget->raise();
        horizontalLayoutWidget_2->raise();
        volume_button->raise();
        volume_slider->raise();
        progress_slider->raise();
        video_current_time_label->raise();
        video_end_time_label->raise();
        video_title_label->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 909, 26));
        menubar->setStyleSheet(QString::fromUtf8("background-color: #d2dae2;\n"
"color: #1e272e;"));
        menu_Browse = new QMenu(menubar);
        menu_Browse->setObjectName("menu_Browse");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_Browse->menuAction());
        menu_Browse->addSeparator();
        menu_Browse->addAction(actionOpen_Files);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_Files->setText(QCoreApplication::translate("MainWindow", "Open Files", nullptr));
        rewind_button->setText(QString());
        play_button->setText(QString());
        forward_button->setText(QString());
        settings_button->setText(QString());
        fullscreen_button->setText(QString());
        volume_button->setText(QString());
        video_container->setTitle(QString());
        video_current_time_label->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        video_end_time_label->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        video_title_label->setText(QCoreApplication::translate("MainWindow", "Kamve-Be-Kind-[Visualiser]", nullptr));
        menu_Browse->setTitle(QCoreApplication::translate("MainWindow", "&Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
