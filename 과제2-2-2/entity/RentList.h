// RentList.h
#pragma once
#include <vector>
#include <string>
#include "Bike.h"
using namespace std;

class RentList {
private:
    vector<Bike> bikeRecords;              // 대여 기록

public:
    void addRecord(const Bike& bike);
    vector<Bike> getRentRecord() const; 
};