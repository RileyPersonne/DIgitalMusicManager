#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
using namespace std;
#include <QMainWindow>
#include <QtMultimedia/QtMultimedia>
#include <QTableWidgetItem>
#include <QFileSystemModel>

//#include "subwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QMediaPlayer* audio = new QMediaPlayer;

    // list of songs
    QStringList playlist;
    //song number
    int track = 0;
    //total songs in collection
    int tracks = 0;

    FILE* defaultcollection;
    QFile collection;

    QFileSystemModel* collections = new QFileSystemModel(this);

    //wizard* wizard = new wizard();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_volume_sliderMoved(int position);

    void on_backward_clicked();

    void on_forward_clicked();

    void on_pauseplay_clicked();

    void statechanged(QMediaPlayer::State);

    void changesong();

    void loadcollection();

    void on_songs_cellActivated(int row, int column);

    void updatetimer(qint64);

    void on_collections_doubleClicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
