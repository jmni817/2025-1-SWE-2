#pragma once
#include <fstream>
#include <string>
using namespace std;

class Close;

class CloseUI {
private:
    Close* close;

public:
    CloseUI(Close* close);
    void input(ofstream& fout);
};