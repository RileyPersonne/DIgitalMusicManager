#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(audio, SIGNAL(stateChanged(QMediaPlayer::State)), this, SLOT(statechanged(QMediaPlayer::State)));
    connect(audio, SIGNAL(positionChanged(qint64)), this, SLOT(updatetimer(qint64)));

    defaultcollection = fopen("../Collections/default.csv", "r");
    collection.open(defaultcollection, QIODevice::ReadWrite);
    loadcollection();
    ui->songs->resizeColumnsToContents();

    ui->collections->setModel(collections);
    collections->setRootPath(QDir::currentPath());
    ui->collections->setRootIndex(collections->index("../Collections"));

    ui->songs->setHorizontalHeaderItem(0, new QTableWidgetItem("Artist"));
    ui->songs->setHorizontalHeaderItem(1, new QTableWidgetItem("Album"));
    ui->songs->setHorizontalHeaderItem(2, new QTableWidgetItem("Title"));
    ui->songs->setHorizontalHeaderItem(3, new QTableWidgetItem("Genre"));
    ui->songs->setHorizontalHeaderItem(4, new QTableWidgetItem("Length"));
    ui->songs->setHorizontalHeaderItem(5, new QTableWidgetItem("Plays"));
    ui->songs->setHorizontalHeaderItem(6, new QTableWidgetItem("Rating"));

}

MainWindow::~MainWindow()
{
    delete audio;
    delete ui;
}

//toggles between starting, playing and pausing
void MainWindow::on_pauseplay_clicked()
{
    switch(audio->state()) {
        case QMediaPlayer::PlayingState:
            audio->stop();
            break;
        case QMediaPlayer::PausedState:
            audio->play();
            break;
        case QMediaPlayer::StoppedState:
            audio->setMedia(QUrl::fromLocalFile(playlist[track]));
            audio->play();
        default:
            break;
    }
}

//when the state of the audioOutput is changed plays the next song;
void MainWindow::statechanged(QMediaPlayer::State state){
    switch(state){
        case QMediaPlayer::StoppedState:
            if(track != tracks && audio->position() == audio->duration()){
                track++;
                changesong();
            }
            break;
        default:
            break;
    }
}

void MainWindow::on_forward_clicked()
{
    if(track != tracks)track++;
    changesong();
}

void MainWindow::on_backward_clicked()
{
    if(track != 0)track--;
    changesong();
}

void MainWindow::on_volume_sliderMoved(int position)
{
    audio->setVolume(position);
    if(position < 10)ui->lcdNumber->setDigitCount(1);
    else if(position < 100)ui->lcdNumber->setDigitCount(2);
    else ui->lcdNumber->setDigitCount(3);
    ui->lcdNumber->display(position);
}

void MainWindow::loadcollection() {
    playlist.clear();
    ui->songs->clear();
    ui->songs->setColumnCount(7);
    ui->songs->setRowCount(1000);
    int i = 0;
    QString buffer = nullptr;
    QStringList parsed;
    do{
        buffer = collection.readLine();
        parsed = buffer.split("|");
        for(int j = 0; j < 7; j++){
            ui->songs->setItem(i,j,new QTableWidgetItem(parsed.at(j)));
        }
        playlist.append(parsed[7]);
        i++;
    }while(!collection.atEnd());
    ui->songs->selectRow(0);
    tracks = i-1;
    ui->songs->setRowCount(i);
    audio->setMedia(QUrl::fromLocalFile(playlist[0]));
}

void MainWindow::changesong() {
    audio->setMedia(QUrl::fromLocalFile(playlist[track]));
    audio->play();
    ui->songs->selectRow(track);
}

void MainWindow::on_songs_cellActivated(int row, int column)
{
    track = row;
    changesong();
}

void MainWindow::updatetimer(qint64 position) {
    ui->progressBar->setMaximum(audio->duration());
    ui->progressBar->setValue(position);
    int seconds = position / 1000;

    QString currenttime;
    QString duration;

    if((seconds % 60) < 10)currenttime = QString::number(seconds / 60) + ":0" + QString::number(seconds % 60);
    else currenttime = QString::number(seconds / 60) + ":" + QString::number(seconds % 60);

    if(((audio->duration()/1000) % 60) < 10)duration = QString::number(audio->duration() / 60000) + ":0" + QString::number((audio->duration()/1000) % 60);
    else duration = QString::number(audio->duration() / 60000) + ":" + QString::number((audio->duration()/1000) % 60);

    ui->progressBar->setFormat(currenttime + "/" + duration);
}

void MainWindow::on_collections_doubleClicked(const QModelIndex &index)
{
    collection.close();
    collection.setFileName("../Collections/" + index.data().toString());
    collection.open(QIODevice::ReadOnly);
    loadcollection();
}