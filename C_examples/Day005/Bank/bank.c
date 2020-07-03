/*
	예금처리를 수행하는 프로그램
	<입력 및 추출형식>

	==Bank Menu==
	1. 고객등록
	2. 입금처리
	3. 출금처리
	4. 잔액현황
	5. 작업종료
	============
	메뉴=

	==고객등록 ==
	id = sss
	money = 1000
	===========
	sss 고객님 계좌가 등록되었습니다.

	==입금처리 ==
	id = 
	money = 
	===========


*/

#include <stdio.h>
#pragma warning(disable : 4996)

//void makeAccount();
void input(int* id, int* balance);
void output(int* id, int* balance);			//출금
void show(int* id, int* balance);				//잔액
int disp();

int main() {

	int id, money; //고객번호와 금액
	int menu =0;
	//무한루프
	while (menu != 5) {
		//화면출력
		menu = disp();

		//선택된 메뉴에 따른 작업을 수행하는 로직
		if (menu == 1) { 
			printf("id = ");
			scanf("%d", &id);
			printf("money = ");
			scanf("%d", &money);

			printf("%d고객님 계좌가 등록되었습니다. \n", id);
		}
		else if (menu == 2){
			input(&id, &money);
		}
		else if (menu == 3){ 
			output(&id, &money);
		}
		else if (menu == 4){ 
			show(&id, &money);
		}
		else if (menu == 5){
			printf("프로그램 종료합니다. \n"); //위에서 5라고 바로 끝내는 건 아니기때문에
			return 0;
		}
		else{
			printf("메뉴의 선택이 틀림\n");
		}

	}

	return 0;
}

int  disp() {
	int menu;
	printf("==Bank Menu==\n1.고객등록\n2.입금처리\n3.출금처리\n4.잔액현황\n5.작업종료\n=============\n");
	printf("menu = ");
	scanf("%d", &menu);
	return menu;

}


void input(int* id, int* balance) {
	/* 
		1. id 일치 여부 
		//sid는 등록된 아이디
		2. 기존 고객 계좌잔액  
	*/
	int sid; // 입력받을 id
	int money;  //입금받을 입금금액
	
	printf("===입금처리===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid){
		do {
			printf("입금금액 =");
			scanf("%d", &money);
		} while (money < 0);

		*balance += money;
		printf("입금처리가 완료되었습니다.\n");
	}
	else {
		printf("등록된 계좌가 존재하지 않습니다. \n");

	}

}

void show(int* id, int* balance) { //출금처리
	/*
		id가 일치하는 지 
		출금 금액이 0보다 커야하고, 예금잔액에 포함되어야 한다. 
	*/
	int sid;
	printf("===잔액보기===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid) {
		printf("고객님의 잔액은 %d원 입니다.\n", *balance);
		printf("출금 처리가 완료되었습니다.\n");
		

	}
	else {
		printf("등록된 계좌가 존재하지 않습니다. \n");

	}
}

void output(int* id, int* balance) {
	int sid;
	int money;
	printf("===출금처리===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid) {
		do {
			printf("출금금액 =");
			scanf("%d", &money);
		} while (money < 0);

		if (*balance < money) {
			printf("잔액이 부족합니다.\n");
		}
		else {
			*balance -= money;
			printf("출금 처리가 완료되었습니다.\n");
		}

	}
	else {
		printf("등록된 계좌가 존재하지 않습니다. \n");

	}


}