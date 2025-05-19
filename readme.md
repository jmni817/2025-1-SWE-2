# 회원가입  
AddAccountUI  
AddAccount  
Account  
newAcc:Account  
-------------  
*input()*  
*addNewAccount()*  
*Account()*  
  
# 로그인  
LoginUI  
Login  
Account  
Session  
-------------  
*input()*  
*loginRequest()*  
*verifyAccount()*  
*saveCurrentUser()*  
  
# 로그아웃  
LogoutUI  
Logout  
Session  
-------------  
*input()*  
*logoutRequest()*  
*clearSession()*  
  
# 자전거_등록  
AddBikeUI  
AddBike  
Bike  
newBike:Bike  
-------------  
*input()*
*addNewBike()*
*Bike()*
  
# 자전거_대여  
RentUI  
Rent  
Session  
RentList  
-------------  
*input()*
*requestRent()*
*getCurrentUser()*
*addRecord()*
  
  
# 자전거_대여_내역_조회  
RentRecordUI  
RentRecord  
RentList  
Session  
Bike  
-------------  
*input()*
*requestRentList()*
*getCurrentUser()*
*getRentRecord()*
**[For all bikes in rentlist]: getBikeDetails()*
  
  
# 종료  
CloseUI  
Close  
System  
-------------  
*input()*
*closeRequest()*
*systemClose()*
  
  
  
  
  
  
  
# 스테레오타입별 클래스 정리
  
[boundary]  
AddAccountUI  
LoginUI  
LogoutUI  
AddBikeUI  
RentUI  
RentRecordUI  
CloseUI  
  
[control]  
AddAccount  
Login  
Logout  
AddBike  
Rent  
RentRecord  
Close  
  
[entity]  
Account  
-   회원의 정보를 담는 엔티티 클래스  
    회원가입, 로그인에서 생성 및 검증됨  
Bike  
-   등록된 자전거의 ID 및 제품명  
RentList  
-   특정 회원의 대여 기록을 보관  
    1인 1RentList  
Session  
-   현재 로그인된 회원 정보를 유지  
System (종료를 위한 상징적 역할)  