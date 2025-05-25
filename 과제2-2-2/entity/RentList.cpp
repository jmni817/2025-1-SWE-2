// RentList.cpp
#include "RentList.h"

void RentList::addRecord(const Bike& bike) {
    bikeRecords.push_back(bike);
}

vector<Bike> RentList::getRentRecord() const {
    return bikeRecords;
}