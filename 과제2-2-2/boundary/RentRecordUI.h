#pragma once
#include <fstream>
#include <string>
using namespace std;

class RentRecord;

class RentRecordUI {
private:
    RentRecord* rentRecordControl;

public:
    RentRecordUI(RentRecord* control);
    
    void input(ofstream& fout);
};
