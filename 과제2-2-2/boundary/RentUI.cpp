// RentUI.cpp
#include "RentUI.h"
#include "Rent.h"

RentUI::RentUI(Rent* control) {
    this->rentControl = control;
}

void RentUI::input(const string& bikeID, ofstream& fout) {
    bool success = rentControl->requestRent(bikeID);
    
    fout << "4.1. 자전거 대여" << endl;
    fout << "> " << bikeID << endl;
    fout << endl;
}
