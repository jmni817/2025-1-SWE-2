//LogoutUI.cpp
#include "LogoutUI.h"
#include "Logout.h"

// 로그아웃 클래스의 객체를 매개변수로 받아오는 생성자
LogoutUI::LogoutUI(Logout* control) {
    this->logoutControl = control;
}

void LogoutUI::input(ofstream& fout) {
    // 매개변수를 통해 로그아웃 클래스의 멤버함수로 넘어가기
    string userID = logoutControl->logoutRequest();

    // 출력 메시지. 아이디 출력
    fout << "2.2. 로그아웃" << endl;
    fout << "> " << userID << endl;
    fout << endl;
}
