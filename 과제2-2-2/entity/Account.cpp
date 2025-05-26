//Account.cpp
#include "Account.h"

// 생성자에서 값 넣어줘야됨~
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

bool Account::verifyAccount(const string& id, const string& pw) {
    return (userID == id && password == pw);
}

// dbwjdm렌트리스트 객체 불러오기
RentList& Account::getRentList() {
    return rentList;
}
