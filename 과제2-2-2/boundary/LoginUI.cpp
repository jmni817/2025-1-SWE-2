#include <string>
#include "LoginUI.h"
#include "Login.h"

void LoginUI::input(ifstream& fin, ofstream& fout, Login& control) {
    string id, pw;
    fin >> id >> pw;
    control.loginRequest(id, pw);   //호출
    fout << "2.1 로그인 \n> " << id << " "<< pw << endl;
}