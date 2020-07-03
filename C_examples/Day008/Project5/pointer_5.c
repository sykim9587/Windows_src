/*
	포인터변수를 통한 연산이 가능하다. 
	단, sizeof(), +/-, ++/-- 만 가능 
*/

#include <stdio.h>

int main() {
	int ary[] = { 1,2,3,4,5 };
	int* p;

	p = &ary[2];

	printf("p가 가르키고 있는 위치의 값 = %d\n", *p); //3
	//printf("p+2가 가르키고 있는 위치의 값 = %d\n", *(p+2)); 
	//printf("p-1가 가르키고 있는 위치의 값 = %d\n", *(p-1)); 

	printf("p가 가르키고 있는 위치의 값 = %d\n", *p++); //3 -> ++이 후위연산자 이니까
	printf("p가 가르키고 있는 위치의 값 = %d\n", *p); //4
	printf("p가 가르키고 있는 위치의 값 = %d\n", *p++); //4

	return 0;
}