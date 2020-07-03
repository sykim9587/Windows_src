/*
	문자열을 처리하는 함수 : string.h
	1. strcpy: 문자열 복사 
		strcpy(사본, 원본) : 원본의 내용을 이용하여 복사본을 만든다. 
	2. strcmp: 문자열 비교
		strcmp(대상1, 대상2); 대상1과 대상2를 비교하여 그 결과 리턴 
		0 :두 대상의 값이 일치
		1: 사전순으로 대상1이 대상 2보다 앞선다 ㅂ~, ㅎ~
		-1: 반대 
	3. strlen: 문자열 길이
		strlen(문자열) 길이 추출
*/

#include <stdio.h>
#include <string.h>
#pragma	warning(disable: 4996)

int main() {
	char str1[80] = "tiger";
	char str2[80]; //초기화 안할땐 크게 가져와야한다 하지만 낭비 있을 수 있다.

	strcpy(str2, "tiger");

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	if (strcmp(str1, str2) == 0) {
		printf("같다.\n");
	}
	else {
		printf("다르다.\n");
	}

	return 0;
}