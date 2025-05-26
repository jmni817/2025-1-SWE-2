// Rent.cpp
#include "Rent.h"
#include "Bike.h"

Rent::Rent(vector<Bike>* bikes, Session* session) {
    this->bikes = bikes;
    this->session = session;
}

// ui에서 받아온 자전거아이디로 자전거 정보찾기
Bike* Rent::findBike(const string& bikeID) {
    for (auto& bike : *bikes) {
        if (bike.getBikeID() == bikeID) {  // ID일치하는거찾기
            return &bike;   // 찾으면 그 자전거 주소 반환
        }
    }
    return nullptr;
}

bool Rent::requestRent(const string& bikeID) {
    Account* currentUser = session->getCurrentUser();
    Bike* bike = findBike(bikeID);  // 아이디 일치하는 주소의 bike 값들을 가리키는 포인터
   
    currentUser->getRentList().addRecord(*bike);    // 현재 유저의 렌트리스트에 자전거 정보 추가

    return true;
}
