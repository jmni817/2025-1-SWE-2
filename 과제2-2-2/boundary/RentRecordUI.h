#pragma once
#include <fstream>
#include "RentRecord.h"
using namespace std;

class RentRecordUI {
private:
    RentRecord* rentRecordControl;

public:
    RentRecordUI(RentRecord* control);
    void input(ofstream& fout);
};
