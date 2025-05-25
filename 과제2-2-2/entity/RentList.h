// RentList.h
#pragma once
#include <vector>
#include <string>
#include "Bike.h"
#include "RentRecord.h"
using namespace std;

class RentList {
private:
    vector<RentRecord> rentRecords;

public:
    void addRecord(const Bike& bike);
    vector<Bike> getRentRecord() const; // 자전거 아이디, 제품명 쌍으로 출력
};