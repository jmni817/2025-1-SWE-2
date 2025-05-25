#include "Account.h"

Account::Account(string userID, string password, string phoneNumber) {
    this->userID = userID;
    this->password = password;
    this->phoneNumber = phoneNumber;
}

string Account::getId() const {
    return userID;
}

string Account::getPw() const {
    return password;
}

string Account::getPhone() const {
    return phoneNumber;
}

bool Account::verifyAccount(string& id, string& pw) {
    return (userID == id && password == pw);
}
