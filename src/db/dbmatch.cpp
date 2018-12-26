#include "dbmatch.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>

bool DBMatch::addMatch(Match newMatch)
{
   bool success = false;

   QSqlQuery query;
   query.prepare("INSERT INTO match (redDefense, redOffense, blueDefense, blueOffense, redScore, blueScore, date) VALUES (:rd, :ro, :bd, :bo, :rs, :bs,  :d)");
   query.bindValue(":rd", newMatch.getRedDefense());
   query.bindValue(":ro", newMatch.getRedOffense());
   query.bindValue(":bd", newMatch.getBlueDefense());
   query.bindValue(":bo", newMatch.getBlueOffense());
   query.bindValue(":rs", newMatch.getRedScore());
   query.bindValue(":bs", newMatch.getBlueScore());
   query.bindValue(":d", newMatch.getDate());
   if(query.exec())
   {
       success = true;
   }
   else
   {
       qDebug() << "addPerson error:  " << query.lastError();
   }

   return success;
}
