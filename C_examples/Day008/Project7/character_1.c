/*
	문자열 처리
	string.h : 문자처리 함수
	strcpy : 문자열 복사 
				strcpy(사본, 원본)
	strcmp: string compare, 문자열 비교
				int strcmp(대상1, 대상 2)
				사전순으로 대상1>대상2 => 1 (대상 1이 더 뒤에 나온다)
										대상1==대상2 => 0
										대상1<대상2 => -1
	strlen : string length, 문자열 길이
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	char str[80]; //6byte
	int count = 0; //문자의 수 누적할 변수
	int index = 0; //배열의 시작위치
	printf("문자열 입력: ");
	scanf("%s", str);

	while (str[index] != '\0') {
		count++;
		index++;
	}

	printf("str 배열에 저장된 문자수 : %d\n", count);

	return 0;
}