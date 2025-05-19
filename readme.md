[회원가입]
AddAccountUI
AddAccount
Account
newAcc:Account
-------------
input()
addNewAccount()
Account()

[로그인]
LoginUI
Login
Account
Session
-------------
input()
loginRequest()
verifyAccount()
saveCurrentUser()

[로그아웃]
LogoutUI
Logout
Session
-------------
input()
logoutRequest()
clearSession()

[자전거_등록]
AddBikeUI
AddBike
Bike
newBike:Bike
-------------
input()
addNewBike()
Bike()

[자전거_대여]
RentUI
Rent
Session
RentList
-------------
input()
requestRent()
getCurrentUser()
addRecord()


[자전거_대여_내역_조회]
RentRecordUI
RentRecord
RentList
Session
Bike
-------------
input()
requestRentList()
getCurrentUser()
getRentRecord()
*[For all bikes in rentlist]: getBikeDetails()


[종료]
CloseUI
Close
System
-------------
input()
closeRequest()
systemClose()







스테레오타입별 클래스 정리

<boundary>
AddAccountUI
LoginUI
LogoutUI
AddBikeUI
RentUI
RentRecordUI
CloseUI

<control>
AddAccount
Login
Logout
AddBike
Rent
RentRecord
Close

<entity>
Account
Bike
RentList
Session
System (종료를 위한 상징적 역할)