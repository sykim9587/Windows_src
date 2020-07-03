/*
	두개의 정수 입력 -> 큰수 출력
	삼항연산자 이용

	<입력형식>
	첫번째수 =
	두번째수 =
	세번째수 =

	<출력형식>
	큰수 : xx

	<tip>
	변수는 변하는 수를 뜻한다. 해당 변수에 다른값 들어오면 그 전에 같은 지워진다. 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int num1, num2, num3,max; // first, second, max 이렇게 지정 

	printf("세 수 입력:");
	scanf("%d %d %d", &num1, &num2, &num3);
	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;
	printf("큰수 : %d",max);

	return 0;
}