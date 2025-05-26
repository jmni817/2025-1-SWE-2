#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "RentRecord.h"

class RentRecordUI {
private:
    RentRecord* rentRecordControl;

public:
    RentRecordUI(RentRecord* control);

    void input(ofstream& fout);
};
