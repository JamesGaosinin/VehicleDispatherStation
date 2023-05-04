#pragma once

#include <QWidget>
#include <QMap>
#include <QRect>
#include "CommanHead.h"

class QPaintEvent;
class QMouseEvent;

class CGraphicsWidget : public QWidget
{
	Q_OBJECT
private:
	struct PrivateNode
	{
		QString strTrainId;
		QRect rect;
	};

public:
	CGraphicsWidget(QWidget *parent);
	~CGraphicsWidget();

protected:
	virtual void paintEvent(QPaintEvent *event) override;
	virtual void mousePressEvent(QMouseEvent *event) override;

private:
	void DoDrawStation(QPainter& painter, const QList<StationInfo>& lstStationInfo);
	void DoDrawTrain(QPainter& painter, const QList<TrainInfo>& lstTrainInfo);
	void DrawTrainInfo(QPainter& painter, PrivateNode& node, const QString& strInfo);

private:
	QMap<QString, PrivateNode> m_mapTrainRect_Up;		// 上行
	QMap<QString, PrivateNode> m_mapTrainRect_Down;		// 下行
	QList<QString> m_lstSelectTrain;					// 被选中的列车
};
