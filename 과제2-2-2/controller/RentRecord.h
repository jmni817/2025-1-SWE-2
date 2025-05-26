// RentRecord.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Bike;
class Session;

class RentRecord {
private:
    Session* session;  // 현재 로그인 사용자 정보 접근용

public:
    RentRecord(Session* session);

    vector<Bike> requestRentList();
};