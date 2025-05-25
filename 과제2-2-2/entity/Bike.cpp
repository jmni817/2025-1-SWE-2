// Bike.cpp
#include "Bike.h"

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