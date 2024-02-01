#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_main_window.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT // This macro is crucial

public:
    MainWindow(QWidget* parent = nullptr);

private:
    Ui::MainWindow ui;
};

#endif // MAINWINDOW_H
