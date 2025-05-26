// AddBike.cpp
#include "AddBike.h"
#include "Bike.h"

// bikes: 전체 자전거 목록
AddBike::AddBike(vector<Bike>* bikes) {
    this->bikes = bikes;
}

Bike AddBike::addNewBike(const string& bikeID, const string& bikeName) {
    Bike newBike(bikeID, bikeName);

    // 리스트의 끝에 추가할 때 사용되는 함수 push_back()
    bikes->push_back(newBike);
    return newBike;
}