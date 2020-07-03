/*
1	 2	   3	4	  5 => 1줄 :1칸 - 5칸
6	 7	   8	9	10 => 
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <stdio.h>

int main() {
	
	int data[5][5] = { 0 };//배열 초기화 bec 누적값 이용하기 위해서 !
	int num = 0; //찍히는 숫자

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			//num++;
			data[i][j] = ++num; // 채우기 전에 넣기
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", data[i][j]);

		}
		printf("\n");
	}

	return 0;
}