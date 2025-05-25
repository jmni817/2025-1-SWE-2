//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session) : session(session) {}

string Logout::logoutRequest() {
    string id = session->getCurrentUser()->getId();
    session->clearSession();
    return id;
}
