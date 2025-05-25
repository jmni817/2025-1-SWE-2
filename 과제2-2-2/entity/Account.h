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
};