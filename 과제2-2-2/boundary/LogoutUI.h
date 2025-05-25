//LogoutUI.h
#include <fstream>
#include "Logout.h"
using namespace std;

class LogoutUI {
private:
    Logout* logoutControl;

public:
    LogoutUI(Logout* control);
    void input(ofstream& fout);
};
