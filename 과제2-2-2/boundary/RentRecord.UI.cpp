// RentRecordUI.cpp
#include "RentRecordUI.h"

RentRecordUI::RentRecordUI(RentRecord* control) {
    this->rentRecordControl = control;
}

void RentRecordUI::input(ofstream& fout) {
    // 대여 내역 리스트 요청
    vector<RentRecord> records = rentRecordControl->requestRentList();

    fout << "5.1. 자전거 대여 리스트" << endl;
    for (const Bike& bike : rentRecords) {
        fout << "> " << bike.getBikeID << " " << bike.getBikeName << endl;
    }
}
