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

    void saveCurrentUser(Account* account);
    Account* getCurrentUser() const;
    void clearSession();    // 로그아웃 시
};