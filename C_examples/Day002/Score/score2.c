/*
	성적처리프로그램 2단계
	국어 영어 수학 점수 받아 총점, 평균, 학점 계산

	<입력>
	국어=
	영어=
	수학=

	<출력>
	총점: xx, 평균: xx.xx, 학점: x

	<처리조건>
	1. 주어진 입출력형식에 맞게 구현
	2. 평균은 소숫점 이하 둘째자리
	3. 학점은 평균으로 A, B, C, D, F
	4. 평균이 90 이상: A, 80 이상: B, 70이상: C, 60이상: D, 이외는 F
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int kor, eng, math, tot;
	float avg;
	char grade;

	printf("국어 = ");
	scanf("%d", &kor);
	printf("영어 = ");
	scanf("%d", &eng);
	printf("수학 = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg =(float) tot / 3; //casting 도 가능
	
	if (avg >= 90)	grade = 'A'; //다양하게 가능
	else if (avg >= 80)	grade = 'B';
	else if (avg >= 70)	grade = 'C';
	else if (avg >= 60)	grade = 'D';
	else  grade = 'F';


	printf("총점: %d, 평균: %.2f, 학점: %c\n", tot, avg, grade);
	return 0;
}