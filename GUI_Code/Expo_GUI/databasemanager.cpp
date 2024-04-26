#include "databasemanager.h"
#include "qdebug.h"
#include <QStandardItemModel>
#include <QtSql/QSqlQuery>
#include <QTableWidgetItem>
#include <QSqlRecord>
#include <QSqlQuery>

DatabaseManager::DatabaseManager(QTableWidget *tableWidget, QTreeView *treeView, QObject *parent)
    : QObject(parent), sensorDataTable(tableWidget), deviceTreeView(treeView)
{
    // Initialize the database connection
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("sensor_readings");
    db.setUserName("postgres");
    db.setPassword("admin1");
    db.setPort(5432);

    if (!db.open()) {
        // Handle error - could not open connection
        qWarning("Failed to connect to the database!");
    }

    //initialize treeView model
    QStandardItemModel *treeModel = new QStandardItemModel(this);
    deviceTreeView->setModel(treeModel);

    //set headers for the treeModel
    treeModel->setHorizontalHeaderLabels(QStringList() << "Name" << "Location" << "Status" << "Last Update");
}

DatabaseManager::~DatabaseManager()
{
    if (db.isOpen()) {
        db.close();
    }
}

void DatabaseManager::updateSensorDataTable()
{
    if (sensorDataTable == nullptr) {
        qWarning("Sensor data table widget is not set!");
        return;
    }

    QSqlQuery query(db);
    QVector<QVector<QString>> allSensorData; // Declare this before the if statement

    if (query.exec("SELECT device_id, device_name, device_location, data_type, data FROM sensor_data")) {
        // Clear the existing rows
        sensorDataTable->setRowCount(0);

        while (query.next()) {
            QVector<QString> sensorData;
            int newRow = sensorDataTable->rowCount();
            sensorDataTable->insertRow(newRow);

            // Iterate over each column
            for (int i = 0; i < query.record().count(); ++i) {
                // Get the string representation of the current field in the record
                QString fieldValue = query.value(i).toString();
                sensorData.append(fieldValue); // Append the field value to sensorData

                // Create a new QTableWidgetItem with the field value
                QTableWidgetItem *item = new QTableWidgetItem(fieldValue);
                // Set the item in the correct column of the new row
                sensorDataTable->setItem(newRow, i, item);
            }

            // Append the collected row data to allSensorData
            allSensorData.append(sensorData);
        }

        // Emit the signal with all the data after fetching it
        emit newSensorDataAvailable(allSensorData);
    } else {
        // Handle query error
        qWarning() << "Error populating sensorDataTable widget";
    }
}

void DatabaseManager::updateDeviceTreeView() {
    auto *model = dynamic_cast<QStandardItemModel*>(deviceTreeView->model());
    if (!model) {
        qWarning() << "TreeView model is not a QStandardItemModel!";
        return;
    }

    model->clear(); // Clear existing items
    model->setHorizontalHeaderLabels(QStringList() << "Device ID" << "Location" << "Status" << "Last Update");

    QSqlQuery query(db);
    if (!query.exec("SELECT device_name, device_location FROM devices")) {
        qWarning() << "Database query failed for treeView";
        return;
    }

    while (query.next()) {
        QList<QStandardItem*> rowItems;
        for (int i = 0; i < query.record().count(); ++i) {
            rowItems << new QStandardItem(query.value(i).toString());
        }
        model->appendRow(rowItems);
    }
}
