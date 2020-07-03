/*
	출력1
	1	1	1	1	1

	출력2
	1	1	1	1	1
	2	2	2	2	2	
	3	3	3	3	3
	4	4	4	4	4
	5	5	5	5	5

	출력3
	1	2	3	4	5
	1	2	3	4	5
	1	2	3	4	5
	1	2	3	4	5	
	1	2	3	4	5

	출력4
	1	2	3	4	5	
	...

	21	22	23	24	25
*/

#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		printf("%3d",1);
	}
	printf("\n\n");

	for (int k = 1; k <= 5; k++) {
		for (int i = 0; i < 5; i++) {
			printf("%3d", k);
		}
		printf("\n");
	}
	printf("\n\n");

	for (int k = 1; k <= 5; k++) {
		for (int i = 1; i <= 5; i++) {
			printf("%3d", i);
		}
		printf("\n");
	}
	printf("\n\n");

	for (int k = 1; k <= 25; k++) {
		printf("%3d", k);
		if (k % 5 == 0) printf("\n");
	}
	printf("\n\n");

	return 0;
}