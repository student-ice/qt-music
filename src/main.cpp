#include <DApplication>
#include "mainwindow.h"

DWIDGET_USE_NAMESPACE

int main(int argc, char *argv[])
{
    DApplication *app = DApplication::globalApplication(argc, argv);

    app->setApplicationName("qt-music");
    app->setApplicationDescription("使用Qt6和Dtk6构建的音乐播放器。");
    app->setApplicationVersion(APP_VERSION);
    app->loadTranslator();

    MainWindow w;
    w.show();

    return app->exec();
}