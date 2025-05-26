// AddBikeUI.h
#pragma once
#include <string>
#include <fstream>
using namespace std;

#include "AddBike.h"

class AddBikeUI {
private:
    // 애드바이크 클래스를 가리키는 포인터
    AddBike* addBikeControl;

public:
    // 생성자
    AddBikeUI(AddBike* control);

    // 입력 처리하고 메세지 출력
    void input(const string& bikeID, const string& bikeName, ofstream& fout);
};
