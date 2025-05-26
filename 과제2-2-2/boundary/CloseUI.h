#pragma once
#include <fstream>
#include <string>
using namespace std;

#include "Close.h"

class CloseUI {
private:
    Close* closeControl;    // 클로즈 클래스 연결

public:
    CloseUI(Close* close);  //컨트롤클래스 가리키는 포인터

    // 입력 처리하고 메세지 출력
    void input(ofstream& fout);
};