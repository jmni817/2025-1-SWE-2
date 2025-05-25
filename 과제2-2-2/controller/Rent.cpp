// Rent.cpp
#include "Rent.h"

Rent::Rent(vector<Bike>* bikes, Session* session) {
    this->bikes = bikes;
    this->session = session;
}

Bike* Rent::findBike(const string& bikeID) {
    for (auto& bike : *bikes) {
        if (bike.getBikeID() == bikeID) {  // ID일치하는거찾기
            return &bike; // 찾으면 그 자전거 주소 반환
        }
    }
    return nullptr;
}

bool Rent::requestRent(const string& bikeID) {
    Account* currentUser = session->getCurrentUser();
    Bike* bike = findBike(bikeID);
   
    currentUser->getRentList().addRecord(*bike); // 리스트에 추가

    return true;
}
