#include "trighelper.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TrigHelper w;
    w.show();

    return a.exec();
}
