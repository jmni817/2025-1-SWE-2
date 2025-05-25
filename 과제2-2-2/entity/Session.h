// 세션 헤더파일
#pragma once
#include "Account.h"

class Session {
private:
    Account* currentUserID;

public:
    Session();
    void saveCurrentUser(Account* account);
    Account* getCurrentUser() const;
    void clearSession();
};