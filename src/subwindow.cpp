#include <cassert>

#include <monitor/subwindow.hpp>

#include <QtCore/QString>
#include <QtWidgets/QMdiSubWindow>
#include <QtWidgets/QGraphicsDropShadowEffect>

SubWindow::SubWindow(char const* title, QWidget* parent)
  : QMdiSubWindow(parent, Qt::FramelessWindowHint)
{
  setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint |
                 Qt::WindowMinimizeButtonHint);
  setAttribute(Qt::WA_TranslucentBackground);
  setAttribute(Qt::WA_DeleteOnClose);

  setupUi(this);

  if (title != nullptr)
  {
    SetTitle(title);
  }

  QGraphicsDropShadowEffect* text_shadow = new QGraphicsDropShadowEffect;
  text_shadow->setBlurRadius(4.0);
  text_shadow->setColor(QColor(0, 0, 0));
  text_shadow->setOffset(0.0);
  titleText->setGraphicsEffect(text_shadow);

  QGraphicsDropShadowEffect* window_shadow = new QGraphicsDropShadowEffect;
  window_shadow->setBlurRadius(2.0);
  window_shadow->setColor(palette().color(QPalette::Window));
  window_shadow->setOffset(0.0);
  windowFrame->setGraphicsEffect(window_shadow);
}

SubWindow::~SubWindow()
{
  ;
}

void SubWindow::SetTitle(char const* title)
{
  assert(title);
  titleText->setText(title);
}
