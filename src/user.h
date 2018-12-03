#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(QString inNickName, QString inFirstName, QString inLastName);
    inline QString getNickName() const;
    inline QString getFirstName() const;
    inline QString getLastName() const;
    bool operator==(const User& rhs) {return nickName == rhs.getNickName();};
    bool operator!=(const User& rhs) {return nickName != rhs.getNickName();};

private:
    QString nickName;
    QString firstName;
    QString lastName;
};

QString User::getNickName() const
{
    return nickName;
}

QString User::getFirstName() const
{
    return firstName;
}

QString User::getLastName() const
{
    return lastName;
}


#endif // USER_H
