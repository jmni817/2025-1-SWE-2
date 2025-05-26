//LogoutUI.h
#pragma once
#include <fstream>
#include <string>
using namespace std;

class Logout;

class LogoutUI {
private:
    Logout* logoutControl;

public:
    LogoutUI(Logout* control);
    
    void input(ofstream& fout);
};
