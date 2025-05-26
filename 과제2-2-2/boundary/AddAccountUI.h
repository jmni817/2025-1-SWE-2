//AddAccountUI.h
#pragma once
#include <string>
#include <fstream>
using namespace std;

#include "AddAccount.h"

class AddAccountUI {
private:
    AddAccount* addAccountControl;  // Control 클래스에 대한 포인터

public:
    // 생성자에서 매개변수로 컨트롤클래스의 객체 받아옴
    AddAccountUI(AddAccount* control);

    // 입력처리
    // 컨트롤클래스 호출, 결과 출력
    void input(const string& userID, const string& password, const string& phoneNumber, ofstream& fout);
};

