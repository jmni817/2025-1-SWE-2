// 세션 cpp
#include "Session.h"
#include "Account.h"

Session::Session() : currentUserID(nullptr) {}

void Session::saveCurrentUser(Account* account) {
    currentUserID = account;
}

Account* Session::getCurrentUser() const {
    return currentUserID;
}

void Session::clearSession() {
    currentUserID = nullptr;
}