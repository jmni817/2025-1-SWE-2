// Bike.h
#pragma once
#include <string>
using namespace std;

class Bike {
private:
    string bikeID;
    string bikeName;

public:
    Bike() = default;
    Bike(const string& bikeID, const string& bikeName);

    string getBikeID() const;
    string getBikeName() const;
    string getBikeDetails() const;
};
