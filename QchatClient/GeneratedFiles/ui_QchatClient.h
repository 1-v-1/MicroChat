/********************************************************************************
** Form generated from reading UI file 'QchatClient.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCHATCLIENT_H
#define UI_QCHATCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QchatClientClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QchatClientClass)
    {
        if (QchatClientClass->objectName().isEmpty())
            QchatClientClass->setObjectName(QStringLiteral("QchatClientClass"));
        QchatClientClass->resize(600, 400);
        menuBar = new QMenuBar(QchatClientClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QchatClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QchatClientClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QchatClientClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QchatClientClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QchatClientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QchatClientClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QchatClientClass->setStatusBar(statusBar);

        retranslateUi(QchatClientClass);

        QMetaObject::connectSlotsByName(QchatClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *QchatClientClass)
    {
        QchatClientClass->setWindowTitle(QApplication::translate("QchatClientClass", "QchatClient", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QchatClientClass: public Ui_QchatClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCHATCLIENT_H
