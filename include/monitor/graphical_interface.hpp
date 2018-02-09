#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_graphical_interface.hpp"

class GraphicalInterface : public QWidget, private Ui::GraphicalInterface
{
  Q_OBJECT

public:
  GraphicalInterface(QWidget* parent = Q_NULLPTR);
  ~GraphicalInterface();

  void SetCentralWidget(QWidget* widget);
};
