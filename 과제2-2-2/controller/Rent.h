#include <vector>
#include <string>
#include "Bike.h"
#include "Session.h"
#include "Account.h"
using namespace std;

class Rent {
private:
    vector<Bike>* bikes;
    Session* session;

public:
    Rent(vector<Bike>* bikes, Session* session);

    bool requestRent(const string& bikeID);
    Bike* findBike(const string& bikeID);
};