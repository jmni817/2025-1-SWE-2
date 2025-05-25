// Rent.cpp
#include "Rent.h"

Rent::Rent(vector<Bike>* bikes, Session* session) {
    this->bikes = bikes;
    this->session = session;
}

Bike* Rent::findBike(const string& bikeID) {
    for (auto& bike : *bikes) {
        if (bike.getBikeID() == bikeID) {  // ID일치하는거찾기
            return &bike;
        }
    }
    return nullptr;
}

bool Rent::requestRent(const string& bikeID) {
    Account* currentUser = session->getCurrentUser();
    if (currentUser == nullptr) return false;

    Bike* bike = findBike(bikeID);
    if (bike == nullptr) return false;

    currentUser->getRentList().addRecord(*bike); // 리스트에 추가

    return true;
}
