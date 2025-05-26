// Account.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "RentList.h"

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
    Account(string userID, string password, string phoneNumber);    // 생성자

    string getId() const;       // 아이디 반환 함수
    string getPw() const;       // 비밀번호 반환 함수
    string getPhone() const;    // 전화번호 반환 함수

    // 로그인 검증용 함수
    bool verifyAccount(const string& userID, const string& password);

    // rentlist접근자~!!
    RentList& getRentList();
};