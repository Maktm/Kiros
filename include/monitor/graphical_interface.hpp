#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_graphical_interface.hpp"

class GraphicalInterface : public QMainWindow
{
  Q_OBJECT

public:
  GraphicalInterface(QWidget* parent = Q_NULLPTR);
  ~GraphicalInterface();

private:
  Ui::GraphicalInterface ui;
};
