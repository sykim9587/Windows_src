/*
	삼항연산자 : 항을 세 개 가지고 있는 연산자, if-else문의 모체
	조건항? 항1:항2; //항을 실행
	변수 = 조건항? 항1: 항2; //항을 해당 변수에 대입하라 

	두 개의 실수를 입력받아 큰 수를 찾아 출력하는 프로그램 구현
	<입력 및 출력형식>
	두 개의 실수를 입력하세요.
	실수 = 12.4 7.25

	최대값 = 12.4

	<처리조건> 삼항연산자 활용
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	double num1, num2;
	printf("실수 = ");
	scanf("%lf %lf", &num1, &num2);
	printf("최대값 = %.1lf", num1 > num2 ? num1 : num2);
	//su1>su2? printf():printf(); 이렇게도 가능 -> coding 의 효율성을 위해 max 라는 변수 만들어서 구현
	return 0;
}