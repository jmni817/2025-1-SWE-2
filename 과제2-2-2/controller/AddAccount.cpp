//AddAccount.cpp
#include "AddAccount.h"
#include "Account.h"

// Account클래스에 의존
// accounts: 전체 계정 목록
AddAccount::AddAccount(vector<Account>* accounts) {
    this->accounts = accounts;
}

Account AddAccount::addNewAccount(const string& userID, const string& password, const string& phoneNumber) {
    Account newAccount(userID, password, phoneNumber);

    // 리스트의 끝에 추가할 때 사용되는 함수 push_back()
    accounts->push_back(newAccount);  // 실제 저장
    return newAccount;
}
