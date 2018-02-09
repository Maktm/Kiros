#include <QtWidgets/QApplication>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMdiSubWindow>

#include <monitor/config.hpp>
#include <monitor/graphical_interface.hpp>
#include <monitor/subwindow.hpp>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  QMdiArea* area = new QMdiArea;
  area->setStyleSheet("background-color:black;");
  area->addSubWindow(new SubWindow{"$AAPL"});
  area->addSubWindow(new SubWindow{"$MSFT"});
  area->addSubWindow(new SubWindow{"$AAPL - Finances"});

  GraphicalInterface ui;
  ui.setCentralWidget(area);
  ui.showFullScreen();

  return app.exec();
}
