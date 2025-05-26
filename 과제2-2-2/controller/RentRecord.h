// RentRecord.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Bike.h"
#include "Session.h"

class RentRecord {
private:
    Session* session;  // 현재 로그인 사용자 정보 접근용

public:
    RentRecord(Session* session);   // 생성자

    // 대여 목록 불러오기 위한 함수
    vector<Bike> requestRentList();
};