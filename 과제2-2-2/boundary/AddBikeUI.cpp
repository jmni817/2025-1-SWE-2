// AddBikeUI.cpp
#include "AddBikeUI.h"
#include "AddBike.h"

// 생성자로컨트롤객체매개변수받아오기
AddBikeUI::AddBikeUI(AddBike* control) {
    this->addBikeControl = control;
}

void AddBikeUI::input(const string& bikeID, const string& bikeName, ofstream& fout) {
    // 컨트롤 객체한테 넘겨서 다음로직을 구현!!
    Bike newBike = addBikeControl->addNewBike(bikeID, bikeName);

    fout << "3.1. 자전거 등록" << endl;
    fout << "> " << newBike.getBikeID() << " " << newBike.getBikeName() << endl;
    fout << endl;
}
