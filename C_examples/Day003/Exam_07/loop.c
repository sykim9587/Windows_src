/*
	무한loop : 계속 진행되는 것
	for ( ; ; ){} 
	while(1){} 
	do()while(1);

	사용자로부터 숫자 입력받아 출력하는 프로그램을 작성하되, 입력 0이 되면 종료. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	while(1) {// 무한루프
		printf(" 숫자 (0이 입력되면 종료)= ");
		scanf("%d", &num);
		if (num == 0) break; // while 문을 나온다
		printf("num=%d\n", num);

	}
	return 0;
}
