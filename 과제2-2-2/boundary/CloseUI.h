#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Close.h"

class CloseUI {
private:
    Close* closeControl;

public:
    CloseUI(Close* close);
    void input(ofstream& fout);
};