/*
	switch(정수값) {
	case 정수값1: 실행할 문장; break;
	case 정수값2: 실행할 문장; break;

	default: 
	}

	점심메뉴 선택하는 프로그램
	1. 백반
	2. 코다리조림
	3. 중식
	4. 일식
	5. 굶기
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int choice;
	printf("메뉴선택 = ");
	scanf("%d", &choice);

	switch (choice) {
	case 1: printf("오늘은 백반 입니다. \n"); break;
	case 2: printf("오늘은 코다리조림 입니다. \n"); break;
	case 3: printf("오늘은 중식 입니다. \n"); break;
	case 4: printf("오늘은 일식 입니다. \n"); break;
	default : printf("다이어트!! \n");		
	}
	return 0;
}
