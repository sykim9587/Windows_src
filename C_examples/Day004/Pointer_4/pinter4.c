/*
	포인터를 이용한 문자열 처리 

*/

#include <stdio.h>

int main() {
	char* names = "brown"; //문자열은 그 자체가 주소

	printf("이름: %s\n", names);

	names = "banana"; // 크기가 상관없다. 
	printf("이름: %s\n", names);

	//문자열상수가 포인터변수의 의미를 가질 수 있다. 
	/* 
	char names[] = "banana" ; 마지막에 null string 들어간다

	*/

	while (*names != '\0') { // null string 전까지 출력
		//printf("%c", *names);
		putchar(*names++); //짧아서 좋다
		printf("\n");
	}
	return 0;
}