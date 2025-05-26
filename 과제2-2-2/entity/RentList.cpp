// RentList.cpp
#include "RentList.h"

// 따로 생성자 특별히 필요 X

void RentList::addRecord(const Bike& bike) {
    bikeRecords.push_back(bike);
}

vector<Bike> RentList::getRentRecord() const {
    return bikeRecords;
    // 저장된 대여 내역을 리턴
}