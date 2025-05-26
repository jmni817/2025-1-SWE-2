//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session) : session(session) {}

void Logout::logoutRequest() {
    string id = session->getCurrentUser()->getId();
    session->clearSession();
    return id; // 로그아웃할때 아이디 출력해야돼서 리턴
}
