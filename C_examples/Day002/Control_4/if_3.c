/*
	세 개의 정수를 입력받아 주어진 조건과 출력형식에 맞게 출력되도록 구현

	<입력방식>
	첫번째수=
	두번째수=
	세번째수=

	<출력>
	최대값 >= 중앙값 >= 최소값

	<처리조건>
	1. 입력받는 변수 num1, num2, num3 이용, 임시 기억장소 tmp이용
	2. 출력변수는 num1>= num2 >= num3

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//알고리즘 문제! 변수도 작아지고 코드도 작아진다. 
	int num1, num2, num3, tmp;
	
	printf("첫번째수 =  ");
	scanf("%d", &num1);
	printf("두번째수 =  ");
	scanf("%d", &num2);
	printf("세번째수 =  ");
	scanf("%d", &num3);

	//만약 가장 큰 수가 num1 이 아니라면 -> num2 or num3 이 큰수라면
	if (num2 > num1 && num2 > num3) { //num2 가 가장 크다
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	else if (num3 > num1 && num3 > num2) { //num3 이 가장 크다
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}

	if (num3 > num2) { //num2가 제일 작지 않다면
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}

	//가장 큰수가 num1에 들어가야한다
	printf("%d >= %d >= %d\n", num1, num2, num3);
	return 0;
}