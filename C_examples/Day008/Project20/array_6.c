#include <stdio.h>

int main() {
	int x1[4] = { 1,2,3,4 };
	int x2[4] = { 11,12,13,14 };
	int x3[4] = { 21, 22,23,24 };

	int* p[3] = {x1, x2, x3}; //배열을 세개 담을 수 있다. -> 2차원 배열처럼. but 이게 더 효율적이다. 

	/*
	1 2 3 4
	11 12 13 14
	21 22 23 24
	*/

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%5d", p[i][j]);  //포인터도 배열처럼 사용 가능. 
		}
		printf("\n");
	}
	return 0;

}