#include "CloseUI.h"

void CloseUI::input(ofstream& out) {
    out << "6.1 프로그램 종료\n";
    close->closeRequest(); // Control 계층 호출
}
