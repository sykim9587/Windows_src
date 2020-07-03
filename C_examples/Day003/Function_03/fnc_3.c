/*
	call by reference
*/

#include <stdio.h>

void swap(int*, int*); //주소 저장

int main() {
	int x = 10, y = 20;

	printf("main 안에서의 x,y 값\nx=%d, y=%d\n", x, y);

	//swap(x, y); //still call by value
	//// main x,y 와 swap에 x, y는 다르다. 

	swap(&x, &y); //call by reference

	printf("swap호출 후\n x,y 값\nx=%d, y=%d\n", x, y);
	return 0;
}

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap 함수 안에서의 x,y 값\nx=%d, y=%d\n", *x, *y);
}