#include <QCoreApplication>
#include "myudo.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyUDP client;

    client.HelloUDP();

    return a.exec();
}
