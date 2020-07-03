#include <stdio.h>
#pragma warning(disable:4996)

//1단계: 총점과 평균 소수 .2자리까지
//int main() {
//	int kor, eng, math, tot;
//	double avg;
//
//	printf("국어 = ");
//	scanf("%d", &kor);
//	//생략 
//
//	return 0;
//}


//2단계 학점
/*
int main() {
	int kor, eng, math, tot;
	double avg;
	char grade;

	printf("국어 = ");
	scanf("%d", &kor);
	printf("영어 = ");
	scanf("%d", &eng);
	printf("수학 = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg/10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("총점 = %d, 평균 = %.2lf, 학점 = %c\n", tot, avg, grade);

	return 0;
}
*/


//3단계 각 과목의 점수는 0-100사이, 아니면 다시 입력
/*
int main() {
	int kor, eng, math, tot;
	double avg;
	char grade;

	do {
		printf("국어 = ");
		scanf("%d", &kor);
	} while (kor < 0 || kor > 100);

	do {
	printf("영어 = ");
	scanf("%d", &eng);
	} while (eng < 0 || eng > 100);

	do {
	printf("수학 = ");
	scanf("%d", &math);
	} while (math < 0 || math > 100);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("총점 = %d, 평균 = %.2lf, 학점 = %c\n", tot, avg, grade);

	return 0;
}
*/

//4단계: 배열을 이용할 것 
int main() {
	//int kor, eng, math, tot;
	int sub[4] = { 0 };
	char* title[3] = { "국어", "영어", "수학" }; //문자열상수도 포인터
	double avg;
	char grade;

	for (int i = 0; i < 3; i++) {
		do {
			printf("%s = ", title[i]);
			scanf("%d", &sub[i]);
		} while (sub[i] < 0 || sub[i] > 100);
		sub[3] += sub[i];
	}

	avg = sub[3] / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("총점 = %d, 평균 = %.2lf, 학점 = %c\n", sub[3], avg, grade);

	return 0;
}