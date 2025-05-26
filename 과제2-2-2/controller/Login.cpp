//Login.cpp
#include "Login.h"
#include "Account.h"
#include "Session.h"

// Account, Session 의존성
Login::Login(vector<Account>* accounts, Session* session) {
    this->accounts = accounts;
    this->session = session;
}

bool Login::loginRequest(const string& userID, const string& password) {
    for (auto& account : *accounts) {
        if (account.verifyAccount(userID, password)) {
            // 로그인 성공 시 현재 사용자를 세션에 저장
            session->saveCurrentUser(&account);
            return true;
        }
    }
    return false;
}
