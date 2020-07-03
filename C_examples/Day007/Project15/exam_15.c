/*
	구구단 중에서 한개의 단을 입력받아서 그 단을 출력하는 프로그램 작성
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int dan;
	int i=1;
	printf("단수 = ");
	scanf("%d", &dan);

	/*for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}*/

	//while 문으로 풀기
	while (i <= 9) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}