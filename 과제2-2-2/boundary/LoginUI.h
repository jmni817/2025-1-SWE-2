//LoginUI.h
#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Login.h"

class LoginUI {
private:
    Login* loginControl;    // 로그인 클래스와 연결

public:
    LoginUI(Login* control);    // 생성자

    // 입력 처리, 결과 출력
    void input(const string& userID, const string& password, ofstream& fout);
};