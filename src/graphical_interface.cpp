#include <monitor/graphical_interface.hpp>

#include <cassert>

#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>

GraphicalInterface::GraphicalInterface(QWidget* parent) : QWidget(parent)
{
  setupUi(this);
}

GraphicalInterface::~GraphicalInterface()
{
  ;
}

void GraphicalInterface::SetCentralWidget(QWidget* widget)
{
  assert(widget != nullptr);
  if (centralWidget != widget)
  {
    verticalLayout->replaceWidget(centralWidget, widget);
  }
}
