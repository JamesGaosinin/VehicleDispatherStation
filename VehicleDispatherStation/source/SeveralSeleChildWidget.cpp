#include "SeveralSeleChildWidget.h"

CSeveralSeleChildWidget::CSeveralSeleChildWidget(const QString& strTabName, QWidget *parent)
	: QWidget(parent)
	, m_strTabName(strTabName)
{
	ui.setupUi(this);
}

CSeveralSeleChildWidget::~CSeveralSeleChildWidget()
{
}

QString CSeveralSeleChildWidget::GetTabName()
{
	return m_strTabName;
}
