/*
	scanf() 이용하여 문자열 입력받아 배열에 저장 후 출력하는 프로그램 구현하시오. 

*/
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80];
	int index = 0;

	printf("문자열=");
	scanf("%s", str);
	//printf("입력받은 문자열 : %s\n", str);

	while (str[index] != '\0') {
		printf("%c", str[index]);
		index++;
	}
	printf("\n");

	for (int i = index - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}