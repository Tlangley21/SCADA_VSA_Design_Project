#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "qcustomplot.h"
#include <QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateTime(const QDateTime& time);
    void updateGraph(const QVector<QVector<QString>>& sensorData);
    void startRelay1();
    void startRelay2();
    void startRelay3();
    void stopRelay1();
    void stopRelay2();
    void stopRelay3();




private:
    Ui::MainWindow *ui;
    QCustomPlot *customPlot;
    QSerialPort *arduino;


    void addParentAndChildDevice(QStandardItemModel *model, const QString &deviceName, const QStringList &sensorNames);
};
#endif // MAINWINDOW_H
