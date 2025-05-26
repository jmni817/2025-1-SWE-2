//Login.h
#pragma once
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Account.h"
#include "Session.h"

class Login {
private:
    vector<Account>* accounts;
    Session* session;

public:
    Login(vector<Account>* accounts, Session* session);

    bool loginRequest(const string& userID, const string& password);
};