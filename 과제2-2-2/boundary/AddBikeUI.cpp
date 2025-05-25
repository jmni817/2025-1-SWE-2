// AddBikeUI.cpp
#include "AddBikeUI.h"
#include "AddBike.h"

// 의존성 주입
AddBikeUI::AddBikeUI(AddBike* control) {
    this->addBikeControl = control;
}

void AddBikeUI::input(const string& bikeID, const string& bikeName, ofstream& fout) {
    Bike newBike = addBikeControl->addNewBike(bikeID, bikeName);

    fout << "3.1. 자전거 등록" << endl;
    fout << "> " << newBike.getBikeID() << " " << newBike.getBikeName() << endl;
    fout << endl;
}
