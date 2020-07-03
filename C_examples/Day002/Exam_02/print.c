/*
	표준 출력함수 : printf()
	1. 형식
		-printf("출력내용");
		-printf("출력서식", 출력자료);
		-printf("출력서식 + 제어문자", 출력변수);
	2. 출력서식: %기호와 함께 사용된다. 
		-%d: 10진수 정수형, %o: 8진수, %x: 16진수
		-%f: float 실수형 소수이하 6자리까지 
		-%c: 문자형 (character)
		-%s: 문자열 (string)
	3. 제어문자 : \ 와 함께 사용된다
		- \n 개행(줄바꿈)
		- \t tab key (8칸 정도)

*/

// ""안에 header file 있으면 개발자가 만든 파일
#include <stdio.h>

int main() {
	
	printf("Hello Everyone!\n");
	printf("%d년\n", 2020);
	printf("%d월 %d일\n", 5, 19);

	return 0; // 시스템의 종료
}

