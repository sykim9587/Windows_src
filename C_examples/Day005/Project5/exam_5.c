/*
	2차원 배열
	int 배열명[첨자1][첨자2];

*/

#include <stdio.h>

int main() {
	int x[2][3] = { {1,2,3 }, {4, 5, 6} }; //초기화
	/*
		x[0][0] -> x[0][1] 이런 순서대로 
	*/

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d\n", x[i][j]);

		}
		printf("\n");
	}



	return 0;
}