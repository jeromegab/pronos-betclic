#include <QCoreApplication>
#include <QDebug>
#include <QtGlobal>

#include "betclicapi.h"
#include "betsfiller.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    BetsFiller betsFiller(argv);
    betsFiller.fillSheet();

    return 0;
}
