// input파일 처리하기
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

#include "AddAccountUI.h"
#include "AddAccount.h"
#include "Account.h"
#include "LoginUI.h"
#include "Login.h"
#include "Session.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 전역 파일 스트림
ifstream in_fp;
ofstream out_fp;
// 전역 객체
Account accountManager;          // 회원 정보 관리
Session sessionManager;          // 현재 로그인 상태 관리
Logout logout(&sessionManager);
LogoutUI logoutUI(&logout);
CloseUI closeUI(&close);


void doTask();

int main() {
    // 파일 열기
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask();

    // 파일 닫기
    in_fp.close();
    out_fp.close();

    return 0;
}

void doTask(ifstream& in_fp, ofstream& out_fp, vector<Account>& accounts) {
    int menu1, menu2;
    bool is_program_exit = false;

    // Control 클래스 객체
    AddAccount addAccount(&accountManager);
    Login login(&accountManager, &sessionManager);

    // UI 클래스 객체
    AddAccountUI addAccountUI(&addAccount);
    LoginUI loginUI(&login);

    while (!is_program_exit && in_fp >> menu1 >> menu2) {
        switch (menu1) {
            case 1:
                if (menu2 == 1) {
                    // 회원가입
                    string userID, password, phoneNumber;
                    in_fp >> userID >> password >> phoneNumber;
                    addAccountUI.input(userID, password, phoneNumber, out_fp);
                }
                break;

            case 2:
                if (menu2 == 1) {
                    // 로그인
                    string userID, password;
                    in_fp >> userID >> password;
                    loginUI.input(userID, password, out_fp);
                }
                else if (menu2 == 2) {
                    // 로그아웃
                    logoutUI.input(out_fp);
                }
                break;

            case 6:
                if (menu2 == 1) {
                    // 종료
                    closeUI.input(out_fp);
                    is_program_exit = true;
                }
                break;
            
            default:
                break;
        }
    }
}
