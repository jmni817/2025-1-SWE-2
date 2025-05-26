//LogoutUI.h
#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Logout.h"

class LogoutUI {
private:
    Logout* logoutControl;

public:
    LogoutUI(Logout* control);

    void input(ofstream& fout);
};
