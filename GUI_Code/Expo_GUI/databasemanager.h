#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include "qtreeview.h"
#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QTableWidget>

class DatabaseManager : public QObject
{
    Q_OBJECT

public:
    explicit DatabaseManager(QTableWidget *tableWidget, QTreeView *treeView, QObject *parent = nullptr);
    ~DatabaseManager();

signals:
    void newSensorDataAvailable(const QVector<QVector<QString>>& data);


public slots:
    void updateSensorDataTable();
    void updateDeviceTreeView();




private:
    QSqlDatabase db;
    QTableWidget *sensorDataTable;
    QTreeView *deviceTreeView;
};

#endif // DATABASEMANAGER_H
