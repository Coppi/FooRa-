#include "dbuser.h"
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>


bool DBUser::doesUserExist(const QString& userNickName)
{
   bool success = false;

   // you should check if args are ok first...
   QSqlQuery query;
   query.prepare("SELECT COUNT(1) FROM user WHERE name = :nickName");
   query.bindValue(":nickName", userNickName);
   if (!query.exec())
   {
       qDebug() << "doesUserExist error:  " << query.lastError();
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


bool DBUser::addUser(const QString& newUserNickName, const QString& newUserFirstName, const QString& newUserLastName)
{
   bool success = false;

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
       qDebug() << "addPerson error:  " << query.lastError();
   }

   return success;
}


QStringList DBUser::getUsers()
{
    QStringList users;

    QSqlQuery query;
    query.prepare("SELECT name FROM user");
    if(query.exec())
    {
        while (query.next())
        {
            users.append(query.value(0).toString());
        }
    }
    else
    {
        qDebug() << "getUsers error:  " << query.lastError();
    }

    return users;
}


unsigned long DBUser::getID(QString userNickName)
{
    QSqlQuery query;
    unsigned long retVal = 0ul;

    query.prepare("SELECT COUNT(1) FROM user WHERE name = :userNickName");
    query.bindValue(":userNickName", userNickName);
    if (!query.exec())
    {
        qDebug() << "doesUserExist error:  " << query.lastError();
    }
    else
    {
        if (!query.seek(0))
        {
            qDebug() << "doesUserExist error:  "
                     << query.lastError();
        }
        else
        {
            retVal = query.value(0).toString().toUInt();
        }
    }

    return retVal;
}
