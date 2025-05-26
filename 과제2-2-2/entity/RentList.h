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
    // 자전거 대여 기록 추가 함수
    void addRecord(const Bike& bike); 
    
    // 자전거 대여 기록 전체 반환 함수
    vector<Bike> getRentRecord() const; 
};