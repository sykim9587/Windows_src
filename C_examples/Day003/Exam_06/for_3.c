/*
	구구단을 출력하는 프로그램
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int dan, i; // i is 제어변수

	printf("입력하세요: ");
	scanf("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	return 0;
}