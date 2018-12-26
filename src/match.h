#ifndef MATCH_H
#define MATCH_H

#include <QtGlobal>
#include <QDateTime>

class Match
{
public:
    static const qint16 END_SCORE = 10;
    Match(  qint64 redDefense,
            qint64 redOffense,
            qint64 blueDefense,
            qint64 blueOffense,
            quint8 redScore,
            quint8 blueScore,
            QDateTime  date        );
    inline qint64 getRedDefense() const;
    inline qint64 getRedOffense() const;
    inline qint64 getBlueDefense() const;
    inline qint64 getBlueOffense() const;
    inline quint8 getRedScore() const;
    inline quint8 getBlueScore() const;
    inline QDateTime getDate() const;
    bool isValid();

private:
    qint64 redDefense;
    qint64 redOffense;
    qint64 blueDefense;
    qint64 blueOffense;
    quint8 redScore;
    quint8 blueScore;
    QDateTime date;
};


qint64 Match::getRedDefense() const
{
    return redDefense;
}

qint64 Match::getRedOffense() const
{
    return redOffense;
}

qint64 Match::getBlueDefense() const
{
    return blueDefense;
}

qint64 Match::getBlueOffense() const
{
    return blueOffense;
}

quint8 Match::getRedScore() const
{
    return redScore;
}

quint8 Match::getBlueScore() const
{
    return blueScore;
}

QDateTime Match::getDate() const
{
    return date;
}

#endif // MATCH_H
