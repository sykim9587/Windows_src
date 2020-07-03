/*
	배열의 평균값을 계산하여 출력하는 프로그램
	단, 별도의 함수를 구현하여 배열의 평균 계산 후 결과 넘겨주기

*/
#include <stdio.h>
double average(double* p, int size ) {
	double tot=0.0;

	for (int i = 0; i < size; i++) {
		tot += *(p + i);
	}
	return tot/size;
}

int main() {
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double avg;
	int size;
	size = sizeof(ary) / sizeof(ary[0]);

	avg = average(ary, size);

	printf("배열의 평균값: %.2lf\n", avg);

	return 0;
}

