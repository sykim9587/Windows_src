/*
	BMI 비만도 체크 프로그램

	BMI = 체중 / 키 제곱
	BMI: 20 미만 저체중 / 20-24 표준 / 25 이상: 과체중

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//선언문: 변수 자료형과 초기값
	int weight;
	double height;
	double bmi;

	//입력문 
	printf("몸무게(kg) = ");
	scanf("%d", &weight);
	printf("키(m) = ");
	scanf("%lf", &height);
	//처리문
	bmi = weight / (height * height);

	//출력문

	printf("당신의 BMI = %.1lf\n", bmi);
	if (bmi > 25) {
		printf("과체중\n");
	}
	else if (bmi >= 20) {
		printf("표준\n");
	}
	else {
		printf("저체중\n");
	}
	return 0;
}

