// Account.h
#include <string>
using namespace std;

class Account {
private:
    string userID;
    string password;
    string phoneNumber;

public:
    Account() = default;
    Account(string userID, string password, string phoneNumber);

    string getId() const;
    string getPw() const;
    string getPhone() const;

    // 로그인 검증용
    bool verifyAccount(string& userID, string& password);
};