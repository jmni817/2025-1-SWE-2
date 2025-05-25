// Session.h
#pragma once
#include "Account.h"

class Account;

class Session {
private:
    Account* currentUser;

public:
    Session();
    void saveCurrentUser(Account* account);
    Account* getCurrentUser() const;
    void clearSession();
};