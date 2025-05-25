//AddAccount.cpp
#include "AddAccount.h"

AddAccount::AddAccount(vector<Account>* accounts) {
    this->accounts = accounts;
}

Account AddAccount::addNewAccount(const string& userID, const string& password, const string& phoneNumber) {
    Account newAccount(userID, password, phoneNumber);
    accounts->push_back(newAccount);  // 실제 저장
    return newAccount;
}
