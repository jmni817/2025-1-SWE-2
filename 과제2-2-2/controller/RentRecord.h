// RentRecord.h
#include <vector>
#include "Bike.h"
#include "Session.h"

class RentRecord {
private:
    Session* session;  // 현재 로그인 사용자 정보 접근용

public:
    RentRecord(Session* session);

    vector<Bike> requestRentList();
};