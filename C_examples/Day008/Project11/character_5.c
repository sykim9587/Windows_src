/*
	strcpy(문자열1, 문자열2) 2를 1로 보낸다

	strcat : 두 개의 문자열을 붙이는 함수 string concatenation 
*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char str1[20] = "apple";
	char str2[20] = "apple";

	char tmp[20]; //문자열은 대입연산자 못 쓴다.
	int len;

	strcpy(tmp, str1); 
	strcpy(str1, str2);
	strcpy(str2, tmp); 
	
	len = strlen(str2);


	printf("str1 = %s, str2 = %s\n", str1, str2);
	printf("str2의 글자수 = %d\n", len);

	if (strcmp(str1, str2) == 0)
		printf("str1과 str2는 같은 문자열입니다. \n");
	else
		printf("서로 다른 문자열\n");
	return 0;
}