#include <stdio.h>
#include "Account.h"
#pragma warning(disable:4996)
#include <string.h>
#include <stdlib.h>

//전역변수 
Account* acc;
int size = 3; //초기의 동적할당 사이즈

//함수정의부
void showAccount();
void makeAccount();
void addAccount();

int main() {
	//초기값은 블럭으로 묶고 순서대로 
	//Account acc =  {"홍길동",1,10000} ;

	//Account acc[3]; //이렇게 하면 재정의 안된다. 

	acc = (Account*)malloc(sizeof(Account) * size);
	if (acc == NULL) {
		printf("동적할당 실패\n");
		return 0;
	}
	makeAccount();
	showAccount();
	addAccount();
	//printf("%d", size);
	showAccount( );

	//printf("동적할당 크기 %d\n", sizeof(p));
	free(acc);
	return 0;
}

void showAccount() {
	for (int i = 0; i < size; i++) {
		printf("계좌번호: %d\n", acc[i].id);
		printf("고객이름: %s\n", acc[i].name);
		printf("예금잔액: %d\n", acc[i].balance);
		printf("------------------------------------------\n");
	}
}

void makeAccount() {
	for (int i = 0; i < 3; i++) {
		acc[i].id = 1;
		acc[i].balance = 10000;
		strcpy(acc[i].name, "홍길동");
	}
}

void addAccount() {
	char curName[20];
	int id;
	int money;
	

	printf("계좌번호 = ");
	scanf("%d", &id);
	printf("고객이름 =");
	scanf("%s", curName);
	printf("예금금액 =");
	scanf("%d", &money);
	//할당된 공간의 크기를 벗어나면 동적할당 공간을 재구성해야 한다. 

	acc = (Account*)realloc(acc, size*sizeof(Account)+1);
	if (acc == NULL) {
		printf("동적할당 실패\n");
	}
	(acc+size)->id = id;
	(acc+size)->balance = money;
	strcpy((acc+size)->name,curName);
	size +=1;
}