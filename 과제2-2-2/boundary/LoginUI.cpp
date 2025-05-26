// LoginUI.cpp
#include "LoginUI.h"
#include "Login.h"

// 로그인 클래스 객체 받아오는 생성자
LoginUI::LoginUI(Login* control) {
    this->loginControl = control;
}

// 입력받은 아이디 비밀번호로 로그인 시도하고 메세지 출력
void LoginUI::input(const string& userID, const string& password, ofstream& fout) {
    // loginRequest 함수는 로그인 성공하면 true, 실패하면 false를 반환
    if (loginControl->loginRequest(userID, password)) {
        // 로그인 성공 시 아이디 비밀번호 출력
        fout << "2.1. 로그인" << endl;
        fout << "> " << userID << " " << password << endl;
    }
    fout << endl;
}
