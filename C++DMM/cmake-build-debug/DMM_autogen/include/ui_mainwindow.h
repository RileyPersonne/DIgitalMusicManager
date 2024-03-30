/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_to_File;
    QAction *actionLoad_from_file;
    QAction *actionImport_Music;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *backward;
    QPushButton *pauseplay;
    QPushButton *forward;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_9;
    QSlider *volume;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QListView *collections;
    QTableWidget *songs;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1006, 626);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionSave_to_File = new QAction(MainWindow);
        actionSave_to_File->setObjectName(QString::fromUtf8("actionSave_to_File"));
        actionLoad_from_file = new QAction(MainWindow);
        actionLoad_from_file->setObjectName(QString::fromUtf8("actionLoad_from_file"));
        actionImport_Music = new QAction(MainWindow);
        actionImport_Music->setObjectName(QString::fromUtf8("actionImport_Music"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        backward = new QPushButton(centralwidget);
        backward->setObjectName(QString::fromUtf8("backward"));

        horizontalLayout_2->addWidget(backward);

        pauseplay = new QPushButton(centralwidget);
        pauseplay->setObjectName(QString::fromUtf8("pauseplay"));

        horizontalLayout_2->addWidget(pauseplay);

        forward = new QPushButton(centralwidget);
        forward->setObjectName(QString::fromUtf8("forward"));

        horizontalLayout_2->addWidget(forward);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(4, 1);

        horizontalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        volume = new QSlider(centralwidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setMaximum(100);
        volume->setValue(50);
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(volume);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setDigitCount(2);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(50.000000000000000));

        verticalLayout->addWidget(lcdNumber);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        horizontalLayout_9->addLayout(verticalLayout);

        horizontalLayout_9->setStretch(0, 1);

        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);
        horizontalLayout_10->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setValue(33);

        gridLayout_2->addWidget(progressBar, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        collections = new QListView(centralwidget);
        collections->setObjectName(QString::fromUtf8("collections"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(collections->sizePolicy().hasHeightForWidth());
        collections->setSizePolicy(sizePolicy2);
        collections->setEditTriggers(QAbstractItemView::NoEditTriggers);
        collections->setTabKeyNavigation(false);

        horizontalLayout_3->addWidget(collections);

        songs = new QTableWidget(centralwidget);
        if (songs->columnCount() < 7)
            songs->setColumnCount(7);
        if (songs->rowCount() < 15)
            songs->setRowCount(15);
        songs->setObjectName(QString::fromUtf8("songs"));
        songs->setAcceptDrops(true);
        songs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        songs->setSelectionMode(QAbstractItemView::SingleSelection);
        songs->setSelectionBehavior(QAbstractItemView::SelectRows);
        songs->setSortingEnabled(true);
        songs->setRowCount(15);
        songs->setColumnCount(7);

        horizontalLayout_3->addWidget(songs);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1006, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionImport_Music);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Digital Music Manager", nullptr));
        actionSave_to_File->setText(QCoreApplication::translate("MainWindow", "Save to File", nullptr));
        actionLoad_from_file->setText(QCoreApplication::translate("MainWindow", "Load from file", nullptr));
        actionImport_Music->setText(QCoreApplication::translate("MainWindow", "Import Music", nullptr));
        backward->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        pauseplay->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        forward->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        progressBar->setFormat(QString());
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
