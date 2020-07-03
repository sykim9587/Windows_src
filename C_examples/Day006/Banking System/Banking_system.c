/*
	은행 계좌관리 프로그램을 구현하시오
	다음 주어진 입출력 형식에 맞게 동작되도록 프로그래밍 하시오
	<입력 및 출력형식>
	=====Bank Menu =====
	1. 계좌등록
	2. 입금처리
	3. 출금처리
	4. 전체고객 잔액조회
	5. 프로그램 종료
	===================
	메뉴 =

	<처리조건>
	1. 계좌(Account)는 고객이름, 예금잔고, 계좌번호를 객체화하여 구조체로 정의한다. 
	2. 계좌번호는 정수형으로 중복없이 입력받아 해당 계좌를 식별하는 용도로 사용한다. 
	3. 입금처리는 해당 고객의 계좌를 식별한 후 고객의 잔고에 입력한 입금금액 누적하여 처리,
		해당 계좌가 없거나 입금금액이 0보다 작을 경우 에러 메세지를 출력한다. 
	4. 출금처리는 해당 고객의 계좌를 식별 한 후 고객의 잔고에 입력한 출금금액을 차감한다. 
		 계좌가 존재하지 않거나, 출금금액이 예금잔고보다 많으면 에러 메세지
	5. 전체고객 예금현황 출력할 수 있고, 사용자가 원하는 작업 수행 가능
	6. 언제든지 프로그램 종료 가능
	7. 배열 활용하여 둘 이상의 고객 입력받아 철

	=====입금처리==========
	계좌번호 =
		or 입력한 계좌번호 존재하지 않습니다. 
	입금금액 =
		or 입금금액은 0보다 큰 값
	======================
	입금처리 완료.
	현재 고객님 계좌잔액은 xxx원 입니다. 

	=====출금처리==========
	계좌번호 =
	출금금액 =
	======================
	출금처리 완료.
	현재 고객님 계좌잔액은 xxx원 입니다.

*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX 100		//고객수 -> 나중에 동적할당 하면 낭비 안한다.

////숫자에 의미를 넣고싶을 때 
//#define NEW 1
//#define INPUT 2
//#define OUTPUT 3
//#define SHOW 4
//#define EXIT 5

////너무 기니까 열거형!
//enum MENU{MAKE = 1, INPUT, OUTPUT, SHOW, EXIT}; //1로 초기화 

typedef struct Account {
	char name[20];
	int id;					//계좌번호
	int balance;			//예금잔액
}Account;

//전역변수 -> 모든함수에서 사용할 수 있도록
Account accList[MAX];
int index = 0;				//배열의 위치, 고객수를 카운트 

//함수 선언부
void showMenu(); //메뉴 출력
void makeAccount(); //계좌 개설
void deposit(); //입금처리
void withdraw(); //출금처리
void showAccount(); //전체 고객 출력

void main() {
	int menu;
	
	//enum MENU m; -> switch case 에 쓴다.
	while (1) { //무한loop
		//메뉴출력
		showMenu();
		printf("메뉴 = ");
		scanf("%d", &menu);
		

		if (menu == 1) {
			makeAccount();
		}
		else if (menu == 2) {
			deposit();
		}
		else if (menu == 3) {
			withdraw();
		}
		else if (menu == 4) {
			showAccount();
		}
		else if (menu == 5) {
			break;
		}
		else { //잘못입력
			printf("메뉴의 선택이 올바르지 않습니다.\n");
		}

	}
	printf("프로그램을 종료합니다.\n");
	return 0;
}

void showMenu() //메뉴 출력
{
	printf("\n====Bank Menu====\n");
	printf("1.계좌개설\n");
	printf("2.입금처리\n");
	printf("3.출금처리\n");
	printf("4.전체고객 잔액현황\n");
	printf("5.프로그램 종료\n");
	printf("==================\n");
}

void makeAccount()//계좌 개설
{
	char curName[20];
	int id;
	int money;

	printf("====입금처리====\n");

	printf("계좌 번호 =");
	scanf("%d", &id);


	printf("고객이름 =");
	scanf("%s", curName);
	printf("예금금액 = ");
	scanf("%d", &money);

	//입력받은 값을 구조체 배열에 저장
	accList[index].id = id;
	strcpy(accList[index].name, curName); // 문자열은 대입연산자 사용 못한다. 
	accList[index].balance = money;

	printf("입금처리가 완료되었습니다. \n");
	printf("고객님의 잔액은 %d원 입니다. \n", accList[index].balance);

	index++;// 새로운 고객 담을 칸으로 이동
}

void deposit() //입금처리
{
	/* 계좌번호 확인, 입금금액 받고 해당 계좌에 누적*/
	int id;
	int money;

	printf("\n===입금처리===\n");
	printf("계좌번호 = ");
	scanf("%d", &id);

	//입력받은 계좌번호와 구조체배열에 일치하는지 보기
	for (int i = 0; i < index; i++) {
		if (accList[i].id == id) {
			printf("입금금액 = ");
			scanf("%d", &money);
			accList[i].balance += money;

			printf("입금처리 완료.\n");
			printf("현재 고객님 잔액은 %d 원입니다. \n", accList[i].balance);
			return;
		}
	}
	printf("계좌번호가 일치하지 않습니다. \n");
}

void withdraw() //출금처리
{
	/* 계좌번호 입력, 입력한 계좌번호가 구조체 배열에 존재하는지 파악, 출금금액 입력
		단 출금금액이 부족하면 잔고부족 출력	
	*/
	int id;
	int money;
	printf("\n===출금처리===\n");
	printf("계좌번호 = ");
	scanf("%d", &id);

	//입력받은 계좌번호와 구조체배열에 일치하는지 보기
	for (int i = 0; i < index; i++) {
		if (accList[i].id == id) {
			printf("출금금액 = ");
			scanf("%d", &money);

			if (accList[i].balance < money) {
				printf("잔액부족합니다. \n");
				printf("현재 고객님 잔액은 %d 원입니다. \n", accList[i].balance);
				return;
			}
			accList[i].balance -= money;
			printf("출금처리 완료.\n");
			printf("현재 고객님 잔액은 %d 원입니다. \n", accList[i].balance);
			return;
		}
	}
	printf("계좌번호가 일치하지 않습니다. \n");
}

void showAccount() //전체 고객 출력
{
	/*
		등록된 고객의 수만큼 반복해서 출력
	*/
	printf("\n====전체고객 출력===\n");
	for (int i = 0; i < index; i++) {
		printf("%5d %10s %20d\n", accList[i].id, accList[i].name, accList[i].balance);
	}

}