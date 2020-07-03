#include <stdio.h>

void change(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	printf(" change 함수내에서: x = %d, y = %d\n", *x, *y);
	
}

int main() {
	int x = 10, y = 20;

	printf("전:  x = %d, y = %d\n", x, y);
	change(&x, &y);
	printf("후:  x = %d, y = %d\n", x, y);

}