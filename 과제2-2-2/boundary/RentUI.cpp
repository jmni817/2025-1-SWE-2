// RentUI.cpp
#include "RentUI.h"
#include "Rent.h"

// 렌트 클래스의 객체를 매개변수로 받아옴
RentUI::RentUI(Rent* control) {
    this->rentControl = control;
}

// 자전거 아이디 입력받고, 출력
void RentUI::input(const string& bikeID, ofstream& fout) {
    // 렌트 클래스에 자전거 아이디 전달
    rentControl->requestRent(bikeID);

    // 출력 메시지와 자전거 아이디 출력
    fout << "4.1. 자전거 대여" << endl;
    fout << "> " << bikeID << endl;
    fout << endl;
}
