#pragma once

#include <QtGlobal>
#include <QDebug>

class BetclicAPI;

class BetsFiller
{
    public:
        BetsFiller(char **argv);
        ~BetsFiller();
        void fillSheet();

    private:
        BetclicAPI *_api{nullptr};
};
