#pragma once

#include <QWidget>
#include "ui_SeveralSeleChildWidget.h"

class CSeveralSeleChildWidget : public QWidget
{
	Q_OBJECT

public:
	CSeveralSeleChildWidget(const QString& strTabName, QWidget *parent = Q_NULLPTR);
	~CSeveralSeleChildWidget();

	QString GetTabName();

private:
	Ui::CSeveralSeleChildWidget ui;
	QString m_strTabName;
};
