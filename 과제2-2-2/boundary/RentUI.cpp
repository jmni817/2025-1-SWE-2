// RentUI.cpp
#include "RentUI.h"

RentUI::RentUI(Rent* control) {
    this->rentControl = control;
}

void RentUI::input(const string& bikeID, ofstream& fout) {
    string bikeID = rentControl->rentRequest();
    fout << "4.1. 자전거 대여" << endl;
    fout << "> " << bikeID << endl;
}
