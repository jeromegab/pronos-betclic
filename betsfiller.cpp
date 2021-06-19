#include "betsfiller.h"
#include "betclicapi.h"


BetsFiller::BetsFiller(char **argv)
{
    Q_UNUSED(argv);
    qDebug() << "HERE WE ARE !";

    _api = new BetclicAPI();
}

BetsFiller::~BetsFiller()
{
}

void BetsFiller::fillSheet()
{

}

