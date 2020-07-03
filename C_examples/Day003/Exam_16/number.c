/*
	1부터 100까지 출력
*/

#include <stdio.h>

int main() {
	int cnt = 0; //홀수 개수를 누적 -> 누적 변수는 초기화

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue; //짝수면 아래 생략
		printf("%5d", i);
		cnt++;
		if (cnt % 5 == 0) printf("\n");
		
		//if (i % 10 == 0) { //10의 배수
		//	printf("\n");
		//}
	}
	return 0;
}