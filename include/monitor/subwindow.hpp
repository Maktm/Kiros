#pragma once

#include <QtWidgets/QWidget>

#include "ui_subwindow.hpp"

class Subwindow : public QWidget, Ui::Subwindow
{
	Q_OBJECT

public:
	Subwindow(QWidget* parent = Q_NULLPTR);
	~Subwindow();
};