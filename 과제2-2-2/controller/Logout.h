//Logout.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Session.h"

class Logout {
private:
    Session* session;

public:
    Logout(Session* session);

    string logoutRequest();
};
