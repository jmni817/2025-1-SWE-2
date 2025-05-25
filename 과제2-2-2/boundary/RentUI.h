#include <string>
#include <fstream>
#include "Rent.h"
using namespace std;

class Rent;
class RentUI {
private:
    Rent* rentControl;

public:
    RentUI(Rent* control);

    void input(const string& bikeID, ofstream& fout);
};
