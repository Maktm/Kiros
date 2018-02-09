#include <monitor/subwindow.hpp>

#include <QtWidgets/QMdiSubWindow>

SubWindow::SubWindow(QWidget* parent)
  : QMdiSubWindow(parent, Qt::FramelessWindowHint)
{
  setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint |
                 Qt::WindowMinimizeButtonHint);
  setAttribute(Qt::WA_TranslucentBackground);
  setAttribute(Qt::WA_DeleteOnClose);

  setupUi(this);
}

SubWindow::~SubWindow()
{
  ;
}
