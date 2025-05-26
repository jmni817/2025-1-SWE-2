// AddBikeUI.h
#pragma once
#include <string>
#include <fstream>
using namespace std;

#include "AddBike.h"

class AddBikeUI {
private:
    AddBike* addBikeControl;

public:
    AddBikeUI(AddBike* control);

    void input(const string& bikeID, const string& bikeName, ofstream& fout);
};
