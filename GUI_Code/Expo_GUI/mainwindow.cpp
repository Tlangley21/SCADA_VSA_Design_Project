#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "databasemanager.h"
#include "ntpclient.h"
#include <QLabel>
#include "qcustomplot.h"
#include <QStandardItemModel>
#include <QTreeView>
#include <QSerialPort>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect clock widget to NTP server
    NtpClient *ntpClient = new NtpClient(this);
    connect(ntpClient, &NtpClient::timeReceived, this, &MainWindow::updateTime);

    // Create the QCustomPlot instance
    customPlot = new QCustomPlot();

    // Create layout and assign new QCustomPlot to respective widget
    QVBoxLayout *layout = new QVBoxLayout(ui->graph_widget); // Create a new layout
    layout->addWidget(customPlot); // Add the customPlot to the layout
    ui->graph_widget->setLayout(layout); // Set the layout to the respective widget
    customPlot->addGraph(); // Graph 0 for temperature
    customPlot->addGraph(); // Graph 1 for humidity



    // Populate data from SQL Database
    DatabaseManager *dbManager = new DatabaseManager(ui->sensorDataTable, ui->deviceTreeView, this);

    // Setup a timer to update the table every 5 seconds
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, dbManager, &DatabaseManager::updateSensorDataTable);
    //connect(timer, &QTimer::timeout, dbManager, &DatabaseManager::updateDeviceTreeView);
    timer->start(5000);

    //connect database data to main window plot
    connect(dbManager, &DatabaseManager::newSensorDataAvailable, this, &MainWindow::updateGraph);

    arduino = new QSerialPort(this);
    arduino->setPortName("/dev/ttyACM0");

    arduino->setBaudRate(QSerialPort::Baud9600);
    if (!arduino->open(QIODevice::ReadWrite)) {
        qDebug() << "Serial not connected to UI";
    }


    //connect buttons to functions below
    connect(ui->pump01Start_button, &QPushButton::clicked, this, &MainWindow::startRelay1);
    connect(ui->pump01Stop_button, &QPushButton::clicked, this, &MainWindow::stopRelay1);
    connect(ui->pump02Start_button, &QPushButton::clicked, this, &MainWindow::startRelay2);
    connect(ui->pump02Stop_button, &QPushButton::clicked, this, &MainWindow::stopRelay2);
    connect(ui->fan01Start_button, &QPushButton::clicked, this, &MainWindow::startRelay3);
    connect(ui->fan01Stop_button, &QPushButton::clicked, this, &MainWindow::stopRelay3);

}
void MainWindow::startRelay1() {
    arduino->write("relay_pump01_on\n");
}

void MainWindow::startRelay2() {
    arduino->write("relay_pump02_on\n");
}

void MainWindow::startRelay3() {
    arduino->write("relay_fan01_on\n");
}

void MainWindow::stopRelay1() {
    arduino->write("relay_pump01_off\n");
}

void MainWindow::stopRelay2() {
    arduino->write("relay_pump02_off\n");
}

void MainWindow::stopRelay3() {
    arduino->write("relay_fan01_off\n");
}

void MainWindow::addParentAndChildDevice(QStandardItemModel *model, const QString &deviceName, const QStringList &sensorNames) {
    QStandardItem *parentItem = new QStandardItem(deviceName);
    parentItem->setData(0, Qt::UserRole); // Optional: Set a default status for the device if needed

    for (const QString &sensorName : sensorNames) {
        QStandardItem *childItem = new QStandardItem(sensorName);
        childItem->setData(0, Qt::UserRole); // Assuming 0 is the default status
        parentItem->appendRow(childItem);
    }

    model->appendRow(parentItem);
}

void MainWindow::updateTime(const QDateTime& time)
{
    //update main clock widget with Google's ntp server time
    qDebug() << "Received time:" << time.toString();
    ui->main_clock_widget->setDateTime(time);
}

void MainWindow::updateGraph(const QVector<QVector<QString>>& sensorData) {
    QVector<double> temperatureDataX, temperatureDataY;
    QVector<double> humidityDataX, humidityDataY;

    for (int i = 0; i < sensorData.size(); ++i) {
        // Assuming that your data vector contains:
        // [device_id, device_name, device_location, data_type, data]
        const QVector<QString>& rowData = sensorData[i];
        QString dataType = rowData[3];
        double value = rowData[4].toDouble();
        int timestamp = i; // Replace with actual timestamp if available

        if (dataType == "Temperature") {
            temperatureDataX.append(timestamp);
            temperatureDataY.append(value);
        } else if (dataType == "Humidity") {
            humidityDataX.append(timestamp);
            humidityDataY.append(value);
        }
    }

    // Assuming customPlot is a member variable or can be accessed here
    customPlot->graph(0)->setData(temperatureDataX, temperatureDataY);
    customPlot->graph(1)->setData(humidityDataX, humidityDataY);
    customPlot->rescaleAxes();
    customPlot->replot();
}


MainWindow::~MainWindow()
{
    delete ui;
}
