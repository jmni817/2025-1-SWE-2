// RentList.h
#include <vector>
#include "Bike.h"
using namespace std;

class RentList {
private:
    vector<Bike> bikeRecords;

public:
    void addRecord(const Bike& bike);
    void getRentRecord() {};
};