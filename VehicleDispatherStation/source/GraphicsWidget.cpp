#include "GraphicsWidget.h"
#include <QPainter>
#include <QColor>
#include <QMouseEvent>
#include "DatabaseDataManager.h"

const int nStationBoxWidth = 80;
const int nStationBoxHeight = 25;

const int nTrainBoxWidth = 80;
const int nTrainBoxHeight = 20;

CGraphicsWidget::CGraphicsWidget(QWidget *parent)
	: QWidget(parent)
{
}

CGraphicsWidget::~CGraphicsWidget()
{
}

void CGraphicsWidget::paintEvent(QPaintEvent *event)
{
	QList<StationInfo>& lstStationInfo = CDatabaseDataManager::GetInstance()->GetStationInfo();
	QList<TrainInfo>& lstTrainInfo = CDatabaseDataManager::GetInstance()->GetTrainInfo();

	QPainter painter(this);
	DoDrawStation(painter, lstStationInfo);
	DoDrawTrain(painter, lstTrainInfo);
}

void CGraphicsWidget::mousePressEvent(QMouseEvent *event)
{
	QPoint pos = event->pos();

	// 上行
	auto itrUp = m_mapTrainRect_Up.begin();
	for (; itrUp != m_mapTrainRect_Up.end(); ++itrUp)
	{
		QRect rect = itrUp.value().rect;
		if (rect.contains(pos))
		{
			QString strTrainID = itrUp.value().strTrainId;
			if (m_lstSelectTrain.contains(strTrainID))
			{
				for (int i = 0; i < m_lstSelectTrain.size(); ++i)
				{
					if (m_lstSelectTrain.at(i) == strTrainID)
					{
						m_lstSelectTrain.removeAt(i);
					}
				}
			}
			else
			{
				m_lstSelectTrain << strTrainID;
			}
			this->update();
			return;
		}
	}

	// 下行
	auto itrDown = m_mapTrainRect_Down.begin();
	for (; itrDown != m_mapTrainRect_Down.end(); ++itrDown)
	{
		QRect rect = itrDown.value().rect;
		if (rect.contains(pos))
		{
			QString strTrainID = itrDown.value().strTrainId;
			if (m_lstSelectTrain.contains(strTrainID))
			{
				for (int i = 0; i < m_lstSelectTrain.size(); ++i)
				{
					if (m_lstSelectTrain.at(i) == strTrainID)
					{
						m_lstSelectTrain.removeAt(i);
					}
				}
			}
			else
			{
				m_lstSelectTrain << strTrainID;
			}
			this->update();
			return;
		}
	}
}

