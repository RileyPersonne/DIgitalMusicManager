# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'form.ui'
##
## Created by: Qt User Interface Compiler version 6.6.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QAbstractItemView, QApplication, QGridLayout, QHBoxLayout,
    QHeaderView, QLCDNumber, QLabel, QListView,
    QMainWindow, QMenu, QMenuBar, QProgressBar,
    QPushButton, QSizePolicy, QSlider, QSpacerItem,
    QStatusBar, QTableWidget, QTableWidgetItem, QVBoxLayout,
    QWidget)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(1006, 626)
        sizePolicy = QSizePolicy(QSizePolicy.Policy.MinimumExpanding, QSizePolicy.Policy.MinimumExpanding)
        sizePolicy.setHorizontalStretch(1)
        sizePolicy.setVerticalStretch(1)
        sizePolicy.setHeightForWidth(MainWindow.sizePolicy().hasHeightForWidth())
        MainWindow.setSizePolicy(sizePolicy)
        self.actionSave_to_File = QAction(MainWindow)
        self.actionSave_to_File.setObjectName(u"actionSave_to_File")
        self.actionLoad_from_file = QAction(MainWindow)
        self.actionLoad_from_file.setObjectName(u"actionLoad_from_file")
        self.actionImport_Music = QAction(MainWindow)
        self.actionImport_Music.setObjectName(u"actionImport_Music")
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        sizePolicy.setHeightForWidth(self.centralwidget.sizePolicy().hasHeightForWidth())
        self.centralwidget.setSizePolicy(sizePolicy)
        self.gridLayout_2 = QGridLayout(self.centralwidget)
        self.gridLayout_2.setObjectName(u"gridLayout_2")
        self.horizontalLayout_10 = QHBoxLayout()
        self.horizontalLayout_10.setObjectName(u"horizontalLayout_10")
        self.horizontalSpacer = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_10.addItem(self.horizontalSpacer)

        self.horizontalLayout_2 = QHBoxLayout()
        self.horizontalLayout_2.setObjectName(u"horizontalLayout_2")
        self.horizontalSpacer_14 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_14)

        self.backward = QPushButton(self.centralwidget)
        self.backward.setObjectName(u"backward")

        self.horizontalLayout_2.addWidget(self.backward)

        self.pauseplay = QPushButton(self.centralwidget)
        self.pauseplay.setObjectName(u"pauseplay")

        self.horizontalLayout_2.addWidget(self.pauseplay)

        self.forward = QPushButton(self.centralwidget)
        self.forward.setObjectName(u"forward")

        self.horizontalLayout_2.addWidget(self.forward)

        self.horizontalSpacer_15 = QSpacerItem(40, 20, QSizePolicy.Policy.Expanding, QSizePolicy.Policy.Minimum)

        self.horizontalLayout_2.addItem(self.horizontalSpacer_15)

        self.horizontalLayout_2.setStretch(0, 1)
        self.horizontalLayout_2.setStretch(4, 1)

        self.horizontalLayout_10.addLayout(self.horizontalLayout_2)

        self.horizontalLayout_9 = QHBoxLayout()
        self.horizontalLayout_9.setObjectName(u"horizontalLayout_9")
        self.volume = QSlider(self.centralwidget)
        self.volume.setObjectName(u"volume")
        self.volume.setMaximum(100)
        self.volume.setValue(50)
        self.volume.setOrientation(Qt.Horizontal)

        self.horizontalLayout_9.addWidget(self.volume)

        self.verticalLayout = QVBoxLayout()
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.lcdNumber = QLCDNumber(self.centralwidget)
        self.lcdNumber.setObjectName(u"lcdNumber")
        self.lcdNumber.setDigitCount(2)
        self.lcdNumber.setSegmentStyle(QLCDNumber.Flat)
        self.lcdNumber.setProperty("value", 50.000000000000000)

        self.verticalLayout.addWidget(self.lcdNumber)

        self.label = QLabel(self.centralwidget)
        self.label.setObjectName(u"label")
        self.label.setAlignment(Qt.AlignCenter)

        self.verticalLayout.addWidget(self.label)


        self.horizontalLayout_9.addLayout(self.verticalLayout)

        self.horizontalLayout_9.setStretch(0, 1)

        self.horizontalLayout_10.addLayout(self.horizontalLayout_9)

        self.horizontalLayout_10.setStretch(0, 1)
        self.horizontalLayout_10.setStretch(1, 1)
        self.horizontalLayout_10.setStretch(2, 1)

        self.gridLayout_2.addLayout(self.horizontalLayout_10, 0, 0, 1, 1)

        self.progressBar = QProgressBar(self.centralwidget)
        self.progressBar.setObjectName(u"progressBar")
        sizePolicy1 = QSizePolicy(QSizePolicy.Policy.Preferred, QSizePolicy.Policy.Fixed)
        sizePolicy1.setHorizontalStretch(1)
        sizePolicy1.setVerticalStretch(0)
        sizePolicy1.setHeightForWidth(self.progressBar.sizePolicy().hasHeightForWidth())
        self.progressBar.setSizePolicy(sizePolicy1)
        self.progressBar.setValue(33)

        self.gridLayout_2.addWidget(self.progressBar, 1, 0, 1, 1)

        self.horizontalLayout_3 = QHBoxLayout()
        self.horizontalLayout_3.setObjectName(u"horizontalLayout_3")
        self.collections = QListView(self.centralwidget)
        self.collections.setObjectName(u"collections")
        sizePolicy2 = QSizePolicy(QSizePolicy.Policy.Fixed, QSizePolicy.Policy.Expanding)
        sizePolicy2.setHorizontalStretch(0)
        sizePolicy2.setVerticalStretch(1)
        sizePolicy2.setHeightForWidth(self.collections.sizePolicy().hasHeightForWidth())
        self.collections.setSizePolicy(sizePolicy2)
        self.collections.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.collections.setTabKeyNavigation(False)

        self.horizontalLayout_3.addWidget(self.collections)

        self.songs = QTableWidget(self.centralwidget)
        if (self.songs.columnCount() < 7):
            self.songs.setColumnCount(7)
        __qtablewidgetitem = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(0, __qtablewidgetitem)
        __qtablewidgetitem1 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(1, __qtablewidgetitem1)
        __qtablewidgetitem2 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(2, __qtablewidgetitem2)
        __qtablewidgetitem3 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(3, __qtablewidgetitem3)
        __qtablewidgetitem4 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(4, __qtablewidgetitem4)
        __qtablewidgetitem5 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(5, __qtablewidgetitem5)
        __qtablewidgetitem6 = QTableWidgetItem()
        self.songs.setHorizontalHeaderItem(6, __qtablewidgetitem6)
        if (self.songs.rowCount() < 15):
            self.songs.setRowCount(15)
        self.songs.setObjectName(u"songs")
        self.songs.setAcceptDrops(True)
        self.songs.setEditTriggers(QAbstractItemView.NoEditTriggers)
        self.songs.setSelectionMode(QAbstractItemView.SingleSelection)
        self.songs.setSelectionBehavior(QAbstractItemView.SelectRows)
        self.songs.setSortingEnabled(True)
        self.songs.setRowCount(15)
        self.songs.setColumnCount(7)

        self.horizontalLayout_3.addWidget(self.songs)


        self.gridLayout_2.addLayout(self.horizontalLayout_3, 2, 0, 1, 1)

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(MainWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 1006, 22))
        self.menuMenu = QMenu(self.menubar)
        self.menuMenu.setObjectName(u"menuMenu")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(MainWindow)
        self.statusbar.setObjectName(u"statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.menubar.addAction(self.menuMenu.menuAction())
        self.menuMenu.addAction(self.actionImport_Music)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u"Digital Music Manager", None))
        self.actionSave_to_File.setText(QCoreApplication.translate("MainWindow", u"Save to File", None))
        self.actionLoad_from_file.setText(QCoreApplication.translate("MainWindow", u"Load from file", None))
        self.actionImport_Music.setText(QCoreApplication.translate("MainWindow", u"Import Music", None))
        self.backward.setText(QCoreApplication.translate("MainWindow", u"<<", None))
        self.pauseplay.setText(QCoreApplication.translate("MainWindow", u"Play", None))
        self.forward.setText(QCoreApplication.translate("MainWindow", u">>", None))
        self.label.setText(QCoreApplication.translate("MainWindow", u"Volume", None))
        self.progressBar.setFormat("")
        ___qtablewidgetitem = self.songs.horizontalHeaderItem(0)
        ___qtablewidgetitem.setText(QCoreApplication.translate("MainWindow", u"Author", None));
        ___qtablewidgetitem1 = self.songs.horizontalHeaderItem(1)
        ___qtablewidgetitem1.setText(QCoreApplication.translate("MainWindow", u"Album", None));
        ___qtablewidgetitem2 = self.songs.horizontalHeaderItem(2)
        ___qtablewidgetitem2.setText(QCoreApplication.translate("MainWindow", u"Title", None));
        ___qtablewidgetitem3 = self.songs.horizontalHeaderItem(3)
        ___qtablewidgetitem3.setText(QCoreApplication.translate("MainWindow", u"Genre", None));
        ___qtablewidgetitem4 = self.songs.horizontalHeaderItem(4)
        ___qtablewidgetitem4.setText(QCoreApplication.translate("MainWindow", u"Length", None));
        ___qtablewidgetitem5 = self.songs.horizontalHeaderItem(5)
        ___qtablewidgetitem5.setText(QCoreApplication.translate("MainWindow", u"Plays", None));
        ___qtablewidgetitem6 = self.songs.horizontalHeaderItem(6)
        ___qtablewidgetitem6.setText(QCoreApplication.translate("MainWindow", u"Rating", None));
        self.menuMenu.setTitle(QCoreApplication.translate("MainWindow", u"Menu", None))
    # retranslateUi

