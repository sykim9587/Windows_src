#include <stdio.h>

int main() {
	int data[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++) {
		if (data[i] == 3) data[i] = 0;
		if(data[i] !=0) printf("%d\n", data[i]);
	}

	return 0;
}