#include "match.h"

Match::Match(qint64 inRedDefense,
                qint64 inRedOffense,
                qint64 inBlueDefense,
                qint64 inBlueOffense,
                quint8 inRedScore,
                quint8 inBlueScore,
                QDateTime inDate        )
: redDefense(inRedDefense)
, redOffense(inRedOffense)
, blueDefense(inBlueDefense)
, blueOffense(inBlueOffense)
, redScore(inRedScore)
, blueScore(inBlueScore)
, date(inDate)
{

}


bool Match::isValid()
{
    bool retVal = true;

    if (redScore > END_SCORE) retVal = false;
    else if (blueScore > END_SCORE) retVal = false;
    else if ((redScore == END_SCORE) && (blueScore == END_SCORE)) retVal = false;
    else if ((redScore != END_SCORE) && (blueScore != END_SCORE)) retVal = false;
    else if ( (redDefense  == redOffense)    ||
              (redDefense  == blueDefense)   ||
              (redDefense  == blueOffense)   ||
              (redOffense  == blueDefense)   ||
              (redOffense  == blueOffense)   ||
              (blueDefense == blueOffense)  ) retVal = false;
    else if (date.date().year() < 2018) retVal = false;

    return retVal;
}

