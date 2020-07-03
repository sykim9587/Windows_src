/*
	소수 구하기 (prime)
	-소수란 1과 자기 자신으로만 나누어 떨어지는 수를 말한다. 

	나누는 수가 자기와 1이므로 나누는 수가 2일때 찍어라 이렇게 풀 수도 있다.
*/

#include <stdio.h>
//매크로 상수 : 문자를 상수로 취급하는 것
//숫자는 의미를 가질 수 없다. 의미가 있는 숫자로 변환하여 사용하고 싶을 때. 
#define MAX 100 //MAX 라는 숫자가 나오면 100이라고 생각하기. 문자에 의미를 주기 위해서 

int main() {

	int num, flag = 0; //switching variable -> sw 로 부르기도 한다. 0 과 1만 가지도록 구현
	int i, j, count =0; 

	for (i = 2; i <= MAX; i++) {
		/* 젯수:  나누는 수를 반복처리 하는 제어문 */
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}

		if (i == j) {
			printf("%3d", i);
			count++;
			if (count % 5 == 0) printf("\n");
		}
	}
	printf("\n");


	return 0;
}