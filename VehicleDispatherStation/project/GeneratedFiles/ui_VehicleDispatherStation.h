/********************************************************************************
** Form generated from reading UI file 'VehicleDispatherStation.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEDISPATHERSTATION_H
#define UI_VEHICLEDISPATHERSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "CallWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CVehicleDispatherStationClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_RL;
    QFrame *frame_L;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter_UD;
    QFrame *Client_1;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget_1;
    QFrame *Client_3;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget_3;
    QFrame *frame_R;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QFrame *Client_2;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget_2;
    CCallWidget *Client_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CVehicleDispatherStationClass)
    {
        if (CVehicleDispatherStationClass->objectName().isEmpty())
            CVehicleDispatherStationClass->setObjectName(QStringLiteral("CVehicleDispatherStationClass"));
        CVehicleDispatherStationClass->resize(870, 675);
        centralWidget = new QWidget(CVehicleDispatherStationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        splitter_RL = new QSplitter(centralWidget);
        splitter_RL->setObjectName(QStringLiteral("splitter_RL"));
        splitter_RL->setOrientation(Qt::Horizontal);
        splitter_RL->setOpaqueResize(true);
        splitter_RL->setHandleWidth(3);
        frame_L = new QFrame(splitter_RL);
        frame_L->setObjectName(QStringLiteral("frame_L"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_L->sizePolicy().hasHeightForWidth());
        frame_L->setSizePolicy(sizePolicy);
        frame_L->setFrameShape(QFrame::StyledPanel);
        frame_L->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_L);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter_UD = new QSplitter(frame_L);
        splitter_UD->setObjectName(QStringLiteral("splitter_UD"));
        splitter_UD->setOrientation(Qt::Vertical);
        splitter_UD->setHandleWidth(3);
        Client_1 = new QFrame(splitter_UD);
        Client_1->setObjectName(QStringLiteral("Client_1"));
        Client_1->setFrameShape(QFrame::StyledPanel);
        Client_1->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(Client_1);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget_1 = new QTabWidget(Client_1);
        tabWidget_1->setObjectName(QStringLiteral("tabWidget_1"));
        tabWidget_1->setTabPosition(QTabWidget::South);
        tabWidget_1->setElideMode(Qt::ElideNone);

        verticalLayout_3->addWidget(tabWidget_1);

        splitter_UD->addWidget(Client_1);
        Client_3 = new QFrame(splitter_UD);
        Client_3->setObjectName(QStringLiteral("Client_3"));
        Client_3->setFrameShape(QFrame::StyledPanel);
        Client_3->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(Client_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tabWidget_3 = new QTabWidget(Client_3);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setTabPosition(QTabWidget::South);

        verticalLayout_5->addWidget(tabWidget_3);

        splitter_UD->addWidget(Client_3);

        verticalLayout_2->addWidget(splitter_UD);

        verticalLayout_2->setStretch(0, 2);
        splitter_RL->addWidget(frame_L);
        frame_R = new QFrame(splitter_RL);
        frame_R->setObjectName(QStringLiteral("frame_R"));
        sizePolicy.setHeightForWidth(frame_R->sizePolicy().hasHeightForWidth());
        frame_R->setSizePolicy(sizePolicy);
        frame_R->setFrameShape(QFrame::StyledPanel);
        frame_R->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_R);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(frame_R);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(3);
        Client_2 = new QFrame(splitter);
        Client_2->setObjectName(QStringLiteral("Client_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Client_2->sizePolicy().hasHeightForWidth());
        Client_2->setSizePolicy(sizePolicy1);
        Client_2->setFrameShape(QFrame::StyledPanel);
        Client_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(Client_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        tabWidget_2 = new QTabWidget(Client_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setTabPosition(QTabWidget::South);

        verticalLayout_4->addWidget(tabWidget_2);

        splitter->addWidget(Client_2);
        Client_4 = new CCallWidget(splitter);
        Client_4->setObjectName(QStringLiteral("Client_4"));
        sizePolicy1.setHeightForWidth(Client_4->sizePolicy().hasHeightForWidth());
        Client_4->setSizePolicy(sizePolicy1);
        Client_4->setFrameShape(QFrame::StyledPanel);
        Client_4->setFrameShadow(QFrame::Raised);
        splitter->addWidget(Client_4);

        verticalLayout->addWidget(splitter);

        verticalLayout->setStretch(0, 1);
        splitter_RL->addWidget(frame_R);

        horizontalLayout->addWidget(splitter_RL);

        CVehicleDispatherStationClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CVehicleDispatherStationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 870, 23));
        CVehicleDispatherStationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CVehicleDispatherStationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CVehicleDispatherStationClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CVehicleDispatherStationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CVehicleDispatherStationClass->setStatusBar(statusBar);

        retranslateUi(CVehicleDispatherStationClass);

        tabWidget_1->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CVehicleDispatherStationClass);
    } // setupUi

    void retranslateUi(QMainWindow *CVehicleDispatherStationClass)
    {
        CVehicleDispatherStationClass->setWindowTitle(QApplication::translate("CVehicleDispatherStationClass", "CVehicleDispatherStation", 0));
    } // retranslateUi

};

namespace Ui {
    class CVehicleDispatherStationClass: public Ui_CVehicleDispatherStationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEDISPATHERSTATION_H
