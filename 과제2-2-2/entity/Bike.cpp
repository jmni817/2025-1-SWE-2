// Bike.cpp
#include "Bike.h"

// 생성자에서 값 넣기 필요성
Bike::Bike(const string& bikeID, const string& bikeName) {
    this->bikeID = bikeID;
    this->bikeName = bikeName;
}

string Bike::getBikeID() const {
    return bikeID;
}

string Bike::getBikeName() const {
    return bikeName;
}

string Bike::getBikeDetails() const {
    return "ID: " + bikeID + ", Name: " + bikeName;
}