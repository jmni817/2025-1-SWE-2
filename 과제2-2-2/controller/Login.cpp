//Login.cpp
#include "Login.h"
#include "Account.h"
#include "Session.h"

// Account, Session 의존성
// 사용자 계정 벡터(리스트)에 포인터로 접근
// 세션 객체 포인터 받음
Login::Login(vector<Account>* accounts, Session* session) {
    this->accounts = accounts;
    this->session = session;
}

bool Login::loginRequest(const string& userID, const string& password) {
    // 모든 계정 목록 중에서 아이디랑 비밀번호 일치하는거 찾기
    for (auto& account : *accounts) {
        if (account.verifyAccount(userID, password)) {
            // 일치 - 로그인 성공 
            // 현재 사용자를 세션에 저장
            session->saveCurrentUser(&account);

            return true;    // 성공했으니까 트루 반환
        }
    }
    return false;
}
