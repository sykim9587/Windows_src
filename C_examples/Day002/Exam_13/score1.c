/*
	성적처리프로그램 1단계
	국어, 영어, 수학 입력받아 총점 평균 계산 -> 출력
	단 주어진 입출력

	<입력 및 출력>
	국어 = 
	영어 = 
	수학 =

	총점: xx점, 평균: xx.xx점
*/

#include <stdio.h>
#pragma warning(disable: 4996)


int main() {

	int kor, eng, math, tot;
	float avg;

	printf("국어 =");
	scanf("%d", &kor);
	printf("영어 =");
	scanf("%d", &eng);
	printf("수학 =");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0f; // 3.0 하면 double 이다. 
	//printf("\n");
	printf("\n총점: %d 평균: %.2f\n", tot, avg);

	return 0;
}