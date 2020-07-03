/*
	2차원 배열과 포인터 배열
	1. 2차원 배열: 1차원 배열의 배열이다. 

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int sub[4]; //1차원 정수형 배열
	int subject[3][4]; //뒤 [4]부분에 실제로 저장된다. 
	int tot;
	double avg;

	////4과목의 점수를 입력받는 로직
	//for (int i = 0; i < 4; i++) {
	//	printf("과목점수 = ");
	//	scanf("%d", &sub[i]);
	//}

	for (int k = 0; k < 3; k++) {
		printf("%d번째 사람의 점수를 입력해주세요.\n", k);
		for (int i = 0; i < 4; i++) {
			printf("%d번째 과목점수 = ", i);
			scanf("%d", &subject[k][i]);
		}
		tot = 0;
		for (int j = 0; j < 4; j++) {
			tot += subject[k][j];
		}
		avg = tot / 4.0;
		printf("%d번째 사람의 총점 = %d, 평균= %.2lf\n", k, tot, avg);

	}

	//총점과 평균을 계산하는 로직



	return 0;
}