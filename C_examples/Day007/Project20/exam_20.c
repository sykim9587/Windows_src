/*
	함수(function) : c언어에서 작업이 진행되는 기본 단위
	-서로 관련된 명령어를 하나의 이름으로 묶어서 처리하는 단위. 

	call back: 시스템에 의해서 호출
	사용자에 의해 호출되는 함수 -> 사용자 정의 함수
	-c언어는 main에서 시작해서 main 에서 끝난다. 
	-반환형(return type) : 함수가 호출되어 동작한 후 그 결과를 되돌려 줄 때 되돌려주는 값의 자료형
	return 이라는 키워드가 생략되거나 값이 없으면 void라는 형을 쓴다. 
	(배열)char, int, long, double 등등..
	(사용자 정의 자료형) 배열, 구조체, 포인터형 

	함수 호출: call by name, call by value, call by Reference
	함수 구문의 형식 -> depends on 방환형, 매개변수 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int plus(int x, int y);

int main() {
	//int num1 = 10, num2 = 20;
	int sum = 0;
	int num1, num2;

	printf("num1 = ");
	scanf("%d", &num1);
	
	printf("num2 = ");
	scanf("%d", &num2);


	sum = plus(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}


int plus(int x, int y) {
	return x + y;
}
