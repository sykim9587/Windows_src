/* 
	암호를 입력받아 일치하면 종료, 아니면 계속 묻는 프로그램 

	<입력, 출력>
	암호를 정확히 입력하면 종료됩니다.
	암호 = java
	암호 = c++
	암호 = c
	암호 = C

	프로그램 종료
*/

#include<stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char password[80] = "C";
	char code[80];

	printf("암호를 정확히 입력하면 종료됩니다.\n");

	while (1) { //무한loop
		printf("암호 = ");
		scanf("%s", code);

		if (strcmp(password, code) == 0) {
			printf("종료\n");
			break;
		}

	}

	return 0;
}