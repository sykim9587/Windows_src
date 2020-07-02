/*
	제한된 조건에서 반복을 처리할 때 사용한다. 횟수가 명확하다. 
	1부터 100까지 홀수의 합 = 2500

*/

#include <stdio.h>

int main() {
	int sum = 0;
	int i;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue;
		sum += i;
	}

	printf("1부터 100까지의 홀수의 합 = %d", sum);

	return 0;

}