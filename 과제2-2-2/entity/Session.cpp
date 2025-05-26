// 세션 cpp
#include "Session.h"
#include "Account.h"

// 처음에는 사용자가 없음. null로 초기화
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