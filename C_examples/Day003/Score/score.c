/*
	성적 관리 프로그램: 
	1단계 - 출력받아 평균 계산 ( 2이하 소숫점)
	2단계 - + 학점 계산 (switch case)
	3단계 - 총점 평균 출력 (2째 자리까지) 각 과목 점수 0-100, 범위 벗어나면 다시 입력
	4단계 (오늘) - 3명의 국어, 영어, 수학 점수를 입력받아 총점과 평균 계산, 배열 이용
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//int kor, eng, math, tot;
	int score[4] = { 0 }; // 초기값 주면 좋다
	double avg;

	/*printf("과목1 = ");
	scanf("%d", &score[0]);
	printf("과목2 = ");
	scanf("%d", &score[1]);
	printf("과목3 = ");
	scanf("%d", &score[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("과목%d = ", i+1);
		scanf("%d", &score[i]);
		score[3] += score[i];
	}

	//score[3] = score[0] + score[1] + score[2];
	avg = score[3] / 3.0;

	printf("총점 = %d, 평균 %.2lf\n", score[3], avg);

	return 0;
}