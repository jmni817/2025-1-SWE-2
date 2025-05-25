# 시스템 구성 정리

---

## 회원가입
**Classes**  
- `AddAccountUI`  
- `AddAccount`  
- `Account`  
- `newAcc: Account` 

**Methods**  
- `input()`: 바운더리  
- `addNewAccount()`: 컨트롤  
- `Account()`: 아이디,비번,전번저장 / 엔티티    

---

## 로그인
**Classes**  
- `LoginUI`  
- `Login`  
- `Account`  
- `Session`  

**Methods**  
- `input()`: 바운더리  
- `loginRequest()`: 컨트롤   
- `verifyAccount()`: 엔티티   
- `saveCurrentUser()`: 현재유저아이디저장 / 엔티티  

---

## 로그아웃
**Classes**  
- `LogoutUI`  
- `Logout`  
- `Session`  

**Methods**  
- `input()`: 바운더리  
- `logoutRequest()`: 컨트롤  
- `clearSession()`: 엔티티  

---

## 자전거 등록
**Classes**  
- `AddBikeUI`  
- `AddBike`  
- `Bike`  
- `newBike: Bike`    

**Methods**  
- `input()`: 바운더리  
- `addNewBike()`: 컨트롤  
- `Bike()`: 자전거아이디,자전거제품명저장 / 엔티티  

---

## 자전거 대여
**Classes**  
- `RentUI`  
- `Rent`  
- `Session`  
- `RentList`  

**Methods**  
- `input()`: 바운더리  
- `requestRent()`: 컨트롤  
- `getCurrentUser()`: 엔티티  
- `findBike()`: 엔티티  
- `addRecord()`: 자전거객체저장 / 엔티티  

---

## 자전거 대여 내역 조회
**Classes**  
- `RentRecordUI`  
- `RentRecord`  
- `RentList`  
- `Session`  
- `Bike`  

**Methods**  
- `input()`: 바운더리  
- `requestRentList()`: 컨트롤  
- `getCurrentUser()`: 엔티티  
- `getRentRecord()`: 엔티티  
- `getBikeDetails()`: 엔티티 

---

## 종료
**Classes**  
- `CloseUI`  
- `Close`  
- `System`  

**Methods**  
- `input()`: 바운더리  
- `closeRequest()`: 컨트롤  
- `systemClose()`: 컨트롤  

---

## Analysis Class Diagram 정리

> `newAcc: Account` 등은 단순 객체이므로 클래스 다이어그램에는 포함하지 않음.

###  Boundary
- `AddAccountUI`  : input();  
- `LoginUI`  : input();  
- `LogoutUI`  : input();  
- `AddBikeUI`  : input();  
- `RentUI`  : input();    
- `RentRecordUI`  : input();    
- `CloseUI`  : input();  

###  Control
- `AddAccount`  : addNewAccount();
- `Login`  : loginRequest();
- `Logout`  : logoutRequest();
- `AddBike`  : addNewBike();
- `Rent`  : requestRent(); findBike();  
- `RentRecord`  : requestRentList();  
- `Close`  : closeRequest();  
- `System`  : systemClose();  
  
###  Entity
- `Account`  : userID, password, phoneNumber / verifyAccount(); Account();  
- `Bike`  : bikeID, bikeName / Bike(); getBikeDetails();  
- `RentList`  : bikeRecords / addRecord(); getRentRecord();  
- `Session`  : currentUserID / saveCurrentUser(); clearSession(); getCurrentUser();    
  
---
  
##  Association  
> *하나의 컨트롤 클래스가 복수의 엔티티 인스턴스를 다룰 수 있는가?*  
  
### Multiplicity  
- 회원가입: 중복 아이디 검증해야되므로 리스트 전체에 접근가능해야함! `1..*` 
- 로그인: 아이디 비번 검증하려면 리스트 전체를 조회(접근)해야함! `1..*`  
- 로그인/로그아웃 상태: 세션에 `1대1`로 업데이트됨  
- 자전거 등록: 자전거가 아예 없는 상태에도, 자전거가 있을때도 아이디 중복여부 검증해서 새로 등록해야함. `0..*`  
- 자전거 대여: 자전거 아이디를 자전거 리스트 전체에서 조회가능해야함! `1..*`  
- 자전거 대여 목록 조회: rentList는 회원과 `1대1`로 생성 
    
### Aggregation   
- 전체 객체가 사라져도 부분 객체는 독립적으로 존재할 수 있는 경우
    - RentList가 사라져도 Bike는 독립적으로 존재  
  
### Composition  
- 전체 객체가 사라지면 부분 객체도 함께 소멸    
    - Account가 사라지면 RentList도 소멸  

## Designed Class Diagram 정리