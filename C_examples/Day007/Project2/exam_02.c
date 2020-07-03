/*
	BMI를 구하는 프로그램-  몸무게와 키를 입력받아 신체질량지수를 계산하여 다음과 같이 출력
	BMI = 몸무게 (kg) / 키 (m) 의 제곱, 단 키의 단위는 미터
	<입력 및 출력형식>
	몸무게(kg) = 45
	키(m) = 1.68

	당신의 BMI : 15.9
	<추가 조건>
	보통 BMI 20-23 정도가 정상인데 15.9는 영양보충이 필요함
	저체중, 정상체중, 과체중으로 판단하여 출력가능
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

	return 0;
}

