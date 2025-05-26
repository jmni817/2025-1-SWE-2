//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session) : session(session) {}

void Logout::logoutRequest() {
    string id = session->getCurrentUser()->getId();
    session->clearSession();
}
