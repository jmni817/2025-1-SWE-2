// RentRecordUI.cpp
#include "RentRecordUI.h"
#include "RentRecord.h"

RentRecordUI::RentRecordUI(RentRecord* control) {
    this->rentRecordControl = control;
}

void RentRecordUI::input(ofstream& fout) {
    // 대여 내역 리스트 요청
    vector<Bike> records = rentRecordControl->requestRentList();

    fout << "5.1. 자전거 대여 리스트" << endl;
    // records 안에 있는 모든 Bike 객체를 하나씩 순서대로 꺼내서
    // const Bike& bike 이름의 참조 변수로 받아서 사용하겠다
    for (const Bike& bike : records) {
        fout << "> " << bike.getBikeDetails() << endl;
    }
    fout << endl;
}
