/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPad_A;
    QAction *actionPad_B;
    QAction *actionPad_C;
    QAction *actionWindow_Settings;
    QAction *actionConnection_Settings;
    QAction *actionSecurity_Settings;
    QAction *actionChange_Clearance_Level;
    QAction *actionLogin;
    QAction *actionLogout;
    QAction *actionClient_1;
    QAction *actionClient_2;
    QAction *actionDual_View;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *line;
    QWidget *client_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *client_2_label;
    QFrame *line_3;
    QGridLayout *gridLayout_3;
    QCheckBox *client2_info_select;
    QLabel *client2_log_label;
    QCheckBox *client2_usr_act_select;
    QCheckBox *client2_error_select;
    QTableView *client2_tableview;
    QWidget *client_1;
    QVBoxLayout *verticalLayout;
    QLabel *client_1_label;
    QFrame *line_2;
    QGridLayout *gridLayout_2;
    QLabel *client1_log_label;
    QTableView *client1_tableview;
    QCheckBox *client1_usr_act_select;
    QCheckBox *client1_error_select;
    QCheckBox *client1_info_select;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuView;
    QMenu *menuFacilities;
    QMenu *menuSettings;
    QMenu *menuSecurity;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(988, 722);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 75, 100);"));
        actionPad_A = new QAction(MainWindow);
        actionPad_A->setObjectName(QString::fromUtf8("actionPad_A"));
        actionPad_B = new QAction(MainWindow);
        actionPad_B->setObjectName(QString::fromUtf8("actionPad_B"));
        actionPad_C = new QAction(MainWindow);
        actionPad_C->setObjectName(QString::fromUtf8("actionPad_C"));
        actionWindow_Settings = new QAction(MainWindow);
        actionWindow_Settings->setObjectName(QString::fromUtf8("actionWindow_Settings"));
        actionWindow_Settings->setShortcutContext(Qt::ApplicationShortcut);
        actionConnection_Settings = new QAction(MainWindow);
        actionConnection_Settings->setObjectName(QString::fromUtf8("actionConnection_Settings"));
        actionSecurity_Settings = new QAction(MainWindow);
        actionSecurity_Settings->setObjectName(QString::fromUtf8("actionSecurity_Settings"));
        actionChange_Clearance_Level = new QAction(MainWindow);
        actionChange_Clearance_Level->setObjectName(QString::fromUtf8("actionChange_Clearance_Level"));
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionClient_1 = new QAction(MainWindow);
        actionClient_1->setObjectName(QString::fromUtf8("actionClient_1"));
        actionClient_2 = new QAction(MainWindow);
        actionClient_2->setObjectName(QString::fromUtf8("actionClient_2"));
        actionDual_View = new QAction(MainWindow);
        actionDual_View->setObjectName(QString::fromUtf8("actionDual_View"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        client_2 = new QWidget(centralwidget);
        client_2->setObjectName(QString::fromUtf8("client_2"));
        client_2->setAutoFillBackground(false);
        client_2->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 117, 117);"));
        verticalLayout_2 = new QVBoxLayout(client_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        client_2_label = new QLabel(client_2);
        client_2_label->setObjectName(QString::fromUtf8("client_2_label"));
        client_2_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(client_2_label);

        line_3 = new QFrame(client_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        client2_info_select = new QCheckBox(client_2);
        client2_info_select->setObjectName(QString::fromUtf8("client2_info_select"));

        gridLayout_3->addWidget(client2_info_select, 0, 1, 1, 1);

        client2_log_label = new QLabel(client_2);
        client2_log_label->setObjectName(QString::fromUtf8("client2_log_label"));
        QFont font;
        font.setUnderline(true);
        client2_log_label->setFont(font);
        client2_log_label->setAutoFillBackground(false);
        client2_log_label->setLineWidth(2);
        client2_log_label->setTextFormat(Qt::RichText);

        gridLayout_3->addWidget(client2_log_label, 0, 0, 1, 1);

        client2_usr_act_select = new QCheckBox(client_2);
        client2_usr_act_select->setObjectName(QString::fromUtf8("client2_usr_act_select"));

        gridLayout_3->addWidget(client2_usr_act_select, 0, 2, 1, 1);

        client2_error_select = new QCheckBox(client_2);
        client2_error_select->setObjectName(QString::fromUtf8("client2_error_select"));

        gridLayout_3->addWidget(client2_error_select, 0, 3, 1, 1);

        client2_tableview = new QTableView(client_2);
        client2_tableview->setObjectName(QString::fromUtf8("client2_tableview"));
        client2_tableview->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        client2_tableview->setFrameShape(QFrame::WinPanel);
        client2_tableview->setFrameShadow(QFrame::Sunken);
        client2_tableview->setLineWidth(1);
        client2_tableview->setMidLineWidth(0);

        gridLayout_3->addWidget(client2_tableview, 1, 0, 1, 4);


        verticalLayout_2->addLayout(gridLayout_3);


        gridLayout->addWidget(client_2, 0, 2, 1, 1);

        client_1 = new QWidget(centralwidget);
        client_1->setObjectName(QString::fromUtf8("client_1"));
        client_1->setAutoFillBackground(false);
        client_1->setStyleSheet(QString::fromUtf8("background-color: rgb(117, 117, 117);\n"
""));
        verticalLayout = new QVBoxLayout(client_1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        client_1_label = new QLabel(client_1);
        client_1_label->setObjectName(QString::fromUtf8("client_1_label"));
        client_1_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(client_1_label);

        line_2 = new QFrame(client_1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        client1_log_label = new QLabel(client_1);
        client1_log_label->setObjectName(QString::fromUtf8("client1_log_label"));
        client1_log_label->setFont(font);
        client1_log_label->setAutoFillBackground(false);
        client1_log_label->setLineWidth(2);
        client1_log_label->setTextFormat(Qt::RichText);

        gridLayout_2->addWidget(client1_log_label, 0, 0, 1, 1);

        client1_tableview = new QTableView(client_1);
        client1_tableview->setObjectName(QString::fromUtf8("client1_tableview"));
        client1_tableview->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(client1_tableview, 1, 0, 1, 4);

        client1_usr_act_select = new QCheckBox(client_1);
        client1_usr_act_select->setObjectName(QString::fromUtf8("client1_usr_act_select"));

        gridLayout_2->addWidget(client1_usr_act_select, 0, 2, 1, 1);

        client1_error_select = new QCheckBox(client_1);
        client1_error_select->setObjectName(QString::fromUtf8("client1_error_select"));

        gridLayout_2->addWidget(client1_error_select, 0, 3, 1, 1);

        client1_info_select = new QCheckBox(client_1);
        client1_info_select->setObjectName(QString::fromUtf8("client1_info_select"));

        gridLayout_2->addWidget(client1_info_select, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        gridLayout->addWidget(client_1, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 988, 22));
        menuBar->setAutoFillBackground(false);
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        menuView = new QMenu(menuHome);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFacilities = new QMenu(menuBar);
        menuFacilities->setObjectName(QString::fromUtf8("menuFacilities"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuSecurity = new QMenu(menuBar);
        menuSecurity->setObjectName(QString::fromUtf8("menuSecurity"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuSecurity->menuAction());
        menuBar->addAction(menuFacilities->menuAction());
        menuHome->addAction(menuView->menuAction());
        menuView->addAction(actionClient_1);
        menuView->addAction(actionClient_2);
        menuView->addAction(actionDual_View);
        menuFacilities->addAction(actionPad_A);
        menuFacilities->addAction(actionPad_B);
        menuFacilities->addAction(actionPad_C);
        menuSettings->addAction(actionWindow_Settings);
        menuSettings->addAction(actionConnection_Settings);
        menuSettings->addAction(actionSecurity_Settings);
        menuSecurity->addAction(actionChange_Clearance_Level);
        menuSecurity->addAction(actionLogin);
        menuSecurity->addAction(actionLogout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server UI (DEMO)", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Server UI</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPad_A->setText(QCoreApplication::translate("MainWindow", "Pad A", nullptr));
        actionPad_B->setText(QCoreApplication::translate("MainWindow", "Pad B", nullptr));
        actionPad_C->setText(QCoreApplication::translate("MainWindow", "Pad C", nullptr));
        actionWindow_Settings->setText(QCoreApplication::translate("MainWindow", "Window Settings", nullptr));
        actionConnection_Settings->setText(QCoreApplication::translate("MainWindow", "Connection Settings", nullptr));
        actionSecurity_Settings->setText(QCoreApplication::translate("MainWindow", "Security Settings", nullptr));
        actionChange_Clearance_Level->setText(QCoreApplication::translate("MainWindow", "Change Clearance Level", nullptr));
        actionLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        actionLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        actionClient_1->setText(QCoreApplication::translate("MainWindow", "Client 1", nullptr));
        actionClient_2->setText(QCoreApplication::translate("MainWindow", "Client 2", nullptr));
        actionDual_View->setText(QCoreApplication::translate("MainWindow", "Dual View", nullptr));
        client_2_label->setText(QCoreApplication::translate("MainWindow", "Client 2", nullptr));
        client2_info_select->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        client2_log_label->setText(QCoreApplication::translate("MainWindow", "Logs:", nullptr));
        client2_usr_act_select->setText(QCoreApplication::translate("MainWindow", "User Activity", nullptr));
        client2_error_select->setText(QCoreApplication::translate("MainWindow", "Errors/Alerts", nullptr));
        client_1_label->setText(QCoreApplication::translate("MainWindow", "Client 1", nullptr));
        client1_log_label->setText(QCoreApplication::translate("MainWindow", "Logs:", nullptr));
        client1_usr_act_select->setText(QCoreApplication::translate("MainWindow", "User Activity", nullptr));
        client1_error_select->setText(QCoreApplication::translate("MainWindow", "Errors/Alerts", nullptr));
        client1_info_select->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        menuHome->setTitle(QCoreApplication::translate("MainWindow", "Home", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuFacilities->setTitle(QCoreApplication::translate("MainWindow", "Facilities", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuSecurity->setTitle(QCoreApplication::translate("MainWindow", "Security", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
