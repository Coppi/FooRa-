#include "db/database.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>


Database::~Database()
{
#if 0
    if (mDb.isValid())
    {
        if (mDb.isOpen()) mDb.close();
    }
#endif
}


Database& Database::getInstance()
{
    static Database db; // Guaranteed to be destroyed.
                        // Instantiated on first use.
    return db;
}


bool Database::open()
{
    QSqlDatabase mDb = QSqlDatabase::addDatabase("QSQLITE");
    mDb.setDatabaseName("foora.db");

    if (!mDb.open())
    {
        qDebug() << "Could not open database";
        return false;
    }

    mConnectionName = mDb.connectionName();

    return true;
}


bool Database::addMatch(const qint64 &redTeamDefense,
                        const qint64 &redTeamOffense,
                        const qint64 &blueTeamDefense,
                        const qint64 &blueTeamOffense,
                        unsigned redScore,
                        unsigned blueScore)
{
   bool success = false;

   long redDefenseUserId = 0;
   long redOffenseUserId = 0;
   long blueDefenseUserId = 0;
   long blueOffenseUserId = 0;

   QSqlQuery query;
   query.prepare("SELECT id FROM user WHERE name = :queryName");

   query.bindValue(":queryName", redTeamDefense);
   if (!query.exec() || !query.next())
   {
       qDebug() << "addMatch error:  " << query.lastError();
       return false;
   }
   redDefenseUserId = query.value(0).toString().toLong();

   return success;
}

