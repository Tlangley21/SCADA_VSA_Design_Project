#include <QApplication>
#include "MainWindow.h"
#include "loginDialog.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();
    mainWindow.setDisabled(true);  // Disable the main window initially

    loginDialog login(&mainWindow);
    if (login.exec() == QDialog::Accepted) {
        mainWindow.setEnabled(true);  // Enable the main window on successful login
    }

    return app.exec();
}
