#pragma once
//한 사람의 은행계좌를 관리하는 구조체 정의문
typedef struct Account {
	char name[20];		//고객이름
	int id;						//계좌번호
	int balance;			//은행잔고
}Account;