// Rent.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Bike.h"
#include "Session.h"

class Rent {
private:
    vector<Bike>* bikes;    // 자전거 목록에 의존
    Session* session;       // 세션에 의존

public:
    Rent(vector<Bike>* bikes, Session* session);    //생성자

    // 아이디로 자전거 정보 찾는 함수
    Bike* findBike(const string& bikeID);
    // 대여 요청 처리하는 함수
    bool requestRent(const string& bikeID);
};