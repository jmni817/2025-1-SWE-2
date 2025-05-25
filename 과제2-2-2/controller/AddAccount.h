#include "Account.h"
#include <vector>
using namespace std;

class AddAccount {
private:
    vector<Account>* accounts;  // 외부 vector에 접근

public:
    AddAccount(vector<Account>* accounts);

    Account addNewAccount(const string& userID, const string& password, const string& phoneNumber);
};