#include <monitor/graphical_interface.hpp>

#include <QtWidgets/QWidget>
#include <QtWidgets/QMainWindow>

GraphicalInterface::GraphicalInterface(QWidget* parent) : QMainWindow(parent)
{
  ui.setupUi(this);
}

GraphicalInterface::~GraphicalInterface()
{
  ;
}