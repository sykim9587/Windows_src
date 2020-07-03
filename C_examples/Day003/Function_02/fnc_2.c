/* 
	1. 함수의 동작 순서
		함수정의 => 함수호출 => 함수 선언
*/

/*
	두 정수를 입력받아 그 합을 계산하여 출려
*/

#include <stdio.h>
#pragma warning(disable:4996)
int adder(int x, int y); // 매개변수 (가인수 = 가짜변수) 아무거나 써주면 된다. 
//또는int adder(int , int)만 해도 된다. 

int main() {
	int num1, num2, sum;

	printf("num1 = ");
	scanf("%d", &num1);
	printf("num2 = ");
	scanf("%d", &num2);
	
	sum = adder(num1, num2); // call by value //실인수 (실제인수)
	printf("%d + %d = %d\n", num1, num2, sum);
	return 0;
}

int adder( int x, int y) {

	return x + y;


}