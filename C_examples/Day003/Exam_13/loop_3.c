/*
	printf("#");
	위에 주어진 문장을 이용해서 ##### 출력하라

	<출력형식 2>
	#####
	#####
	#####
	#####
	#####
*/

#include <stdio.h>

int main() {

	for (int k = 1; k <= 5; k++) { // 줄의 의미
		for (int i = 1; i <= k; i++) { //칸의 의미
			printf("#");
		}
		printf("\n");
	}
	return 0;
}