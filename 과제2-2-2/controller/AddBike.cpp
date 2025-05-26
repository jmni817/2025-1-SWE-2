// AddBike.cpp
#include "AddBike.h"
#include "Bike.h"

AddBike::AddBike(vector<Bike>* bikes) {
    this->bikes = bikes;
}

Bike AddBike::addNewBike(const string& bikeID, const string& bikeName) {
    Bike newBike(bikeID, bikeName);
    
    bikes->push_back(newBike);
    return newBike;
}