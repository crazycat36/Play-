#pragma once

#include <QMdiSubWindow>
#include <QWidget>
#include <QTreeWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QLineEdit>

#include "ELF.h"

class CELFHeaderView : public QWidget
{

public:
	CELFHeaderView(QMdiSubWindow*, QLayout*);
	~CELFHeaderView();

	void SetELF(CELF*);
	void Reset();

private:
	void FillInformation();

	CELF* m_pELF;
	QVBoxLayout* m_layout;
	std::vector<QLineEdit*> m_editFields;
};
