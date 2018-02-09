#include <iostream>
#include <string>

#include <QtCore/QFile>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMdiSubWindow>

#include <monitor/config.hpp>
#include <monitor/graphical_interface.hpp>
#include <monitor/subwindow.hpp>

void LoadStyleSheet(QWidget* widget, QString const& stylesheet_path)
{
  QFile file(stylesheet_path);
  if (file.open(QFile::ReadOnly))
  {
    QString stylesheet{file.readAll()};
    std::cout << stylesheet.toLocal8Bit().constData() << std::endl;
    widget->setStyleSheet(stylesheet);
  }
}

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

  GraphicalInterface ui;

  QMdiArea* area = new QMdiArea(&ui);
	area->setBackground(QColor(22, 22, 22));
  area->addSubWindow(new SubWindow{"$AAPL"});
  area->addSubWindow(new SubWindow{"$MSFT"});
  area->addSubWindow(new SubWindow{"$AAPL - Finances"});

  LoadStyleSheet(&ui, "./../../../stylesheet.qss");
  ui.SetCentralWidget(area);
  ui.show();

  return app.exec();
}
