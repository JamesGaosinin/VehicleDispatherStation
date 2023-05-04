#include "FunctionStateWidget.h"
#include <QTimer>
#include <QTime>

CFunctionStateWidget::CFunctionStateWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

CFunctionStateWidget::~CFunctionStateWidget()
{
}

void CFunctionStateWidget::Slot_TimeChanged()
{
	QString strText = QTime::currentTime().toString("hh:mm:ss");
	ui.label_Time->setText(strText);
}

void CFunctionStateWidget::Init()
{
	InitGUI();
	InitConnect();
	InitTimer();
}

void CFunctionStateWidget::InitGUI()
{
	setStyleSheet(QString("color:rgb(0,255,0);"));
	ui.label_Time->setFont(QFont("DS-Digital", 36, 3));
	ui.label_Time->setStyleSheet(QString("background-color:rgb(0,0,0);color:rgb(0,255,0)"));
}

void CFunctionStateWidget::InitConnect()
{

}

void CFunctionStateWidget::InitTimer()
{
	QTimer* timer = new QTimer(this);
	timer->setInterval(500);
	timer->setSingleShot(false);
	connect(timer, &QTimer::timeout, this, &CFunctionStateWidget::Slot_TimeChanged);
	timer->start();
}
