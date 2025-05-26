//Logout.cpp
#include "Logout.h"
#include "Session.h"

// 세션 객체에 대한 포인터 받음
Logout::Logout(Session* session){
    this->session = session;
}

string Logout::logoutRequest() {
    // 현재 아이디 정보를 세션 클래스에서 가져오기
    string id = session->getCurrentUser()->getId();
    // 로그아웃처리 하고 세션에서 정보 삭제
    session->clearSession();
    
    // 출력을 위해 아이디 반환
    return id; 
}
