#include <stdio.h>

void change(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf(" change �Լ�������: x = %d, y = %d\n", *x, *y);
	
}

int main() {
	int x = 10, y = 20;

	printf("��:  x = %d, y = %d\n", x, y);
	change(&x, &y);
	printf("��:  x = %d, y = %d\n", x, y);

}