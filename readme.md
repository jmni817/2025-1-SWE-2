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
removeCurrentUser()
closeSession()

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
NewRentUI
NewRent
Session
Rent
newRent:Rent
-------------
input()
requestRent()
getCurrentUser()
Rent()
addRecord()


[자전거_대여_내역_조회]
RentListUI
RentList
Rent
Session
Bike
-------------
input()
requestRentList()
getCurrentUser()
getRentRecord()
*[For all rent's bikes]: getBikeDetails()


[종료]
CloseUI
Close
System
-------------
input()
closeRequest()
systemClose()