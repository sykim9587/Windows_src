/*
	저장된 문자열의 중간부터 출력하는 프로그램
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char* name = "Hong gildong"; // 문자열 상수도 포인터니까.

	printf("이름 : %s\n", name); //%s 라는 서식은 해당값의 시작주서에서 null string 까지 값을 얻어온다. 
	printf("여섯번째문자 : %c\n", name[5]); //g

	return 0;
}