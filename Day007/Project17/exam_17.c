/*
	다중 for 문
	-> 바깥쪽 for문이 한번 수행될 때마다 안쪽 for문은 주어진 횟수만큼 반복수행
	
	합계 계산 프로그램
	1부터 입력받은 숫자까지 합 계산. 음수와 0 입력시 프로그램 종료

	<입력 및 출력>
	0이거나 음수이면 종료. 
	숫자 = 10
	1부터 10까지 합 = 55
	숫자 = 65
	1부터 65까지 합 = 2145
	숫자 = -1
	종료
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num, sum = 0;

	while (1) {
		printf("숫자 = ");
		scanf("%d", &num);
		if (num <= 0) break;
		for (int i = 1; i <= num; i++) {
			sum += i;
		}
		printf("1부터 %d까지의 합: %d\n", num, sum);
		sum = 0;
	}
	printf("프로그램 종료\n");

}

/*
for(sum = 0, i = 1; i<=num; sum+=i, i++); 이렇게도 가능하다. 
*/