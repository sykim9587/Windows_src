#include <stdio.h>

int main() {
	int matrix[5][5] = { 0 };
	int row = 0, column = 2;
	int a;
	//마방진 채워질 로직
	matrix[0][2] = 1;
	int num = 2;
	while (num <= 25) {
		if (num % 5 == 1) {
			row += 1;
			matrix[row][column] = num;
		}
		else {
			row -= 1;
			if (row == -1) row = 4;
			column += 1;
			if (column == 5) column = 0;
			matrix[row][column] = num;
		}
		num++;
	}

	//마방진 출력
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%5d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}