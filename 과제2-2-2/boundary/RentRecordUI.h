#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "RentRecord.h"

class RentRecordUI {
private:
    RentRecord* rentRecordControl;  // 렌트레코드 클래스 연결고리

public:
    RentRecordUI(RentRecord* control);  //생성자

    // 입출력 처리
    void input(ofstream& fout);
};
