#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
    class loginDialog;
}

class loginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit loginDialog(QWidget* parent = nullptr);
    void onLoginButtonClicked();
    bool validateCredentials(const QString& username, const QString& password);

private:
    Ui::loginDialog* ui;
};

#endif // LOGINDIALOG_H
