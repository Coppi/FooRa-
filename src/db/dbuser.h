#ifndef DBUSER_H
#define DBUSER_H

#include <QString>


class DBUser
{
public:
    static bool doesUserExist(const QString& userNickName);
    static bool addUser(const QString &newUserNickName, const QString &newUserFirstName, const QString &newUserLastName);
    static QStringList getUsers();
    static unsigned long getID(QString userNickName);

private:
    DBUser();
};

#endif // DBUSER_H
