// main.cpp
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
/*
#include "boundary/AddAccountUI.h"
#include "controller/AddAccount.h"
#include "entity/Account.h"
#include "boundary/LoginUI.h"
#include "controller/Login.h"
#include "boundary/LogoutUI.h"
#include "controller/Logout.h"
#include "entity/Session.h"
#include "boundary/AddBikeUI.h"
#include "controller/AddBike.h"
#include "entity/Bike.h"
#include "boundary/RentUI.h"
#include "controller/Rent.h"
#include "entity/RentList.h"
#include "boundary/RentRecordUI.h"
#include "controller/RentRecord.h"
#include "boundary/CloseUI.h"
#include "controller/Close.h"
#include "controller/SystemController.h"
*/
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
#include "Bike.h"
#include "RentUI.h"
#include "Rent.h"
#include "RentList.h"
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
vector<Account> accounts;  // 회원 객체를 리스트화하기위해 벡터 사용
vector<Bike> bikes;         // 자전거 객체를 리스트화하기위해 벡터 사용
Session session;           // 로그인 세션
SystemController systemController;  // 전체 종료

int main() {
    // 관리자 계정은 미리 추가해놓기!!
    accounts.push_back(Account("admin", "admin", "00000000000"));

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
    AddBike addBike(&bikes);
    Rent rent(&bikes, &session);
    RentRecord rentRecord(&session);
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

                    // 입력 파일에서 아이디, 비밀번호, 전화번호 받음
                    in_fp >> userID >> password >> phoneNumber;
                    // UI로 넘기기
                    addAccountUI.input(userID, password, phoneNumber, out_fp);
                }
                break;

            case 2:
                if (menu_level_2 == 1) {
                    // 로그인
                    string userID, password;

                    // 입력 파일에서 아이디, 비밀번호 받음
                    in_fp >> userID >> password;
                    // UI 로 넘기기
                    loginUI.input(userID, password, out_fp);
                }
                else if (menu_level_2 == 2) {
                    // 로그아웃
                    // UI로 넘기기
                    logoutUI.input(out_fp);
                }
                break;

            case 3:
                if (menu_level_2 == 1) {
                    // 자전거 등록
                    string bikeID, bikeName;

                    // 입력 파일에서 자전거아이디, 자전거제품명 받음
                    in_fp >> bikeID >> bikeName;
                    // UI로 넘기기
                    addBikeUI.input(bikeID, bikeName, out_fp);
                }
                break;

            case 4:
                if (menu_level_2 == 1) {
                    // 자전거 대여
                    string bikeID;

                    // 입력 파일에서 자전거아이디 받음
                    in_fp >> bikeID;
                    // UI로 넘기기
                    rentUI.input(bikeID, out_fp);
                }
                break;

            case 5:
                if (menu_level_2 == 1) {
                    // 자전거 대여 리스트 조회
                    // UI로 넘겨서 처리
                    rentRecordUI.input(out_fp);
                }
                break;

            case 6:
                if (menu_level_2 == 1) {
                    // 프로그램 종료
                    // UI로 넘기기
                    closeUI.input(out_fp);
                    // 프로그램 종료하기
                    is_program_exit = 1;
                }
                break;

            default:
                break;
        }
    }
}
