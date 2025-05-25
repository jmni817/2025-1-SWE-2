// LoginUI.cpp
#include "LoginUI.h"

LoginUI::LoginUI(Login* control) {
    this->loginControl = control;
}

void LoginUI::input(const string& userID, const string& password, ofstream& fout) {
    if (loginControl->loginRequest(userID, password)) {
        fout << "2.1. 로그인" << endl;
        fout << "> " << userID << " " << password << endl;
    }
    fout << endl;
}
