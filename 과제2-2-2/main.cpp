// main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// 프로젝트 관련 헤더
#include "AddAccountUI.h"
#include "AddAccount.h"
#include "Account.h"
#include "LoginUI.h"
#include "Login.h"
#include "LogoutUI.h"
#include "Logout.h"
#include "Session.h"
#include "AddBikeUI.h"
#include "AddBike.h"
#include "RentUI.h"
#include "Rent.h"
#include "RentRecordUI.h"
#include "RentRecord.h"
#include "CloseUI.h"
#include "Close.h"
#include "SystemController.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void program_exit();

// 파일 스트림
ofstream out_fp;
ifstream in_fp;

// 전역 객체
vector<Account> accounts;  // 회원 목록
Session session;           // 로그인 세션
SystemController systemController;  // 전체 종료

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

void doTask() {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Control 클래스 객체
    AddAccount addAccount(&accounts);
    Login login(&accounts, &session);
    Logout logout(&session);
    AddBike addBike(&accounts, &session);
    Rent rent(&accounts, &session);
    RentRecord rentRecord(&accounts, &session);
    Close close(&systemController);

    // UI 클래스 객체
    AddAccountUI addAccountUI(&addAccount);
    LoginUI loginUI(&login);
    LogoutUI logoutUI(&logout);
    AddBikeUI addBikeUI(&addBike);
    RentUI rentUI(&rent);
    RentRecordUI rentRecordUI(&rentRecord);
    CloseUI closeUI(&close);

    while (!is_program_exit) {
        in_fp >> menu_level_1 >> menu_level_2;

        switch (menu_level_1) {
            case 1:
                if (menu_level_2 == 1) {
                    // 회원가입
                    string userID, password, phoneNumber;
                    in_fp >> userID >> password >> phoneNumber;
                    addAccountUI.input(userID, password, phoneNumber, out_fp);
                }
                break;

            case 2:
                if (menu_level_2 == 1) {
                    // 로그인
                    string userID, password;
                    in_fp >> userID >> password;
                    loginUI.input(userID, password, out_fp);
                }
                else if (menu_level_2 == 2) {
                    // 로그아웃
                    logoutUI.input(out_fp);
                }
                break;

            case 3:
                if (menu_level_2 == 1) {
                    // 자전거 등록
                    string bikeID, bikeName;
                    in_fp >> bikeID >> bikeName;
                    addBikeUI.input(bikeID, bikeName, out_fp);
                }
                break;

            case 4:
                if (menu_level_2 == 1) {
                    // 자전거 대여
                    string bikeID;
                    in_fp >> bikeID;
                    rentUI.input(bikeID, out_fp);
                }
                break;

            case 5:
                if (menu_level_2 == 1) {
                    // 자전거 대여 리스트 조회
                    rentRecordUI.input(out_fp);
                }
                break;

            case 6:
                if (menu_level_2 == 1) {
                    // 프로그램 종료
                    closeUI.input(out_fp);
                    is_program_exit = 1;
                }
                break;

            default:
                break;
        }
    }
}
