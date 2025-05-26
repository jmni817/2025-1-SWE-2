#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Rent.h"

class RentUI {
private:
    Rent* rentControl;

public:
    RentUI(Rent* control);

    void input(const string& bikeID, ofstream& fout);
};
