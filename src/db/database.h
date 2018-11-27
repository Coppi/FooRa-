#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>


class Database
{
public:
    static Database& getInstance();
    bool open();
    bool addUser(const QString& user);

    Database(Database const&)       = delete;
    void operator=(Database const&) = delete;

private:
    Database() {};
    QSqlDatabase mDb;
};



#endif // DATABASE_H