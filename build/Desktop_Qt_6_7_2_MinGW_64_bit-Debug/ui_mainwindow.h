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
    QSlider *progress_slider;
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
    QLabel *jungo_label;
    QLabel *video_title_label;
    QMenuBar *menubar;
    QMenu *menu_Browse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(905, 586);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: black;\n"
""));
        actionOpen_Files = new QAction(MainWindow);
        actionOpen_Files->setObjectName("actionOpen_Files");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        progress_slider = new QSlider(centralwidget);
        progress_slider->setObjectName("progress_slider");
        progress_slider->setGeometry(QRect(10, 450, 891, 22));
        progress_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 2px;\n"
"	width: 850px;\n"
"	background-color: white;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	height: 2px;\n"
"	width: 25px;\n"
"	border: solid 1px red;\n"
"	border-radius: 15%;\n"
"	background-color: yellow;\n"
"}"));
        progress_slider->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(370, 490, 181, 61));
        buttons_container = new QHBoxLayout(horizontalLayoutWidget);
        buttons_container->setObjectName("buttons_container");
        buttons_container->setContentsMargins(0, 0, 0, 0);
        rewind_button = new QPushButton(horizontalLayoutWidget);
        rewind_button->setObjectName("rewind_button");
        rewind_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));

        buttons_container->addWidget(rewind_button);

        play_button = new QPushButton(horizontalLayoutWidget);
        play_button->setObjectName("play_button");
        play_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));

        buttons_container->addWidget(play_button);

        forward_button = new QPushButton(horizontalLayoutWidget);
        forward_button->setObjectName("forward_button");
        forward_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));

        buttons_container->addWidget(forward_button);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(765, 490, 111, 61));
        video_tools_container = new QHBoxLayout(horizontalLayoutWidget_2);
        video_tools_container->setObjectName("video_tools_container");
        video_tools_container->setContentsMargins(0, 0, 0, 0);
        settings_button = new QPushButton(horizontalLayoutWidget_2);
        settings_button->setObjectName("settings_button");
        settings_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));

        video_tools_container->addWidget(settings_button);

        fullscreen_button = new QPushButton(horizontalLayoutWidget_2);
        fullscreen_button->setObjectName("fullscreen_button");
        fullscreen_button->setAutoFillBackground(false);
        fullscreen_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));
        fullscreen_button->setFlat(false);

        video_tools_container->addWidget(fullscreen_button);

        volume_button = new QPushButton(centralwidget);
        volume_button->setObjectName("volume_button");
        volume_button->setGeometry(QRect(30, 490, 55, 50));
        volume_button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	height: 50px;\n"
"	width: 50px;\n"
"	border-radius: 25px;\n"
"	background-color: grey;\n"
"}		"));
        volume_slider = new QSlider(centralwidget);
        volume_slider->setObjectName("volume_slider");
        volume_slider->setGeometry(QRect(100, 500, 160, 22));
        volume_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"	height: 10px;\n"
"	width: 150px;\n"
"	background-color: white;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"	height: 10px;\n"
"	width: 15px;\n"
"	background-color: green;\n"
"}"));
        volume_slider->setOrientation(Qt::Horizontal);
        jungo_label = new QLabel(centralwidget);
        jungo_label->setObjectName("jungo_label");
        jungo_label->setGeometry(QRect(10, 20, 141, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setPointSize(15);
        font.setBold(false);
        jungo_label->setFont(font);
        jungo_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"background-color: red;\n"
""));
        jungo_label->setFrameShape(QFrame::Panel);
        jungo_label->setFrameShadow(QFrame::Raised);
        jungo_label->setLineWidth(4);
        jungo_label->setMidLineWidth(6);
        jungo_label->setAlignment(Qt::AlignCenter);
        jungo_label->setWordWrap(false);
        video_title_label = new QLabel(centralwidget);
        video_title_label->setObjectName("video_title_label");
        video_title_label->setGeometry(QRect(30, 410, 851, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Light")});
        font1.setPointSize(11);
        font1.setBold(true);
        video_title_label->setFont(font1);
        video_title_label->setStyleSheet(QString::fromUtf8("color: white;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 905, 26));
        menubar->setStyleSheet(QString::fromUtf8("background-color: grey;"));
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
        jungo_label->setText(QCoreApplication::translate("MainWindow", "JUNGO", nullptr));
        video_title_label->setText(QCoreApplication::translate("MainWindow", "Kamve-Be-Kind-[Visualiser].mp4", nullptr));
        menu_Browse->setTitle(QCoreApplication::translate("MainWindow", "&Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
