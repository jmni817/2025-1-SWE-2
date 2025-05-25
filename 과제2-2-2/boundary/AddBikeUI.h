// AddBikeUI.h
#pragma once

#include <string>
#include <fstream>
using namespace std;

class AddBike;

class AddBikeUI {
private:
    AddBike* addBikeControl;

public:
    AddBikeUI(AddBike* control);

    void input(const string& bikeID, const string& bikeName, ofstream& fout);
};
