// RentRecord.cpp
#include "RentRecord.h"
#include "Account.h"

RentRecord::RentRecord(Session* session) {
    this->session = session;
}

vector<Bike> RentRecord::requestRentList() {
    Account* currentUser = session->getCurrentUser();
    
    RentList& rentList = currentUser->getRentList();
    return rentList.getRentRecord();
}