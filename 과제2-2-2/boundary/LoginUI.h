#include <fstream>
using namespace std;

class Login;

class LoginUI {
public:
    void input(ifstream& fin, ofstream& fout, Login& control);
};