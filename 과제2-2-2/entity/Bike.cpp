// Bike.cpp
#include "Bike.h"

// 자전거 아이디, 이름으로 초기화
Bike::Bike(const string& bikeID, const string& bikeName) {
    this->bikeID = bikeID;
    this->bikeName = bikeName;
}

// 자전거 아이디 반환
string Bike::getBikeID() const {
    return bikeID;
}

// 자전거 제품명 반환
string Bike::getBikeName() const {
    return bikeName;
}

// 자전거 아이디와 제품명을 문자열로 한번에 반환
string Bike::getBikeDetails() const {
    return "ID: " + bikeID + ", Name: " + bikeName;
}