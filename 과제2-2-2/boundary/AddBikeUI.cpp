// AddBikeUI.cpp
#include "AddBikeUI.h"
#include "AddBike.h"

// 생성자로 애드바이크 클래스객체매개변수받아오기
AddBikeUI::AddBikeUI(AddBike* control) {
    this->addBikeControl = control;
}

void AddBikeUI::input(const string& bikeID, const string& bikeName, ofstream& fout) {
    // 애드바이크 객체한테 넘겨서 다음로직을 구현!!
    Bike newBike = addBikeControl->addNewBike(bikeID, bikeName);

    // 출력 메시지
    fout << "3.1. 자전거 등록" << endl;
    // 자전거 아이디, 제품명 출력
    fout << "> " << newBike.getBikeID() << " " << newBike.getBikeName() << endl;
    fout << endl;
}