void CGraphicsWidget::DoDrawStation(QPainter& painter, const QList<StationInfo>& lstStationInfo)
{
	int nWidth = this->width();
	int nHeight = this->height();

	painter.save();

	QPen pen;
	pen.setWidth(3);
	painter.setPen(pen);

	int nWidthBox = nWidth / 4;
	int nWidthBox2 = nWidth / 5;
	int nHeightBox = (nHeight - 100) / 4;
	int nIndex = 0;

	painter.drawLine(20, 40 + nHeightBox / 2, nWidth - 20, 40 + nHeightBox / 2);
	painter.drawLine(20, 60 + nHeightBox / 2 + nStationBoxHeight, nWidth - 20, 60 + nHeightBox / 2 + nStationBoxHeight);
	for (int i = 0; i < 4; ++i)
	{
		QString strStation = lstStationInfo.at(nIndex++).strStationName;
		QRect rectStation = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 50 + nHeightBox/2, nStationBoxWidth, nStationBoxHeight);

		PrivateNode nodeUp;
		PrivateNode nodeDown;
		nodeUp.rect = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 40 + nHeightBox / 2 - nTrainBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		nodeDown.rect = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 60 + nHeightBox / 2 + nStationBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		m_mapTrainRect_Up[strStation] = nodeUp;
		m_mapTrainRect_Down[strStation] = nodeDown;
		
		painter.drawRect(rectStation);
		painter.drawText(rectStation, Qt::AlignCenter, strStation);
	}

	painter.drawLine(20, 40 + nHeightBox / 2 + nHeightBox, nWidth - 20, 40 + nHeightBox / 2 + nHeightBox);
	painter.drawLine(20, 60 + nHeightBox / 2 + nHeightBox + nStationBoxHeight, nWidth - 20, 60 + nHeightBox / 2 + nHeightBox + nStationBoxHeight);
	for (int i = 0; i < 5; ++i)
	{
		QString strStation = lstStationInfo.at(nIndex++).strStationName;
		QRect rectStation = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 50 + nHeightBox / 2 + nHeightBox, nStationBoxWidth, nStationBoxHeight);

		PrivateNode nodeUp;
		PrivateNode nodeDown;
		nodeUp.rect = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 40 + nHeightBox / 2 + nHeightBox - nTrainBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		nodeDown.rect = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 60 + nHeightBox / 2 + nHeightBox + nStationBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		m_mapTrainRect_Up[strStation] = nodeUp;
		m_mapTrainRect_Down[strStation] = nodeDown;

		painter.drawRect(rectStation);
		painter.drawText(rectStation, Qt::AlignCenter, strStation);
	}

	painter.drawLine(20, 40 + nHeightBox / 2 + 2 * nHeightBox, nWidth - 20, 40 + nHeightBox / 2 + 2 * nHeightBox);
	painter.drawLine(20, 60 + nHeightBox / 2 + 2 * nHeightBox + nStationBoxHeight, nWidth - 20, 60 + nHeightBox / 2 + 2 * nHeightBox + nStationBoxHeight);
	for (int i = 0; i < 5; ++i)
	{
		QString strStation = lstStationInfo.at(nIndex++).strStationName;
		QRect rectStation = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 50 + nHeightBox / 2 + 2 * nHeightBox, nStationBoxWidth, nStationBoxHeight);

		PrivateNode nodeUp;
		PrivateNode nodeDown;
		nodeUp.rect = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 40 + nHeightBox / 2 + 2 * nHeightBox - nTrainBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		nodeDown.rect = QRect((nWidthBox2 - nStationBoxWidth) / 2 + i * nWidthBox2, 60 + nHeightBox / 2 + 2 * nHeightBox + nStationBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		m_mapTrainRect_Up[strStation] = nodeUp;
		m_mapTrainRect_Down[strStation] = nodeDown;

		painter.drawRect(rectStation);
		painter.drawText(rectStation, Qt::AlignCenter, strStation);
	}

	painter.drawLine(20, 40 + nHeightBox / 2 + 3 * nHeightBox, nWidth - 20, 40 + nHeightBox / 2 + 3 * nHeightBox);
	painter.drawLine(20, 60 + nHeightBox / 2 + 3 * nHeightBox + nStationBoxHeight, nWidth - 20, 60 + nHeightBox / 2 + 3 * nHeightBox + nStationBoxHeight);
	for (int i = 0; i < 4; ++i)
	{
		QString strStation = lstStationInfo.at(nIndex++).strStationName;
		QRect rectStation = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 50 + nHeightBox / 2 + 3 * nHeightBox, nStationBoxWidth, nStationBoxHeight);

		PrivateNode nodeUp;
		PrivateNode nodeDown;
		nodeUp.rect = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 40 + nHeightBox / 2 + 3 * nHeightBox - nTrainBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		nodeDown.rect = QRect((nWidthBox - nStationBoxWidth) / 2 + i * nWidthBox, 60 + nHeightBox / 2 + 3 * nHeightBox + nStationBoxHeight, nTrainBoxWidth, nTrainBoxHeight);
		m_mapTrainRect_Up[strStation] = nodeUp;
		m_mapTrainRect_Down[strStation] = nodeDown;

		painter.drawRect(rectStation);
		painter.drawText(rectStation, Qt::AlignCenter, strStation);
	}
}

void CGraphicsWidget::DoDrawTrain(QPainter& painter, const QList<TrainInfo>& lstTrainInfo)
{
	for each (TrainInfo var in lstTrainInfo)
	{
		if (var.nUpDownType == 0)
		{
			auto itr = m_mapTrainRect_Up.find(var.strPosition);
			if (itr != m_mapTrainRect_Up.end())
			{
				DrawTrainInfo(painter, itr.value(), var.strTrainId);
			}
		}
		else if (var.nUpDownType == 1)
		{
			auto itr = m_mapTrainRect_Down.find(var.strPosition);
			if (itr != m_mapTrainRect_Down.end())
			{
				DrawTrainInfo(painter, itr.value(), var.strTrainId);
			}
		}
	}
}

void CGraphicsWidget::DrawTrainInfo(QPainter& painter, PrivateNode& node, const QString& strInfo)
{
	if (m_lstSelectTrain.contains(strInfo))
	{
		QPen pen(QColor(0, 255, 0));
		QBrush brush(QColor(0, 255, 0));
		painter.setBrush(brush);
		painter.setPen(pen);
	}
	else
	{
		QPen pen(QColor(253, 180, 41));
		QBrush brush(QColor(253, 180, 41));
		painter.setBrush(brush);
		painter.setPen(pen);
	}
	painter.drawRect(node.rect);

	QPen pen2(QColor(0, 0, 0));
	painter.setPen(pen2);
	QRectF rectTemp = node.rect;
	rectTemp.setWidth(node.rect.width() / 3);
	QPixmap pixMap(":/img/Train.png");
	QRectF source(0.0, 0.0, 206.0, 200.0);
	painter.drawPixmap(rectTemp, pixMap, source);
	rectTemp.setX(node.rect.x() + node.rect.width() / 3);
	rectTemp.setWidth(node.rect.width() / 3 * 2);
	painter.drawText(rectTemp, Qt::AlignCenter, strInfo);
	node.strTrainId = strInfo;
}
