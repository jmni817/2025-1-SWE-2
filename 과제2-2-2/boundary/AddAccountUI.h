#include <string>
#include <fstream>
using namespace std;

class AddAccount;  // 전방 선언: AddAccount 클래스 사용을 위한 선언

class AddAccountUI {
public:
    // 생성자: Control 객체 주입
    AddAccountUI(AddAccount* control);

    // 회원가입 입력 처리 함수: 입력을 받아 Control을 호출하고, 결과 출력
    void input(const string& userID, const string& password, const string& phoneNumber, ofstream& fout);
private:
    AddAccount* addAccountControl;  // Control 클래스에 대한 포인터
};

