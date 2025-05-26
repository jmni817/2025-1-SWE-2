// 세션 cpp
#include "Session.h"
#include "Account.h"

Session::Session() {
    this->currentUser = nullptr;
}

void Session::saveCurrentUser(Account* account) {
    currentUser = account;
}

Account* Session::getCurrentUser() const {
    return currentUser;
}

void Session::clearSession() {
    currentUser = nullptr;
}