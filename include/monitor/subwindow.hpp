#pragma once

#include <QtWidgets/QWidget>

#include "ui_subwindow.hpp"

class SubWindow : public QMdiSubWindow, private Ui::SubWindow
{
	Q_OBJECT

public:
	SubWindow(QWidget* parent = Q_NULLPTR);
	~SubWindow();
};