// Account.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class RentList;

class Account {
private:
    string userID;
    string password;
    string phoneNumber;
    // Account가 RentList를 소유하는 관계임!!
    // 회원은 각각의 렌트리스트를 가지고있다
    RentList rentList;

public:
    Account() = default;
    Account(string userID, string password, string phoneNumber);

    string getId() const;
    string getPw() const;
    string getPhone() const;

    // 로그인 검증용
    bool verifyAccount(const string& userID, const string& password);

    // rentlist접근자~!!
    RentList& getRentList();
};