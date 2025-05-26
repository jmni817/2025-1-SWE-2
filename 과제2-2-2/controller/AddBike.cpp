// AddBike.cpp
#include "AddBike.h"
#include "Bike.h"

// 자전거를 새로 등록해서 벡터(리스트)에 추가하는 기능
// bikes: 전체 자전거 목록
AddBike::AddBike(vector<Bike>* bikes) {
    this->bikes = bikes;
}

Bike AddBike::addNewBike(const string& bikeID, const string& bikeName) {
    // Bike 객체를 생성
    Bike newBike(bikeID, bikeName);

    // 리스트의 끝에 추가할 때 사용되는 함수 push_back()
    bikes->push_back(newBike);
    // 새로 등록된 자전거 리턴
    return newBike;
}