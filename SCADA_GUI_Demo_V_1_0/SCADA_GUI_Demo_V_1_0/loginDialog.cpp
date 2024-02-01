#include "loginDialog.h"
#include "ui_loginDialog.h"
#include "ui_loginDialog.h" //not needed for release
#include "MainWindow.h" // Include your main window header
#include <QMessageBox>
#include <QWidget>

loginDialog::loginDialog(QWidget* parent) : QDialog(parent), ui(new Ui::loginDialog) {
    ui->setupUi(this);

    // Connect the clicked signal of the login button to the onLoginButtonClicked slot
    connect(ui->login_button, &QPushButton::clicked, this, &loginDialog::onLoginButtonClicked);
}

void loginDialog::onLoginButtonClicked() {
    QString username = ui->username_lineEdit->text();
    QString password = ui->password_lineEdit->text();

    if (validateCredentials(username, password)) {
        accept();  // Close the dialog and return QDialog::Accepted
    }
    else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}

bool loginDialog::validateCredentials(const QString& username, const QString& password) {
    // Implement validation logic here
    // For now, any non-empty username and password are valid
    return !username.isEmpty() && !password.isEmpty();
}

//TODO: Add a slot for the exit button

//TODO: add a way to store valid usernames and passwords

//TODO: add a way to import new users 

//TODO: add a way to remove users

//TODO: add user levels