#include<stdio.h>

int main() {
	int num = 1;
	if (num == 1) {
		int num = 7;
		num += 10;
		printf("num=%d\n", num);
	}
	printf("num = %d\n", num); //1ÀÌ ÂïÈù´Ù. 
	return 0;
}