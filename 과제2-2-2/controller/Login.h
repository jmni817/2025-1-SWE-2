#include <string>
#include "Account.h"
using namespace std

class Login {
private:
    AccountList* accountList;
public:
    Login(AccountList* list);
    void loginRequest(const string& id, const string& pw);
};
