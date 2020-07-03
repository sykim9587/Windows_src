/*
	call by reference
*/

#include <stdio.h>

void swap(int*, int*); //�ּ� ����

int main() {
	int x = 10, y = 20;

	printf("main �ȿ����� x,y ��\nx=%d, y=%d\n", x, y);

	//swap(x, y); //still call by value
	//// main x,y �� swap�� x, y�� �ٸ���. 

	swap(&x, &y); //call by reference

	printf("swapȣ�� ��\n x,y ��\nx=%d, y=%d\n", x, y);
	return 0;
}

void swap(int* x, int* y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

	printf("swap �Լ� �ȿ����� x,y ��\nx=%d, y=%d\n", *x, *y);
}