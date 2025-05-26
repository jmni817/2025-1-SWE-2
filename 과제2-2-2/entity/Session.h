// Session.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Account.h"

class Session {
private:
    Account* currentUser;

public:
    Session();

    // 사용자 정보 저장 함수
    void saveCurrentUser(Account* account);
    // 사용자 정보 반환 함수
    Account* getCurrentUser() const;
    // 사용자 정보 삭제 함수
    void clearSession();    // 로그아웃 시
};