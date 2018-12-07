#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>


class Database
{
public:
    static Database& getInstance();
    ~Database();
    bool open();
    bool addMatch(const qint64& redTeamDefense,
                  const qint64& redTeamOffense,
                  const qint64& blueTeamDefense,
                  const qint64& blueTeamOffense,
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
