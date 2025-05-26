// Close.cpp
#include "Close.h"
#include "SystemController.h"

// 시스템 전체 종료하기 위해 시스템컨트롤러 객체 받기
Close::Close(SystemController* systemController) {
    this->systemController = systemController;
}

void Close::closeRequest() {
    // 시스템컨트롤러 클래스의 멤버함수 호출해서 프로그램 종료
    systemController->systemClose();
}
