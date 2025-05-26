// CloseUI.cpp
#include "CloseUI.h"
#include "Close.h"

// 클로즈 클래스의 매개변수 받아오는 생성자
CloseUI::CloseUI(Close* control) {
    this->closeControl = control;
}

void CloseUI::input(ofstream& fout) {
    // 출력 메시지
    fout << "6.1 프로그램 종료\n";
    fout << endl;

    closeControl->closeRequest(); // 컨트롤클래스 호출
}
