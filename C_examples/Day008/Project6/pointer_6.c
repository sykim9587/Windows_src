/*
	다음 주어진 조건에 만족하는 프로그램을 구현하시오
	<처리조건>
	1.최근 10년간의 경제성장률을 입력받아서 배열에 저장한다. 
	2.평균 경제성장률을 계산하여 출력한다. 
	3.평균을 초과한 해는 몇번인지 출력

	데이터는 90년대 한국 경제성장률을 사용
	1990	1		2		3		4		5		6		7		8		9	
	9.3	5.3	5.7	8.4	8.1	4.8	2.1	-9.1	9.4	3.6
*/
#include <stdio.h>
#pragma warning(disable:4996)

void input_growth(double*);							//배열에 데이터를 저장하는 함수
double average_growth(double*);				//평균 경제성장률을 계산하는 함수
int extra_growth(double*, double);				//평균을 초과한 횟수를 계산하는 함수

int main() {
	double growth[10];
	double avg;
	int ext;
	input_growth(growth);
	avg = average_growth(growth);
	ext = extra_growth(growth, avg);

	printf("평균: %.2lf, 횟수: %d\n", avg, ext);

	return 0;
}

void input_growth(double* arr) {
	for (int i = 0; i < 10; i++) {
		printf("199%d년도 경제성장률: ", i);
		scanf("%lf", arr + i);
	}
	printf("경제성장률 저장 완료\n");
}
double average_growth(double* arr) {
	double tot=0.0;
	for (int i = 0; i < 10; i++) {
		tot += *(arr + i);
		//tot+= p[i] 도 가능하다 배열처럼. 
	}
	return tot / 10.0;

}
int extra_growth(double* arr, double avg) {
	
	int count=0;
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) > avg) count++;
	}
	return count;
}