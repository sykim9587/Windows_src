#include <stdio.h>
#pragma warning(disable:4996)

//1단계
//int main() {
//
//	int kor, eng, math, tot;
//	double avg;
//
//	printf("국어 = ");
//	scanf("%d", &kor);
//	printf("영어 = ");
//	scanf("%d", &eng);
//	printf("수학 = ");
//	scanf("%d", &math);
//
//	tot = kor + eng + math;
//	avg = tot / 3.0;
//
//	printf("총점 %d 평균 %.2lf\n", tot, avg);
//	return 0;
//}

//int main() {
//
//	//int kor, eng, math, tot;
//	int sub[4]; // 순서대로 들어간다
//	double avg;
//	//char* kkk = "국어"; //크기 5byte
//	//char* ccc = "영어";
//	//char* ddd = "수학";
//
//	//배열의 이름이 곧 주소이므로 char* kkk 될수있다 char kkk[5] 대신. 
//	char* title[3] = { "국어", "영어", "수학" };
//
//
//	/*printf("%s = ", title[0]);
//	scanf("%d", &sub[0]);
//	printf("%s = ", title[1]);
//	scanf("%d", &sub[1]);
//	printf("%s = ",title [2]);
//	scanf("%d", &sub[2]);*/
//
//	/*sub[3] = sub[0] + sub[1] + sub[2];
//	avg = sub[3] / 3.0;*/
//
//
//
//	printf("총점 %d 평균 %.2lf\n", sub[3], avg);
//	return 0;
//}


//포인터 이용

int main() {
	//int kor, eng, math, tot;
	int sub[4] = { 0 };
	/* sub[0] = kor, sub[1] = eng, sub[2] = math, sub[3] = tot */
	double avg;
	//char* kkk = "국어";  // char* kkk;
	//char* ccc = "영어";
	//char* ddd = "수학";
	/*
		ss[3][5] 이렇게 묶어버리면 공간 더 많이 쓴다. 그리고 느리다. 그래서 
		포인터로 보내는게 더 효율성! 
	*/

	char* title[3] = { "국어", "영어", "수학" };

	/*printf("%s = ", title[0]);
	scanf("%d", &sub[0]);

	printf("%s = ", title[1]);
	scanf("%d", &sub[1]);

	printf("%s = ", title[2]);
	scanf("%d", &sub[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("%s = ", title[i]);
		scanf("%d", &sub[i]);
		sub[3] += sub[i];
	}

	//sub[3] = sub[0] + sub[1] + sub[2];
	avg = sub[3] / 3.0;

	printf("총점 = %d, 평균 = %.2lf\n", sub[3], avg);

	return 0;
}