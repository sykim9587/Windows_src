#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int score[5][3] = { 0 }; //배열 쓰레기값 안 들어가도록 초기화
	int sum[3] = { 0 };
	char* sub[3] = { "국어", "영어", "수학" }; //사용자 정의 자료형 

	for (int i = 0; i < 5; i++) { //학생 5명의 점수 입력
		printf("%d의 점수\n", i + 1);
		for (int k = 0; k < 3; k++) { //각 과목 점수 입력
			do {
				printf("%s = ", sub[k]);
				scanf("%d", &score[i][k]);
			} while (score[i][k] < 0 || score[i][k]>100);
		}
	}
	
	for (int i = 0; i < 3; i++) { //각 과목의 총점 구하기
		for (int k = 0; k < 5; k++){
			sum[i] += score[k][i];
		}
		printf("%s 의 총점 = %d\n", sub[i], sum[i]);
	}
	return 0;
}