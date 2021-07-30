#include "bodydata.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BodyData w;
    w.show();
    return a.exec();
}
