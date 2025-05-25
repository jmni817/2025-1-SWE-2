#include <fstream>
#include "Close.h"
using namespace std;

class CloseUI {
private:
    Close* close;
public:
    CloseUI(Close* close) : close(close) {}
    void input(ofstream& out);
};