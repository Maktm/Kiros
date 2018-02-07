#pragma once

#include <QMainWindow>

#include "ui_graphical_interface.h"

class GraphicalInterface : public QMainWindow
{
  Q_OBJECT

public:
  GraphicalInterface(QWidget* parent = Q_NULLPTR);
  ~GraphicalInterface();

private:
  Ui::GraphicalInterface ui;
};
