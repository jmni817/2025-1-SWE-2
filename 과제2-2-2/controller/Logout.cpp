//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session){
    this->session = session;
}

string Logout::logoutRequest() {
    // 현재 아이디 정보 가져와서
    string id = session->getCurrentUser()->getId();
    // 로그아웃처리 하고
    session->clearSession();
    
    return id; 
}
