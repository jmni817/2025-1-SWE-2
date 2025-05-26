//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session){
    this->session = session;
}

void Logout::logoutRequest() {
    // 현재 아이디 정보 가져와서
    string id = session->getCurrentUser()->getId();
    // 로그아웃처리 하고
    session->clearSession();
    // 로그아웃할때 아이디 출력해야돼서 id리턴해야함!
    return id; 
}
