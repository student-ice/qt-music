#include "mainwindow.h"

#include <DWidgetUtil>

MainWindow::MainWindow(QWidget *parent)
    : DMainWindow(parent)
{
    setFixedSize(1200, 800);
    Dtk::Widget::moveToCenter(this);
}