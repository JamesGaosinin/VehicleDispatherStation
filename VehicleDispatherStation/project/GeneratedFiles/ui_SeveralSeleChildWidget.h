/********************************************************************************
** Form generated from reading UI file 'SeveralSeleChildWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVERALSELECHILDWIDGET_H
#define UI_SEVERALSELECHILDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSeveralSeleChildWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_2;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;

    void setupUi(QWidget *CSeveralSeleChildWidget)
    {
        if (CSeveralSeleChildWidget->objectName().isEmpty())
            CSeveralSeleChildWidget->setObjectName(QStringLiteral("CSeveralSeleChildWidget"));
        CSeveralSeleChildWidget->resize(457, 355);
        verticalLayout = new QVBoxLayout(CSeveralSeleChildWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(CSeveralSeleChildWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(100, 70));

        horizontalLayout->addWidget(toolButton);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_3 = new QToolButton(widget_2);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(80, 35));

        gridLayout->addWidget(toolButton_3, 0, 1, 1, 1);

        toolButton_4 = new QToolButton(widget_2);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(80, 35));

        gridLayout->addWidget(toolButton_4, 0, 2, 1, 1);

        toolButton_2 = new QToolButton(widget_2);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(80, 35));

        gridLayout->addWidget(toolButton_2, 0, 0, 1, 1);

        toolButton_5 = new QToolButton(widget_2);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setMinimumSize(QSize(80, 35));

        gridLayout->addWidget(toolButton_5, 1, 0, 1, 1);

        toolButton_6 = new QToolButton(widget_2);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setMinimumSize(QSize(80, 35));

        gridLayout->addWidget(toolButton_6, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(CSeveralSeleChildWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(widget_3);


        retranslateUi(CSeveralSeleChildWidget);

        QMetaObject::connectSlotsByName(CSeveralSeleChildWidget);
    } // setupUi

    void retranslateUi(QWidget *CSeveralSeleChildWidget)
    {
        CSeveralSeleChildWidget->setWindowTitle(QApplication::translate("CSeveralSeleChildWidget", "CSeveralSeleChildWidget", 0));
        toolButton->setText(QApplication::translate("CSeveralSeleChildWidget", "PTT", 0));
        toolButton_3->setText(QApplication::translate("CSeveralSeleChildWidget", "\344\270\212\350\241\214\345\200\274", 0));
        toolButton_4->setText(QApplication::translate("CSeveralSeleChildWidget", "\345\205\250\345\221\274\345\200\274", 0));
        toolButton_2->setText(QApplication::translate("CSeveralSeleChildWidget", "\345\274\200\345\247\213\345\271\277\346\222\255", 0));
        toolButton_5->setText(QApplication::translate("CSeveralSeleChildWidget", "\347\273\223\346\235\237\345\271\277\346\222\255", 0));
        toolButton_6->setText(QApplication::translate("CSeveralSeleChildWidget", "\344\270\213\350\241\214\345\200\274", 0));
    } // retranslateUi

};

namespace Ui {
    class CSeveralSeleChildWidget: public Ui_CSeveralSeleChildWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVERALSELECHILDWIDGET_H
