/*
	2차원 문자배열 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char animal[5][20]; //기억장소의 낭비가 크다. 

	printf("동물이름을 입력해주세요. \n");
	for (int i = 0; i < 5; i++) {
		printf("이름 = ");
		scanf("%s", animal[i]); // 배열의 앞 부분은 주소!
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n ", animal[i]);

	}

	return 0;
}