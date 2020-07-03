/*
	2차원 배열 : 1차원 배열의 중복 처리하기 위한 배열
	형식 
		자료형 배열명[첨자1][첨자2];
		또는
		자료형 배열명[첨자1][첨자2] = {{...},{,,,}};
		ex) int x[2][3] = {1,2,3,4,5,6,}
		int x[2][3] = {{1,2,3},{4,5,6}}
		int x[][3] = {1,2,3,4,5,6} //앞만 생략 가능하다
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//int kor, eng, math, tot;
	int x[3][4] = { 0 };
	double avg[3];

	for (int inwon = 0; inwon < 3; inwon++) {
		for (int sub = 0; sub < 3; sub++) {
			printf("%d번째 과목점수 = ", sub);
			scanf("%d", &x[inwon][sub]);

			x[inwon][3] += x[inwon][sub]; //총점 계산
		}
		avg[inwon] = x[inwon][3] / 3.0; //평균 계산
	}

	for (int inwon = 0; inwon < 3; inwon++){
		printf("총점 = %d, 평균 = %.2lf\n", x[inwon][3], avg[inwon]);
	}


	return 0;
}