//AddAccount.cpp
#include "AddAccount.h"
#include "Account.h"

// 사용자 계정을 새로 만들어서 벡터(리스트)에 추가하는 기능
// accounts: 전체 계정 목록
AddAccount::AddAccount(vector<Account>* accounts) {
    this->accounts = accounts;
}

// 아이디, 비번, 전화번호 입력받고 새 계정에 등록하기
Account AddAccount::addNewAccount(const string& userID, const string& password, const string& phoneNumber) {
    // 새로운 계정 정보를 newAccount에 넣어 Account 객체 생성
    Account newAccount(userID, password, phoneNumber);

    // 리스트의 끝에 추가할 때 사용되는 함수 push_back()
    accounts->push_back(newAccount);  // 계정 목록 끝에 저장
    // 출력할 때 사용할 수 있게 회원가입된 객체 리턴
    return newAccount;
}
