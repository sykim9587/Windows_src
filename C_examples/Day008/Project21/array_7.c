

#include <stdio.h>

int main() {
	/*int x[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int* p;
	p = x; */

	int x = 10;
	int* p;
	int** k;
	p = &x;
	
	printf("x = %p\n", p);
	printf("x = %d\n", *p);


	return 0;
}