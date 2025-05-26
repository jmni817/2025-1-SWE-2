//AddAccount.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Account.h"

class AddAccount {
private:
    // account 객체들을 리스트처럼 구성하고 관리하기 위해서 벡터 씀
    // vector<Account> - 객체들을 담는 동적 배열
    // * accounts - 객체를 담는 벡터에 대한 포인터
    vector<Account>* accounts; 

public:
    AddAccount(vector<Account>* accounts);  // 계정 벡터 생성

    // 회원가입 구현하는 함수
    Account addNewAccount(const string& userID, const string& password, const string& phoneNumber);
};