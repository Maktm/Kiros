#include <QtWidgets/QApplication>

#include <monitor/config.hpp>
#include <monitor/graphical_interface.hpp>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);
  GraphicalInterface ui;
  ui.show();
  return app.exec();
}
