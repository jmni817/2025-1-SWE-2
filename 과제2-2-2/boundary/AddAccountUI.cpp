// AddAccountUI.cpp
#include "AddAccountUI.h"
#include "AddAccount.h"
#include "Account.h"

// AddAccount 객체에 접근해서 실제 회원가입 처리 기능을 수행할 수 있도록 의존성을 주입
// 객체를 직접 생성하지 않고 외부에서 넣어줌 (결합도 내려감)
// 생성자의 매개변수로 컨트롤 클래스의 객체를 전달받고있음
// 회원가입 절차의 로직을 직접 몰라도 되게 함
// https://dmdwn3979.tistory.com/21#%EC%-D%--%EC%A-%B-%EC%--%B-%--%EC%A-%BC%EC%-E%---Dependency%--Injection-%--in%--Javascript
AddAccountUI::AddAccountUI(AddAccount* control) {
    this->addAccountControl = control;
}

void AddAccountUI::input(const string& userID, const string& password, const string& phoneNumber, ofstream& fout) {
    // 컨트롤 객체한테 넘겨서 다음 로직을 구현!! (이러기 위해서 의존성주입이 필요함)
    // 바운더리는 그냥 입력받아서 넘기고 출력하는 용도니까...
    // addAccountControl
    Account newAccount = addAccountControl->addNewAccount(userID, password, phoneNumber);
    
    // 출력 메시지
    fout << "1.1. 회원가입" << endl;
    // 아이디, 비밀번호 휴대폰번호 출력
    fout << "> " << newAccount.getId() << " " << newAccount.getPw() << " " << newAccount.getPhone() << endl;
    fout << endl;
}