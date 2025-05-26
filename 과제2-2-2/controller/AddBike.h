// AddBike.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Bike;

class AddBike {
private:
    // bike 객체들을 리스트처럼 구성하고 관리하기 위해서 벡터 씀
    // vector<Bike> - 객체들을 담는 동적 배열
    // * bikes - 객체를 담는 벡터에 대한 포인터
    vector<Bike>* bikes;

public:
    AddBike(vector<Bike>* bikes);

    Bike addNewBike(const string& bikeID, const string& bikeName);
};