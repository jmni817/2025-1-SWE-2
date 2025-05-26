// Close.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "SystemController.h"

class Close {
private:
    SystemController* systemController; // 시스템컨트롤러와 연결
    
public:
    Close(SystemController* systemController);  // 생성자

    // 프로그램 종료하기 위한 함수
    void closeRequest();
};