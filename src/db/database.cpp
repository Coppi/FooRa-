#include "db/database.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>


Database& Database::getInstance()
{
    static Database db; // Guaranteed to be destroyed.
                        // Instantiated on first use.
    return db;
}


bool Database::open()
{
    mDb = QSqlDatabase::addDatabase("QSQLITE");
    mDb.setDatabaseName("foora.db");

    if (!mDb.open())
    {
        qDebug() << "Could not open database";
        return false;
    }

#if 0
    int rc;
    sqlite3 *db;

    rc = sqlite3_open("foora.db", &db);
    if (rc)
    {
        QMessageBox(QMessageBox::Critical, "Can't open database", sqlite3_errmsg(db), QMessageBox::Close);
//        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return false;
    }
#endif
    return true;
}


bool Database::doesUserExist(const QString& userNickName)
{
   bool success = false;

   // you should check if args are ok first...
   QSqlQuery query;
   query.prepare("SELECT COUNT(1) FROM user WHERE name = :nickName");
//   query.prepare("SELECT COUNT(1) FROM user WHERE name = 'abc'");
   query.bindValue(":nickName", userNickName);
   if (!query.exec())
   {
       qDebug() << "doesUserExist error:  "
                << query.lastError();
   }
   else
   {
       if (!query.seek(0))
       {
           qDebug() << "doesUserExist error:  "
                    << query.lastError();
       }
       else if (query.value(0).toString().toInt() > 0)
       {
           success = true;
       }
   }

   return success;
}


bool Database::addUser(const QString& newUserNickName, const QString& newUserFirstName, const QString& newUserLastName)
{
   bool success = false;

   // you should check if args are ok first...
   QSqlQuery query;
   query.prepare("INSERT INTO user (name, firstName, lastName) VALUES (:newUserNickName, :newUserFirstName, :newUserLastName)");
   query.bindValue(":newUserNickName", newUserNickName);
   query.bindValue(":newUserFirstName", newUserFirstName);
   query.bindValue(":newUserLastName", newUserLastName);
   if(query.exec())
   {
       success = true;
   }
   else
   {
       qDebug() << "addPerson error:  "
                << query.lastError();
   }

   return success;
}

