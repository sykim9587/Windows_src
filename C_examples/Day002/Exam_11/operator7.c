/*
	shift 연산자: 산술연산과 자료이동
	1. 종류
		-left shift: 좌측으로 주어진 비트수만큼 이동, 빈칸은 0으로
		 연산: 원값*2^(이동하는비트수)
		-right shift
		 연산: 원값/2^이동비트수
	2. 
	<<
	>>
*/

#include <stdio.h>

int main() {
	int su1 = 8, su2 = 1;
	int res1, res2;

	res1 = su1 >> 3;
	res2 = su2 << 3;

	printf("res1 = %d res2 = %d\n", res1, res2);

	return 0;
}
