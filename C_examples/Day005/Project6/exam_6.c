/*
	5행 5열짜리 정수형 배열을 선언한 후 단위행렬이 출렬되도록 구현
	배열 선언시 초기값은 0으로 초기화

	<출력형식>
	1 0 0 0 0 
	0 1 0 0 0 
	0 0 1 0 0
	0 0 0 1 0
	0 0 0 0 1
*/


#include <stdio.h>
int main() {
	int x[5][5] = {0 }; //초기화

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				x[i][j] = 1;
			}
			printf("%3d", x[i][j]);

		}
		printf("\n");
	}
	return 0;
}