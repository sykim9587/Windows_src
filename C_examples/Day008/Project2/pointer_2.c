/*
	Call by name, Call by value, Call by reference
*/

#include <stdio.h>

void swap2(int* x, int* y) {
	int tmp; 
	tmp = *x;
	*x = *y; //x와 y의 값을 바꾸기 위한 로직
	*y = tmp;
	//printf("x= %d, y = %d\n", *x, *y);
}

void swap(int x, int y) {
	int tmp;
	tmp = x;
	x = y; //x와 y의 값을 바꾸기 위한 로직
	y = tmp;
	//printf("x= %d, y = %d\n", x, y);
}

int main() {
	int x = 10, y = 20; 
	printf("x= %d, y = %d\n", x, y);
	swap2(&x, &y);
	printf("x= %d, y = %d\n", x, y);
	swap(x, y);
	printf("x= %d, y = %d\n", x, y);
	return 0;
}