/********************************************************************************
** Form generated from reading UI file 'EmergencyCallWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMERGENCYCALLWIDGET_H
#define UI_EMERGENCYCALLWIDGET_H

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

class Ui_CEmergencyCallWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CEmergencyCallWidget)
    {
        if (CEmergencyCallWidget->objectName().isEmpty())
            CEmergencyCallWidget->setObjectName(QStringLiteral("CEmergencyCallWidget"));
        CEmergencyCallWidget->resize(473, 310);
        verticalLayout = new QVBoxLayout(CEmergencyCallWidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        widget = new QWidget(CEmergencyCallWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setMinimumSize(QSize(80, 35));

        horizontalLayout->addWidget(toolButton);

        toolButton_2 = new QToolButton(widget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(80, 35));

        horizontalLayout->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(80, 35));

        horizontalLayout->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setMinimumSize(QSize(80, 35));

        horizontalLayout->addWidget(toolButton_4);

        horizontalSpacer = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(CEmergencyCallWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(80);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CEmergencyCallWidget);

        QMetaObject::connectSlotsByName(CEmergencyCallWidget);
    } // setupUi

    void retranslateUi(QWidget *CEmergencyCallWidget)
    {
        CEmergencyCallWidget->setWindowTitle(QApplication::translate("CEmergencyCallWidget", "CEmergencyCallWidget", 0));
        toolButton->setText(QApplication::translate("CEmergencyCallWidget", "\347\241\256\345\256\232", 0));
        toolButton_2->setText(QApplication::translate("CEmergencyCallWidget", "\347\273\223\346\235\237\347\264\247\346\200\245", 0));
        toolButton_3->setText(QApplication::translate("CEmergencyCallWidget", "\345\210\240\351\231\244", 0));
        toolButton_4->setText(QApplication::translate("CEmergencyCallWidget", "\346\270\205\347\251\272", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CEmergencyCallWidget", "\346\227\266\351\227\264", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CEmergencyCallWidget", "\351\200\232\350\257\235\347\273\204", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CEmergencyCallWidget", "\347\224\265\345\217\260", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CEmergencyCallWidget", "\347\224\265\345\217\260ID", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CEmergencyCallWidget", "\347\212\266\346\200\201", 0));
    } // retranslateUi

};

namespace Ui {
    class CEmergencyCallWidget: public Ui_CEmergencyCallWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMERGENCYCALLWIDGET_H
