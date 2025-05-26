// RentList.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Bike.h"

class RentList {
private:
    vector<Bike> bikeRecords;   // 대여기록

public:
    void addRecord(const Bike& bike);

    vector<Bike> getRentRecord() const; 
};