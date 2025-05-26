//LoginUI.h
#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Login.h"

class LoginUI {
private:
    Login* loginControl;

public:
    LoginUI(Login* control);

    void input(const string& userID, const string& password, ofstream& fout);
};