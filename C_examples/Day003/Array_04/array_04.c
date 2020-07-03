#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int data[5];
	int x = 0;

	printf("x = %d\n", x);

	for (int i = 0; i < 5; i++) {
		printf("data[%d] = %d\n", i, data[i]);
	}
	
	return 0;


}