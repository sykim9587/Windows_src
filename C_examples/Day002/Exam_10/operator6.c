/*
	비트연산자 : 비트 변환 후 계산을 수행하는 연산자
	- &, |, ~
	-비트부정 (~) 연산시, 부호가 음수로 변경되면 2의 보수처리를 해야한다. 
		1의 보수 (1's complement) : 0->1, 1->0
		2의 보수: 1의 보수후 마지막 비트에 1 더하기
*/

#include <stdio.h>

int main() {

	int num1 = 5; // 0000 0101
	int num2 = 9; // 0000 1001
	int res1, res2, res3;

	res1 = num1 & num2; //0000 0001 -> 1
	res2 = num1 | num2; // 0000 1101 ->13
	res3 = ~num1;
	/*
	0000 0101
	1111 1010
	1 000 0101
	1 000 0110 -> -6
	*/

	printf("res1 = %d res2 = %d res3 = %d\n", res1, res2, res3);

	return 0;
}