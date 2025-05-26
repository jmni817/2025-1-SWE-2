//Logout.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Session;

class Logout {
private:
    Session* session;

public:
    Logout(Session* session);

    string logoutRequest();
};
