// RentRecord.cpp
#include "RentRecord.h"
#include "Account.h"
#include "Session.h"

// 세션 객체 포인터 받기
RentRecord::RentRecord(Session* session) {
    this->session = session;
}

vector<Bike> RentRecord::requestRentList() {
    // 세션에서 현재 로그인된 사용자 ID 가져오기
    Account* account = session->getCurrentUser();   
    
    // 어카운트에서 본인 렌트리스트 가져오기
    return account->getRentList().getRentRecord();  
}