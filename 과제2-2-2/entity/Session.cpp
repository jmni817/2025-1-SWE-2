// 세션 cpp
#include "Session.h"
#include "Account.h"

// 처음에는 사용자가 없음. null로 초기화
Session::Session() {
    this->currentUser = nullptr;
}

// 현재 사용자 정보를 저장
void Session::saveCurrentUser(Account* account) {
    currentUser = account;
}

// 현재 사용자 정보를 반환
Account* Session::getCurrentUser() const {
    return currentUser;
}

// 사용자 정보를 제거
void Session::clearSession() {
    currentUser = nullptr;
}