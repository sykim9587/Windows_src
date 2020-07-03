/*
	1부터 100사이 자연수중 소수 출력
	단 한줄에 5개만 출력

	<힌트> 
	소수: 1과 자기 자신으로만 나누어 지는 수

*/

//하나의 숫자 입력받아서 소수인지 아닌지 판정하는 프로그램
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int flag, count=0;

	printf("수 = ");
	scanf("%d", &number);
	
	for (int k = 2; k <= number; k++) {
		

		flag = 1; //매번 1로 초기화 
		for (int i = 2; i < k; i++) {
			if (k % i == 0) {
				flag = 0; //소수가 아니기에 출력하지 않고 지나간다
				break; 
			}
		}
		if (flag) { // print 가 1이면 출력하고 0이면 출력하지 않는다. 
			printf("%5d",k);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
		
	}

	
	return 0;
}