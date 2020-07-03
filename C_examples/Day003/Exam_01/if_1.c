/*
	제어문(control statement) : 프로그램 흐름이나 순서 제어하는 문장
	1. 정의: 일반적으로 프로그램은 위에서 아래로, 좌에서 우로 진행
	2. 종류
		1)선택문 or 조건문 or 비교/판단문
			- 주어진 조건에 의해 판단하여 문장의 실행여부를 결정한다. 
			- 조건은 반드시 그 결과가 참 또는 거짓으로 판정되어야 한다. 
			-단순if문, if~else문, 다중if문, switch~case
		2) 반복문
			-동일하거나 유사한 문장을 횟수 또는 조건에 의해 반복해서 실행하는 문장
			- 유사한 문장: 일정한 규칙을 가지고 있는 문장
			- for 문, while 문, do-while문 
		3) 기타제어문
			- break 문 : 제어문을 동작하라 때 break문을 만나면 가까움 블럭( {} ) 벗어나라는 의미
			- continue 문 : 제어문을 동작할 때 continue 문을 만나면 이하생략의 의미를 가진다. 
			- goto 도 있지만 잘 안쓴다. (무조건 지정) -> 무한루프에 빠지는 경우가 있다.  
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	// 선언
	int number;

	//입력
	printf("숫자 = ");
	scanf("%d" , &number);

	//처리
	if (number%2==0) {
		printf("입력받은 숫자 %d는 ", number);
		printf("짝수입니다.\n");
	}// if 끝
	else {
		printf("입력받은 숫자 %d는 ", number);
		printf("홀수입니다.\n");
	}

	//출력
	printf("finished\n");


	return 0; //system에 알려주는것
}