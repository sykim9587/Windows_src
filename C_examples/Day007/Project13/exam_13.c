/*
	키보드로 부터 정수 입력해 그 합을 출력하는 프로그램
	단, 입력하는 정수가 음수가 되기 전까지 반복.
	<입력 출력>
	정수 = 5
	합 = 5
	정수 = 15
	합 = 20
	정수= -1
	프로그램 종료.
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;
	int sum =0;
	while (1) {
		printf("정수 =");
		scanf("%d", &num);
		if (num < 0) break;
		sum += num;
		printf("현재 합 = %d\n", sum);
	}
	printf("프로그램 종료\n");
	return 0;
}