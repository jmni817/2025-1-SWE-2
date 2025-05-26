//Login.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Account.h"
#include "Session.h"

class Login {
private:
    vector<Account>* accounts;  // 계정 벡터에 대한 포인터
    Session* session;           // 로그인 성공하면 세션 업데이트 

public:
    Login(vector<Account>* accounts, Session* session); // 생성자

    // 로그인 요청 처리 함수
    // 아이디랑 비밀번호를 받아 로그인 시도
    bool loginRequest(const string& userID, const string& password);
};