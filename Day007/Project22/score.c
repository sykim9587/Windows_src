/*
	함수 활용한 성적 처리 프로그램 구현하기. 
	국, 영, 수 입력받아 총점과 평균 정리
	총점을 계산하는 함수와 평균 계산하는 함수 별도로 구현
*/

#include <stdio.h>
#pragma warning(disable:4996)

int total(int kor, int eng, int math);
double average(int tot);

int main() {
	int kor, eng, math, tot;
	double avg;

	printf("국어 = ");
	scanf("%d", &kor);
	printf("영어 = ");
	scanf("%d", &eng);
	printf("수학 = ");
	scanf("%d", &math);

	tot = total(kor, eng, math);
	avg = average(tot);

	printf("총점 = %d, 평균 = %.2lf\n", tot, avg);
	return 0;
}

int total(int kor, int eng, int math) {
	return kor + eng + math;

}

double average(int tot) {

	return tot / 3.0;
}