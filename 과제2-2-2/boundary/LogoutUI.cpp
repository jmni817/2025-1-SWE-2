//LogoutUI.cpp
#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI(Logout* control) {
    this->logoutControl = control;
}

void LogoutUI::input(ofstream& fout) {
    string userID = logoutControl->logoutRequest();

    fout << "2.2. 로그아웃" << endl;
    fout << "> " << userID << endl;
    fout << endl;
}
