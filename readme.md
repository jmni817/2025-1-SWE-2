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
- `addRecord()`: 자전거아이디저장 / 엔티티  

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

## 스테레오타입별 클래스 정리

> `newAcc: Account` 등은 단순 객체이므로 클래스 다이어그램에는 포함하지 않음.

### 📘 Boundary
- `AddAccountUI`  
- `LoginUI`  
- `LogoutUI`  
- `AddBikeUI`  
- `RentUI`  
- `RentRecordUI`  
- `CloseUI`

### ⚙️ Control
- `AddAccount`  
- `Login`  
- `Logout`  
- `AddBike`  
- `Rent`  
- `RentRecord`  
- `Close`

### 🧾 Entity
- `Account`  
  - 회원 정보를 담는 엔티티  
  - 회원가입 및 로그인 시 사용됨  
- `Bike`  
  - 자전거 ID 및 제품명 관리  
- `RentList`  
  - 회원별 대여 기록을 보관 (1인 1RentList)  
- `Session`  
  - 현재 로그인된 회원 정보 유지  
- `System`  
  - 시스템 종료를 위한 상징적 역할  

---
