/*
	포인터(pointer) : 물리적인 기억공간의 주소를 가르킨다. 
	1. 포인터와 관련된 연산자
		-주소연산자 (참조연산자) : &
		-간접연산자(값 연산자) : *
		int a = 100;
		2. 포인터변수: 주소를 저장하는 변수
		- 선언
			자료형* 변수명;
*/
#include <stdio.h>

int main() {
	int a = 100;
	int* pa;			//정수형 타입의 포인터변수 선언

	pa = &a;

	printf("a= %d\n", a);
	printf("pa = %p\n", pa);  // %d: 16진수 pointer
	printf("&a = %d\n", &a);
	printf("*pa = %d\n",*pa); //값을 가져온다. 
	return 0;
}
