// Account.h
#pragma once
#include <string>
#include "RentList.h"
using namespace std;

class Account {
private:
    string userID;
    string password;
    string phoneNumber;
    // Account가 RentList를 소유하는 관계임
    RentList rentList;

public:
    Account() = default;
    Account(string userID, string password, string phoneNumber);

    string getId() const;
    string getPw() const;
    string getPhone() const;

    // 로그인 검증용
    bool verifyAccount(string& userID, string& password);

    // rentlist접근자~!!
    RentList& getRentList();
};