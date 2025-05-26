// Rent.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Bike;
class Session;

class Rent {
private:
    vector<Bike>* bikes;
    Session* session;

public:
    Rent(vector<Bike>* bikes, Session* session);

    bool requestRent(const string& bikeID);
    Bike* findBike(const string& bikeID);
};