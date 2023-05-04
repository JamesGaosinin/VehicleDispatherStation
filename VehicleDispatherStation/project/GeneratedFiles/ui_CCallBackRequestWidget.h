/********************************************************************************
** Form generated from reading UI file 'CCallBackRequestWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCALLBACKREQUESTWIDGET_H
#define UI_CCALLBACKREQUESTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCallBackRequestWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CCallBackRequestWidget)
    {
        if (CCallBackRequestWidget->objectName().isEmpty())
            CCallBackRequestWidget->setObjectName(QStringLiteral("CCallBackRequestWidget"));
        CCallBackRequestWidget->resize(500, 344);
        verticalLayout = new QVBoxLayout(CCallBackRequestWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        widget = new QWidget(CCallBackRequestWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(100, 35));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(100, 35));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(100, 35));

        horizontalLayout->addWidget(toolButton_3);

        horizontalSpacer = new QSpacerItem(161, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(CCallBackRequestWidget);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CCallBackRequestWidget);

        QMetaObject::connectSlotsByName(CCallBackRequestWidget);
    } // setupUi

    void retranslateUi(QWidget *CCallBackRequestWidget)
    {
        CCallBackRequestWidget->setWindowTitle(QApplication::translate("CCallBackRequestWidget", "CCallBackRequestWidget", 0));
        toolButton->setText(QApplication::translate("CCallBackRequestWidget", "\347\241\256\350\256\244", 0));
        toolButton_2->setText(QApplication::translate("CCallBackRequestWidget", "\345\210\240\351\231\244", 0));
        toolButton_3->setText(QApplication::translate("CCallBackRequestWidget", "\346\270\205\347\251\272", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CCallBackRequestWidget", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CCallBackRequestWidget", "\347\224\265\345\217\260", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CCallBackRequestWidget", "\350\275\246\347\273\204\345\217\267/\350\275\246\347\253\231", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CCallBackRequestWidget", "\350\275\246\346\254\241\345\217\267", 0));
    } // retranslateUi

};

namespace Ui {
    class CCallBackRequestWidget: public Ui_CCallBackRequestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCALLBACKREQUESTWIDGET_H
