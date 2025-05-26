// RentRecord.cpp
#include "RentRecord.h"
#include "Account.h"
#include "Session.h"

RentRecord::RentRecord(Session* session) {
    this->session = session;
}

vector<Bike> RentRecord::requestRentList() {
    Account* account = session->getCurrentUser();   // 세션에서 현재 로그인된 사용자 ID 가져오기
    
    return account->getRentList().getRentRecord();  // 어카운트에서 본인 렌트리스트 가져오기
}