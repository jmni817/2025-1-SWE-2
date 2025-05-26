#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Rent.h"

class RentUI {
private:
    Rent* rentControl;  // 렌트 클래스와 연결

public:
    RentUI(Rent* control);     // 생성자

    // 입력 처리, 자전거아이디 다음 클래스로 넘기기, 출력 처리
    void input(const string& bikeID, ofstream& fout);
};
