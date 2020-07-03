/*
	3자리 양의 정수를 대상으로 7의 배수의 개수와 합을 출력하는 프로그램 구현
	(100~999) 

	for(초기;조건;증감){
		반복처리 할 문장	
	}
	
*/

#include <stdio.h>

int main() {
	int sum = 0, count = 0;

	for (int num = 100; num <= 999; num++) {
		if (num % 7 == 0) {
			sum += num;
			count++;
		}
	}

	printf("합: %d, 개수: %d\n", sum, count);

	return 0;
}