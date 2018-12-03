#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>


class Database
{
public:
    static Database& getInstance();
    ~Database();
    bool open();
    bool addMatch(const QString& redTeamDefense,
                  const QString& redTeamOffense,
                  const QString& blueTeamDefense,
                  const QString& blueTeamOffense,
                  unsigned redScore,
                  unsigned blueScore);

    Database(Database const&)       = delete;
    void operator=(Database const&) = delete;

private:
    Database() {};
    QString mConnectionName;
//    QSqlDatabase mDb;
};



#endif // DATABASE_H
