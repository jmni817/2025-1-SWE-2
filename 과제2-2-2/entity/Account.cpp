//Account.cpp
#include "Account.h"

// Account 객체와 멤버변수들
Account::Account(string userID, string password, string phoneNumber) {
    this->userID = userID;
    this->password = password;
    this->phoneNumber = phoneNumber;
}

// 아이디 반환
string Account::getId() const {
    return userID;
}

// 비밀번호 반환
string Account::getPw() const {
    return password;
}

// 전화번호 반환
string Account::getPhone() const {
    return phoneNumber;
}

// 로그인 로직. 아이디 비밀번호가 기존에 저장되어 있던 것과 일치하는지 확인
bool Account::verifyAccount(const string& id, const string& pw) {
    return (userID == id && password == pw);
}

// 렌트리스트 객체 불러오기
RentList& Account::getRentList() {
    return rentList;
}
