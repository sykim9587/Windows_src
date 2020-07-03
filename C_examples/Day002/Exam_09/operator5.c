/* 
	논리 연산자 : 논리값이 나온다. 하나이상의 관계연산자를 묶어서 계산 수행시 많이 사용 된다. 
	NOT(!: 논리부정), OR, AND
*/

#include <stdio.h>

int main() {
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	res1 = num1 == 10 && num2 == 12;
	res2 = num1 < 12 || num2 >12;
	res3 = !num1; // 유일하게 C언어만 0이 아니면 참이다. 

	printf("res1 = %d res2 = %d res3 = %d\n", res1, res2, res3);
	return 0;

}