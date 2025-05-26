//LogoutUI.h
#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Logout.h"

class LogoutUI {
private:
    Logout* logoutControl;  // 로그아웃 클래스와 연결

public:
    LogoutUI(Logout* control);  // 생성자

    // 입력 처리, 출력
    void input(ofstream& fout);
};
