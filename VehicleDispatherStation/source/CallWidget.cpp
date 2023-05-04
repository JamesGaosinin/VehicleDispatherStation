#include "CallWidget.h"

CCallWidget::CCallWidget(QWidget *parent)
	: QFrame(parent)
{
	ui.setupUi(this);
	Init();
}

CCallWidget::~CCallWidget()
{
}

void CCallWidget::Slot_BtnVoicePressed()
{
	m_bBtnVoicePressed = true;
	// ��ʼ���� TODO
}

void CCallWidget::Slot_BtnVoiceReleased()
{
	m_bBtnVoicePressed = false;
	// �������� TODO
}

void CCallWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CCallWidget::InitGUI()
{

}

void CCallWidget::InitConnect()
{
	connect(ui.Btn_Voice, &QToolButton::pressed, this, &CCallWidget::Slot_BtnVoicePressed);
	connect(ui.Btn_Voice, &QToolButton::released, this, &CCallWidget::Slot_BtnVoiceReleased);
}
