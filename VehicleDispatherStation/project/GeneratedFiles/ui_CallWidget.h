/********************************************************************************
** Form generated from reading UI file 'CallWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLWIDGET_H
#define UI_CALLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCallWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *Btn_Voice;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QFrame *frame_Info;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QLabel *label_4;
    QFrame *frame;

    void setupUi(QFrame *CCallWidget)
    {
        if (CCallWidget->objectName().isEmpty())
            CCallWidget->setObjectName(QStringLiteral("CCallWidget"));
        CCallWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(CCallWidget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widget = new QWidget(CCallWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(CCallWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Btn_Voice = new QToolButton(widget_2);
        Btn_Voice->setObjectName(QStringLiteral("Btn_Voice"));
        Btn_Voice->setMinimumSize(QSize(100, 70));

        horizontalLayout_4->addWidget(Btn_Voice);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        toolButton_2 = new QToolButton(widget_3);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(100, 35));

        gridLayout->addWidget(toolButton_2, 0, 0, 1, 2);

        toolButton_3 = new QToolButton(widget_3);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setMinimumSize(QSize(100, 35));

        gridLayout->addWidget(toolButton_3, 0, 2, 1, 1);

        horizontalSlider = new QSlider(widget_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setMinimumSize(QSize(150, 0));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 1, 1, 1, 2);


        horizontalLayout_4->addWidget(widget_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_2);

        widget_4 = new QWidget(CCallWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_Info = new QFrame(widget_4);
        frame_Info->setObjectName(QStringLiteral("frame_Info"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_Info->sizePolicy().hasHeightForWidth());
        frame_Info->setSizePolicy(sizePolicy3);
        frame_Info->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame_Info->setFrameShape(QFrame::Panel);
        frame_Info->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame_Info);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        label_8 = new QLabel(frame_Info);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label_10 = new QLabel(frame_Info);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 2, 1, 1, 1);

        label_9 = new QLabel(frame_Info);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 1, 1, 1);

        label_6 = new QLabel(frame_Info);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(frame_Info);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        label_7 = new QLabel(frame_Info);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);


        verticalLayout->addWidget(frame_Info);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(9);
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);

        frame = new QFrame(widget_4);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(frame);

        verticalLayout->setStretch(0, 4);

        verticalLayout_2->addWidget(widget_4);


        retranslateUi(CCallWidget);

        QMetaObject::connectSlotsByName(CCallWidget);
    } // setupUi

    void retranslateUi(QFrame *CCallWidget)
    {
        CCallWidget->setWindowTitle(QApplication::translate("CCallWidget", "CCallWidget", 0));
        label->setText(QApplication::translate("CCallWidget", "\347\273\204\345\221\274\357\274\232", 0));
        label_2->setText(QApplication::translate("CCallWidget", "4-\346\255\243\347\272\277\350\241\214\350\275\246\347\273\204 [6048600]", 0));
        Btn_Voice->setText(QApplication::translate("CCallWidget", "PTT", 0));
        label_3->setText(QApplication::translate("CCallWidget", "\345\211\257\351\200\211\351\237\263\351\207\217", 0));
        toolButton_2->setText(QApplication::translate("CCallWidget", "\347\264\247\346\200\245\345\221\274\345\217\253", 0));
        toolButton_3->setText(QApplication::translate("CCallWidget", "\351\200\211\346\213\251", 0));
        label_8->setText(QApplication::translate("CCallWidget", "132", 0));
        label_10->setText(QApplication::translate("CCallWidget", "14\357\274\23215\357\274\23217", 0));
        label_9->setText(QApplication::translate("CCallWidget", "\346\227\240\344\272\272", 0));
        label_6->setText(QApplication::translate("CCallWidget", "\346\211\200\346\234\211\350\200\205", 0));
        label_5->setText(QApplication::translate("CCallWidget", "\351\200\232\350\257\235\346\235\203", 0));
        label_7->setText(QApplication::translate("CCallWidget", "\346\227\266  \351\227\264", 0));
        label_4->setText(QApplication::translate("CCallWidget", "\347\273\204\346\210\220\345\221\230\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class CCallWidget: public Ui_CCallWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLWIDGET_H
