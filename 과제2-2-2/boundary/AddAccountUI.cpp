#include "AddAccountUI.h"
#include "AddAccount.h"
#include "Account.h"
#include <fstream>
using namespace std;

// AddAccount 객체에 접근해서 실제 회원가입 처리 기능을 수행할 수 있도록 의존성을 주입
// 회원가입 절차의 로직을 직접 몰라도 되게 함
AddAccountUI::AddAccountUI(AddAccount* control) {
    this->addAccountControl = control;
}

void AddAccountUI::input(const string& userID, const string& password, const string& phoneNumber, ofstream& fout) {
    Account newAccount = addAccountControl->addNewAccount(userID, password, phoneNumber);
    
    fout << "1.1. 회원가입" << endl;
    fout << "> " << newAccount.getId() << " " 
                << newAccount.getPw() << " " 
                << newAccount.getPhone() << endl;
}