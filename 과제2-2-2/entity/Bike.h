// Bike.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Bike {
private:
    string bikeID;
    string bikeName;

public:
    Bike() = default;
    Bike(const string& bikeID, const string& bikeName); // 생성자

    string getBikeID() const;       // 자전거 아이디 반환 함수
    string getBikeName() const;     // 자전거 제품명 반환 함수
    string getBikeDetails() const;  // 자전거 정보 반환 함수
};
