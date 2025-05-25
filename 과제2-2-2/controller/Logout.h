//Logout.h
#pragma once
#include <string>
using namespace std;

class Session;
class Logout {
private:
    Session* session;
public:
    Logout(Session* session);
    string logoutRequest();
};
