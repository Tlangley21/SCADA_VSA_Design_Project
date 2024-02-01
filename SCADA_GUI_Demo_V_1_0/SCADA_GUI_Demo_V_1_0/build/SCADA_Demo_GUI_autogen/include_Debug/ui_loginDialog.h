/********************************************************************************
** Form generated from reading UI file 'loginDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *username_lineEdit;
    QLabel *label_2;
    QLineEdit *password_lineEdit;
    QSplitter *splitter;
    QPushButton *login_button;
    QPushButton *exit_button;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(215, 114);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginDialog->sizePolicy().hasHeightForWidth());
        loginDialog->setSizePolicy(sizePolicy);
        loginDialog->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(loginDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter_2 = new QSplitter(loginDialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        username_lineEdit = new QLineEdit(layoutWidget);
        username_lineEdit->setObjectName(QString::fromUtf8("username_lineEdit"));
        username_lineEdit->setClearButtonEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, username_lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        password_lineEdit = new QLineEdit(layoutWidget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, password_lineEdit);

        splitter_2->addWidget(layoutWidget);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        login_button = new QPushButton(splitter);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        splitter->addWidget(login_button);
        exit_button = new QPushButton(splitter);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        splitter->addWidget(exit_button);
        splitter_2->addWidget(splitter);

        horizontalLayout->addWidget(splitter_2);


        retranslateUi(loginDialog);

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QCoreApplication::translate("loginDialog", "Security Login", nullptr));
        label->setText(QCoreApplication::translate("loginDialog", "Username: ", nullptr));
        label_2->setText(QCoreApplication::translate("loginDialog", "Password: ", nullptr));
        login_button->setText(QCoreApplication::translate("loginDialog", "Login", nullptr));
        exit_button->setText(QCoreApplication::translate("loginDialog", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
