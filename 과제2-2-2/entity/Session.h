// Session.h
#pragma once
#include "Account.h"

class Account;

class Session {
private:
    Account* currentUserID;

public:
    Session();
    void saveCurrentUser(Account* account);
    Account* getCurrentUser() const;
    void clearSession();
};