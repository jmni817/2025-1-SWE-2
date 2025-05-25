// 세션 헤더파일
#include "Account.h"

class Session {
private:
    Account* currentUserID;

public:
    Session();
    void saveCurrentUser(Account* account);
    Account* getCurrentUser() const;
    void clearSession();
};