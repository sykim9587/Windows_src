/*
	포인터(pointer) : 메모리를 가르키기 위한 것
	-변수: 상수를 저장한다
	-포인터변수 : 주소를 저장한다 (pinter variable)
	 int *p 
	 or 
	 int* p ;

	-주소연산자 &
	-간접연산자 * (해당 주소의 값을 얻어올때 사용)

	-포인터는 연산이 가능하다 
	sizeof(), +, - , ++, --  만 가능하다

*/

#include <stdio.h>

int main() {
	int x = 100; //정수형 변수 
	int* px = &x; //x의 주소를 포인터 변수
	
	printf("x = %d\n", x);
	printf("x의 주소 = %d\n", &x);
	printf("x의 주소 = %d\n", px); // 주소 출력시 p
	printf("x의 값 = %d\n", *px); // px에 있는 값을 가져온다



	return 0;
}