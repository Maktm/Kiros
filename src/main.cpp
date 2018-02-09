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
	area->addSubWindow(new SubWindow);
	area->addSubWindow(new SubWindow);
	area->addSubWindow(new SubWindow);

	GraphicalInterface ui;
	ui.setCentralWidget(area);
	ui.showFullScreen();

  return app.exec();
}
