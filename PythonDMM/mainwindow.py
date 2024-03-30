# This Python file uses the following encoding: utf-8
import sys

from PySide6.QtCore import QFile, QIODeviceBase, QUrl, QObject, SIGNAL, QDir
from PySide6.QtMultimedia import QMediaPlayer, QAudioOutput
from PySide6.QtWidgets import QApplication, QMainWindow, QTableWidgetItem, QFrame, QFileSystemModel

# Important:
# You need to run the following command to generate the ui_form.py file
#     pyside6-uic form.ui -o ui_form.py, or
#     pyside2-uic form.ui -o ui_form.py
from ui_form import Ui_MainWindow

class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        self.audio = QMediaPlayer()
        self.output = QAudioOutput()
        self.audio.setAudioOutput(self.output)

        self.collection = QFile("./Collections/default.csv")
        self.track = 0
        self.tracks = 1
        self.playlist = []
        self.loadcollection()
        self.playcurrent = False

        self.ui.pauseplay.clicked.connect(self.playbutton)
        self.ui.forward.clicked.connect(self.forward)
        self.ui.backward.clicked.connect(self.backward)
        self.ui.collections.clicked.connect(self.opencollection)
        self.audio.playingChanged.connect(self.playnext)
        self.audio.positionChanged.connect(self.timerbar)
        self.audio.mediaStatusChanged.connect(self.playnext)
        self.ui.songs.cellActivated.connect(self.songclicked)
        self.timerbar()

        self.ui.volume.valueChanged.connect(self.volume)
        self.volume()

        self.ui.songs.setHorizontalHeaderItem(0,QTableWidgetItem("Author"))
        self.ui.songs.setHorizontalHeaderItem(1,QTableWidgetItem("Album"))
        self.ui.songs.setHorizontalHeaderItem(2,QTableWidgetItem("Title"))
        self.ui.songs.setHorizontalHeaderItem(3,QTableWidgetItem("Genre"))
        self.ui.songs.setHorizontalHeaderItem(4,QTableWidgetItem("Length"))
        self.ui.songs.setHorizontalHeaderItem(5,QTableWidgetItem("Plays"))
        self.ui.songs.setHorizontalHeaderItem(6,QTableWidgetItem("Rating"))

        self.filemodel = QFileSystemModel()
        self.ui.collections.setModel(self.filemodel)
        self.ui.collections.setRootIndex(self.filemodel.index("./Collections"))
        self.filemodel.setRootPath(QDir.currentPath())

    def playbutton(self):
        if self.audio.isPlaying():
            self.audio.pause()
            return
        elif not self.audio.mediaStatus() == QMediaPlayer.MediaStatus.BufferedMedia:
            self.audio.setSource(QUrl.fromLocalFile(self.playlist[self.track].fileName()))
            self.audio.play()
        else:
            self.audio.play()
    def volume(self):
        print(str(self.ui.volume.value()))
        self.output.setVolume(self.ui.volume.value()/50)
        if self.ui.volume.value() < 10:
            self.ui.lcdNumber.setDigitCount(1)
        elif self.ui.volume.value() < 100:
            self.ui.lcdNumber.setDigitCount(2)
        else:
            self.ui.lcdNumber.setDigitCount(3)
        self.ui.lcdNumber.display(self.ui.volume.value())

    def forward(self):
        if not self.track == self.tracks:
            self.track+=1
        self.playcurrent = True
        self.changesong()

    def backward(self):
        if not self.track == 0:
            self.track-=1
        self.playcurrent = True
        self.changesong()



    def changesong(self):
        self.audio.setPosition(self.audio.duration())
        self.ui.songs.selectRow(self.track)

    def loadcollection(self):
        self.playlist = []
        self.ui.songs.clear()
        self.ui.songs.setRowCount(1000)
        self.collection.open(QIODeviceBase.OpenModeFlag.ReadOnly)
        self.tracks = 0
        while True:
            self.buffer = self.collection.readLine()
            self.parsed = self.buffer.split('|')
            for x in range(7):
                self.ui.songs.setItem(self.tracks, x, QTableWidgetItem(str(self.parsed[x], 'utf-8')))
            self.playlist.append(QFile(str(self.parsed[7], 'utf-8')))
            if self.collection.atEnd():
                break
            self.tracks += 1
        self.ui.songs.resizeColumnToContents(0)
        self.ui.songs.resizeColumnToContents(1)
        self.ui.songs.resizeColumnToContents(4)
        self.ui.songs.resizeColumnToContents(5)
        self.ui.songs.resizeColumnToContents(6)
        self.audio.setSource(QUrl.fromLocalFile((self.playlist[0].fileName())))
        self.ui.songs.selectRow(0)

    def opencollection(self, item):
        self.collection.close()
        self.collection.setFileName("./Collections/" + item.data())
        self.collection.open(QIODeviceBase.OpenModeFlag.ReadOnly)
        self.loadcollection()

    def playnext(self, status):
        if self.audio.mediaStatus() == QMediaPlayer.MediaStatus.EndOfMedia and not self.track == self.tracks:
            if self.track != self.tracks and not self.playcurrent:
                self.track+=1
                self.playcurrent = False
            self.audio.setSource(QUrl.fromLocalFile((self.playlist[self.track].fileName())))
            self.audio.play()


    def songclicked(self, row, column):
        self.track = row
        self.playcurrent = True
        self.changesong()



    def timerbar(self):
        self.ui.statusbar.setMaximumSize(0,self.audio.duration() / 1000)
        self.ui.progressBar.setValue(self.audio.position() / 1000)
        seconds = self.audio.position() / 1000

        if (seconds % 60) < 10:
            currenttime = str(int(seconds / 60)) + ":0" + str(int(seconds % 60));
        else:
            currenttime = str(int(seconds / 60)) + ":" + str(int(seconds % 60));

        if ((self.audio.duration() / 1000) % 60) < 10:
            duration = str(int(self.audio.duration() / 60000)) + ":0" + str(int((self.audio.duration() / 1000) % 60))
        else:
            duration = str(int(self.audio.duration() / 60000)) + ":" + str(int((self.audio.duration() / 1000) % 60))

        self.ui.progressBar.setFormat(currenttime + "/" + duration)

if __name__ == "__main__":
    app = QApplication(sys.argv)
    widget = MainWindow()
    widget.show()
    sys.exit(app.exec())
