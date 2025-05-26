// Rent.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Bike.h"
#include "Session.h"

class Rent {
private:
    vector<Bike>* bikes;
    Session* session;

public:
    Rent(vector<Bike>* bikes, Session* session);

    bool requestRent(const string& bikeID);
    Bike* findBike(const string& bikeID);
};