/*
	성적처리프로그램
	1단계: 국어, 영어, 수학점수를 입력받아 총점과 평균을 계산
	2단계: 학점 계산(switch-case)
	3단계: do while, 각 점수는 0~100까지
	4단계: 배열을 활용
	5단계: 5명의 성적을 처리할 수 있도록 2차원 배열을 활용할 것. 
				번외: 각 과목별 총점을 계산하여 출력하는 프로그램 구현
	6단계: 구조체 
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int score[5][4] = { 0 }; //배열 쓰레기값 안 들어가도록 초기화
	double avg[5];

	/*char kor[] = "국어";
	char eng[] = "영어";
	char math[] = "수학";*/

	//char sub[3][5] = { "국어", "영어", "수학" }; //5char 씩

	//최종
	//char* kor = "국어"; //배열명 자체가 주소니까

	//최최종
	char* sub[3] = { "국어", "영어", "수학" }; //사용자 정의 자료형 

	for (int i = 0; i < 5; i++) {
		printf("%d의 점수\n", i+1);
		//묶기전
		/*do {
			printf("국어 =");
			scanf("%d", &score[i][0]);
		} while (score[i][0] < 0 || score[i][0]>100);
		do {

			printf("영어 =");
			scanf("%d", &score[i][1]);
		} while (score[i][1] < 0 || score[i][1]>100);
		do {

			printf("수학 =");
			scanf("%d", &score[i][2]);
		} while (score[i][2] < 0 || score[i][2]>100);*/

		//묶은 후
		for (int k = 0; k < 3; k++) {
			do {
				printf("%s = ", sub[k]);
				scanf("%d", &score[i][k]);
			} while (score[i][k] < 0 || score[i][k]>100);
			score[i][3] += score[i][k];
		}
		//score[i][3] = score[i][1] + score[i][0] + score[i][2];
		avg[i] = score[i][3] / 3.0;
	}
	for (int i = 0; i < 5; i++) {
		printf("\n총점 = %d, 평균 = %.2lf\n", score[i][3], avg[i]);
	}
	return 0;
}