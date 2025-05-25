//Logout.cpp
#include "Logout.h"
#include "Session.h"

Logout::Logout(Session* session) : session(session) {}

string Logout::logoutRequest() {
    string id = "";

    id = Session::getCurrentAccount()->getId();
    Session::clearSession();

    return id;
}
