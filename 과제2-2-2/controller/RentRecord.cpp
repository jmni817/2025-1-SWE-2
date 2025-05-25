// RentRecord.cpp
#include "RentRecord.h"
#include "Account.h"

RentRecord::RentRecord(Session* session) {
    this->session = session;
}

vector<Bike> RentRecord::requestRentList() {
    Account* account = session->getCurrentUser(); // 현재 로그인된 사용자 ID 가져오기
    
    return account->getRentList().getRentRecord();
}