/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subwindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QTextEdit *Artist;
    QTextEdit *Album;
    QTextEdit *Title;
    QTextEdit *Genre;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *subwindow)
    {
        if (subwindow->objectName().isEmpty())
            subwindow->setObjectName(QString::fromUtf8("subwindow"));
        subwindow->resize(627, 155);
        centralwidget = new QWidget(subwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Artist = new QTextEdit(centralwidget);
        Artist->setObjectName(QString::fromUtf8("Artist"));

        gridLayout->addWidget(Artist, 1, 0, 1, 1);

        Album = new QTextEdit(centralwidget);
        Album->setObjectName(QString::fromUtf8("Album"));

        gridLayout->addWidget(Album, 1, 1, 1, 1);

        Title = new QTextEdit(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));

        gridLayout->addWidget(Title, 1, 2, 1, 1);

        Genre = new QTextEdit(centralwidget);
        Genre->setObjectName(QString::fromUtf8("Genre"));

        gridLayout->addWidget(Genre, 1, 3, 1, 1);

        subwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(subwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 627, 22));
        subwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(subwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        subwindow->setStatusBar(statusbar);

        retranslateUi(subwindow);

        QMetaObject::connectSlotsByName(subwindow);
    } // setupUi

    void retranslateUi(QMainWindow *subwindow)
    {
        subwindow->setWindowTitle(QCoreApplication::translate("subwindow", "subwindow", nullptr));
        label_3->setText(QCoreApplication::translate("subwindow", "Title", nullptr));
        label_4->setText(QCoreApplication::translate("subwindow", "Genre", nullptr));
        label_2->setText(QCoreApplication::translate("subwindow", "Album", nullptr));
        label->setText(QCoreApplication::translate("subwindow", "Artist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subwindow: public Ui_subwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
