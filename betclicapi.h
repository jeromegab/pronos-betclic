#pragma once

#include <QDebug>
#include <QFile>
#include <QObject>
#include <QtXml>
#include <QNetworkAccessManager>

class BetclicAPI : public QObject
{
    Q_OBJECT

    public:
        BetclicAPI();

    signals:

    public slots:

    private:
        void downloadXMLFile();

        QString _url{"http://xml.cdn.betclic.com/odds_en.xml"};
};
