#pragma once

#include <QtWidgets/QWidget>

#include "ui_subwindow.hpp"

class SubWindow : public QMdiSubWindow, private Ui::SubWindow
{
  Q_OBJECT

public:
  SubWindow(char const* title = nullptr, QWidget* parent = Q_NULLPTR);
  ~SubWindow();

  void SetTitle(char const* title);
};
