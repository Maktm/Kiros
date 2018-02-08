#include <monitor/subwindow.hpp>

#include <QtWidgets/QWidget>

Subwindow::Subwindow(QWidget* parent) : QWidget(parent)
{
  setupUi(this);
}

Subwindow::~Subwindow()
{
  ;
}
