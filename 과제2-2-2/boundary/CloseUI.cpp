#include "CloseUI.h"
#include "Close.h"

CloseUI::CloseUI(Close* control) {
    this->closeControl = control;
}

void CloseUI::input(ofstream& fout) {
    fout << "6.1 프로그램 종료\n";
    fout << endl;

    closeControl->closeRequest(); // 컨트롤클래스 호출
}
