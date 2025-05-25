#include "Account.h"
#include "Session.h"
#include <vector>
#include <string>
using namespace std;

class Login {
private:
    vector<Account>* accounts;
    Session* session;

public:
    Login(vector<Account>* accounts, Session* session);

    bool loginRequest(string& userID, string& password);
};