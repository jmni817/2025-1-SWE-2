// Rent.cpp
#include "Rent.h"
#include "Bike.h"

// 자전거 전체 목록, 세션 객체에 대한 포인터 받음
Rent::Rent(vector<Bike>* bikes, Session* session) {
    this->bikes = bikes;
    this->session = session;
}

// ui에서 받아온 자전거아이디로 자전거 객체 검색
Bike* Rent::findBike(const string& bikeID) {
    // 전체 자전거 목록을 모두 검색
    for (auto& bike : *bikes) {
        // ID가 일치하는 자전거를 찾는다
        if (bike.getBikeID() == bikeID) {  
            // 찾으면 그 자전거 주소 반환
            return &bike;   
        }
    }
    return nullptr;
}

// 자전거 아이디로 자전거를 찾고, 현재 로그인한 사용자의 고유 rentlist에 해당 자전거 추가
bool Rent::requestRent(const string& bikeID) {
    // 현재 사용자 정보를 세션에서 얻어오기
    Account* currentUser = session->getCurrentUser();
    // 아이디 일치하는 자전거를 검색
    Bike* bike = findBike(bikeID);  
   
    // addRecord함수를 통해 대여한 자전거 정보를 저장하게끔
    currentUser->getRentList().addRecord(*bike);    
    // 현재 유저의 렌트리스트에 자전거 정보 추가

    return true;
}
