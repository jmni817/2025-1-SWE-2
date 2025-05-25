//LoginUI.h
#include "Login.h"
#include <fstream>
#include <string>
using namespace std;

class LoginUI {
private:
    Login* loginControl;

public:
    LoginUI(Login* control);

    void input(const string& userID, const string& password, ofstream& fout);
};