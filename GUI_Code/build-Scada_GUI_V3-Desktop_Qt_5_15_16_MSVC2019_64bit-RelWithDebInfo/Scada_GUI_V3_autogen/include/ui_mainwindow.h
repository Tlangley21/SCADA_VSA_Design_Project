/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qledlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *dashboard_tab;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;
    QWidget *graph_widget;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *line_6;
    QSpacerItem *horizontalSpacer_2;
    QWidget *historical_tab;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEdit_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QPlainTextEdit *plainTextEdit_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QPlainTextEdit *plainTextEdit_4;
    QWidget *notifications_tab;
    QLedLabel *widget_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_6;
    QTreeView *treeView;
    QWidget *setting__tab;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLedLabel *widget_2;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *tool_run;
    QSpacerItem *horizontalSpacer;
    QFrame *line_3;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_Toolbar;
    QFrame *line_2;
    QFrame *line;
    QFrame *line_5;
    QFrame *line_4;
    QLabel *label_StatusBar;
    QToolButton *toolBar_Stop;
    QToolButton *toolBar_Help;
    QTextEdit *textEdit;
    QToolButton *toolBar_Settings;
    QFrame *line_7;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *system_version_label;
    QFrame *line_8;
    QLabel *label_7;
    QLabel *system_type_label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1242, 803);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 90, 914, 621));
        tabWidget->setMinimumSize(QSize(461, 621));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setMovable(true);
        dashboard_tab = new QWidget();
        dashboard_tab->setObjectName(QString::fromUtf8("dashboard_tab"));
        dashboard_tab->setAutoFillBackground(false);
        horizontalLayout_4 = new QHBoxLayout(dashboard_tab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(dashboard_tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(541, 171));
        groupBox->setMaximumSize(QSize(16777215, 241));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(12, 31, 517, 192));
        tableWidget->setMinimumSize(QSize(517, 0));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout->addWidget(groupBox);

        graph_widget = new QWidget(dashboard_tab);
        graph_widget->setObjectName(QString::fromUtf8("graph_widget"));
        graph_widget->setMinimumSize(QSize(0, 121));
        graph_widget->setAutoFillBackground(true);

        verticalLayout->addWidget(graph_widget);


        horizontalLayout_3->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(dashboard_tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(341, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(94, 16777215));

        verticalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_4->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        line_6 = new QFrame(groupBox_2);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_6);

        horizontalSpacer_2 = new QSpacerItem(203, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        horizontalLayout_3->addWidget(groupBox_2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        tabWidget->addTab(dashboard_tab, QString());
        historical_tab = new QWidget();
        historical_tab->setObjectName(QString::fromUtf8("historical_tab"));
        widget = new QWidget(historical_tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 891, 221));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        textEdit_2 = new QTextEdit(widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setMinimumSize(QSize(71, 0));
        textEdit_2->setMaximumSize(QSize(71, 16777215));
        textEdit_2->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Raised);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(71, 0));
        plainTextEdit->setMaximumSize(QSize(71, 16777215));
        plainTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(plainTextEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFrameShape(QFrame::StyledPanel);
        label_3->setFrameShadow(QFrame::Raised);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_5->addWidget(label_3);

        plainTextEdit_2 = new QPlainTextEdit(widget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setMinimumSize(QSize(111, 0));
        plainTextEdit_2->setMaximumSize(QSize(111, 16777215));
        plainTextEdit_2->setReadOnly(true);

        verticalLayout_5->addWidget(plainTextEdit_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Raised);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_4);

        plainTextEdit_3 = new QPlainTextEdit(widget);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setMinimumSize(QSize(91, 0));
        plainTextEdit_3->setMaximumSize(QSize(91, 16777215));
        plainTextEdit_3->setReadOnly(true);

        verticalLayout_6->addWidget(plainTextEdit_3);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFrameShape(QFrame::StyledPanel);
        label_5->setFrameShadow(QFrame::Raised);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);

        plainTextEdit_4 = new QPlainTextEdit(widget);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setMinimumSize(QSize(104, 0));
        plainTextEdit_4->setReadOnly(true);

        verticalLayout_7->addWidget(plainTextEdit_4);


        horizontalLayout->addLayout(verticalLayout_7);

        tabWidget->addTab(historical_tab, QString());
        notifications_tab = new QWidget();
        notifications_tab->setObjectName(QString::fromUtf8("notifications_tab"));
        widget_3 = new QLedLabel(notifications_tab);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(730, 40, 101, 21));
        widget_3->setAutoFillBackground(true);
        groupBox_3 = new QGroupBox(notifications_tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 50, 401, 341));
        horizontalLayout_6 = new QHBoxLayout(groupBox_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        treeView = new QTreeView(groupBox_3);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout_6->addWidget(treeView);

        tabWidget->addTab(notifications_tab, QString());
        setting__tab = new QWidget();
        setting__tab->setObjectName(QString::fromUtf8("setting__tab"));
        tabWidget->addTab(setting__tab, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 0, 592, 83));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QLedLabel(layoutWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(161, 0));
        widget_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        widget_2->setAutoFillBackground(true);

        gridLayout->addWidget(widget_2, 0, 13, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(68, 46, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 14, 1, 1);

        tool_run = new QToolButton(layoutWidget);
        tool_run->setObjectName(QString::fromUtf8("tool_run"));
        tool_run->setMaximumSize(QSize(35, 23));

        gridLayout->addWidget(tool_run, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(178, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 11, 1, 4);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setMaximumSize(QSize(3, 23));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 6, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setAutoFillBackground(true);
        dateTimeEdit->setReadOnly(true);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(dateTimeEdit, 0, 11, 1, 1);

        label_Toolbar = new QLabel(layoutWidget);
        label_Toolbar->setObjectName(QString::fromUtf8("label_Toolbar"));
        label_Toolbar->setMaximumSize(QSize(45, 23));

        gridLayout->addWidget(label_Toolbar, 0, 0, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(3, 23));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 4, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(3, 23));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 0, 10, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setMaximumSize(QSize(3, 23));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 0, 8, 1, 1);

        label_StatusBar = new QLabel(layoutWidget);
        label_StatusBar->setObjectName(QString::fromUtf8("label_StatusBar"));
        label_StatusBar->setMaximumSize(QSize(75, 29));

        gridLayout->addWidget(label_StatusBar, 1, 0, 1, 3);

        toolBar_Stop = new QToolButton(layoutWidget);
        toolBar_Stop->setObjectName(QString::fromUtf8("toolBar_Stop"));
        toolBar_Stop->setMaximumSize(QSize(38, 23));

        gridLayout->addWidget(toolBar_Stop, 0, 5, 1, 1);

        toolBar_Help = new QToolButton(layoutWidget);
        toolBar_Help->setObjectName(QString::fromUtf8("toolBar_Help"));
        toolBar_Help->setMaximumSize(QSize(39, 23));

        gridLayout->addWidget(toolBar_Help, 0, 9, 1, 1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setMaximumSize(QSize(188, 29));

        gridLayout->addWidget(textEdit, 1, 3, 1, 7);

        toolBar_Settings = new QToolButton(layoutWidget);
        toolBar_Settings->setObjectName(QString::fromUtf8("toolBar_Settings"));
        toolBar_Settings->setMaximumSize(QSize(56, 23));

        gridLayout->addWidget(toolBar_Settings, 0, 7, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 0, 12, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 730, 244, 18));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(false);
        label_6->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_5->addWidget(label_6);

        system_version_label = new QLabel(widget1);
        system_version_label->setObjectName(QString::fromUtf8("system_version_label"));
        system_version_label->setEnabled(false);
        system_version_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_5->addWidget(system_version_label);

        line_8 = new QFrame(widget1);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_8);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setEnabled(false);
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_5->addWidget(label_7);

        system_type_label = new QLabel(widget1);
        system_type_label->setObjectName(QString::fromUtf8("system_type_label"));
        system_type_label->setEnabled(false);
        system_type_label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_5->addWidget(system_type_label);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1242, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Real Time Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Device ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Device ", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Device Location", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Data Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Control Panel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Emergency Stop", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(dashboard_tab), QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        textEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "02/07/2024", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "09:27:43 PM", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Operator/Location", nullptr));
        plainTextEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Admin1(TJ)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Classification", nullptr));
        plainTextEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Interface Event", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Message  ", nullptr));
        plainTextEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Logged on", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(historical_tab), QCoreApplication::translate("MainWindow", "Historical", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Facility Devices and Sensors", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(notifications_tab), QCoreApplication::translate("MainWindow", "Devices/Alerts", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(setting__tab), QCoreApplication::translate("MainWindow", "Settings", nullptr));
        widget_2->setProperty("labelText", QVariant(QCoreApplication::translate("MainWindow", "Server Connection Status:", nullptr)));
        tool_run->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        label_Toolbar->setText(QCoreApplication::translate("MainWindow", "Toolbar: ", nullptr));
        label_StatusBar->setText(QCoreApplication::translate("MainWindow", "Facility Status:", nullptr));
        toolBar_Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        toolBar_Help->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        toolBar_Settings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Version:", nullptr));
        system_version_label->setText(QCoreApplication::translate("MainWindow", "1.0.0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "System Type:", nullptr));
        system_type_label->setText(QCoreApplication::translate("MainWindow", "Facility/Client", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
