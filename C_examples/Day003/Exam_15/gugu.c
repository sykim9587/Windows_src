/*
	구구단 출력
	다중 for 문을 이용하여 구구단 출력
	단수 (2-9), 자연수(1-9), 결과
	다중for문은 바깥 for문이 한번 동작시 안에 주어진 횟수만큼 반복해서 수행한다. 
*/

#include <stdio.h>

int main() {

	for (int dan = 2; dan <= 9; dan++) { // 단
		printf("== %d단 ==\n", dan);
		for (int su = 1; su <= 9; su ++) { // 매 단마다 곱해질 자연수
			printf("%d * %d = %d\n", dan, su, dan * su);
		}
		printf("\n");
	}
	return 0;
}