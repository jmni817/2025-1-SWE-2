// AddBike.h
#include "Bike.h"
#include <vector>
using namespace std;

class AddBike {
private:
    vector<Bike>* bikes;

public:
    AddBike(vector<Bike>* bikes);

    Bike addNewBike(const string& bikeID, const string& bikeName);
}