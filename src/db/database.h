#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>


class Database
{
public:
    static Database& getInstance();
    ~Database();
    bool open();
    bool doesUserExist(const QString& userNickName);
    bool addUser(const QString &newUserNickName, const QString &newUserFirstName, const QString &newUserLastName);

    Database(Database const&)       = delete;
    void operator=(Database const&) = delete;

private:
    Database() {};
    QString mConnectionName;
//    QSqlDatabase mDb;
};



#endif // DATABASE_H
