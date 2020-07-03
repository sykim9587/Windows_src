/*
	하나의 수 입력받아 양수인지 음수인지 판정하여 출력

	<입력>
	수 = 

	<출력>
	양수입니다. 
	음수입니다.
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	
	int su;

	printf("수 = ");
	scanf("%d", &su);

	//su > 0 ? printf("양수입니다.\n") : printf("음수입니다.\n");

	if (su > 0) {
		printf("양수입니다\n");
	}
	else if(su<0) {
		printf("음수입니다\n");
	}
	else {
		printf("영(0)입니다.\n");
	}

	return 0;
}