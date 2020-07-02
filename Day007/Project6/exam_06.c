/*
	유료입장과 무료입장 판단해서 출력하는 프로그램
	나이 입력하면 유료 무료 구분
	<처리조건> 
	1. 6세 이하, 70세 이상 무료
	2  그외 3000

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int age; 
	
	printf("나이 = ");
	scanf("%d", &age);

	if (age <= 6 || age >= 70) {
		printf("무료입니다.\n");
	}
	else {
		printf("입장료 = 3000원 입니다\n");
	}

	return 0;
}