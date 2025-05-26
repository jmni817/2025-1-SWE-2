//Logout.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Session.h"

class Logout {
private:
    Session* session;   // 세션 클래스에 접근하기 위함

public:
    Logout(Session* session);   // 생성자

    // 로그아웃 처리 함수
    string logoutRequest();
};
