/*
	1. 표준 입출력 함수: stdio.h 헤더파일에 내장된 객체
	-printf()
	-scanf()
	-입출력서식: %기호와 함께 사용된다. 
	%d( %o, %x), %ld(long) , %c, %f, %lf(double), %s
	-제어문자 
	\ 기호와 함께 쓴다. \n , \t(tab 8칸 정도), \r (carriage return) : 출력하는 현재줄에 맨 앞으로 커서 이동,
	\b: backspace (한칸 뒤로), \a: alert
*/

#include<stdio.h>
#pragma warning (disable:4996)

int main() {
	int age;
	char blood_type;

	printf("나이 = ");
	scanf("%d", &age);
	//run time error: 버퍼에 있는 엔터키(특수문자) 인식됨. 
	getchar();
	printf("혈액형 = ");
	scanf("%c", &blood_type);

	printf("나이 = %d, 혈액형 = %c\n", age, blood_type);
	return 0;
}