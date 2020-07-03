/*
	전기요금 계산하는 프로그램 구현
	키보드 통해 코드번호와 전기사용량(kw)입력받아 해당 조건에 맞는 값을 찾아 계산 수행 후 요금 출력
	<처리조건>
	1. 전기요금 = 기본요금 + (사용량 * kw당 요금) + 세금
	2. 코드별 요금 적용 기준
		code = 1, 가정용 기본요금 1130, kw 요금 127.8원, 세금 (전체금액 9%)
		code = 2,  산업용 기본요금 660, kw 요금 88.5원, 세금 (전체금액 8%)
		code = 3, 교육용 기본요금 370, kw 요금 52.0원, 세금 (전체금액 5%)

	<입력 출력>
	code(1.가정용 2.산업용 3.교육용) = 3
	전기 사용량 (kw) =  500

	전기요금은 27689원 입니다. 

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int code;
	int elec;
	int basic;
	double kw;
	int tax;
	int sum = 0;

	printf("code(1.가정용 2.산업용 3.교육용) = ");
	scanf("%d", &code);
	printf("전기 사용량 (kw) = ");
	scanf("%d", &elec);

	switch (code) {
	case 1:
		basic = 1130; kw = 127.8; tax = 9; break;
	case 2:
		basic = 660; kw = 88.5; tax = 8; break;
	case 3:
		basic = 370; kw = 52.0; tax = 5; break;
	default: 
		printf("잘못입력.\n"); return 0;
	}

	sum = basic + elec * kw;
	sum = sum + sum*(tax * 0.01);

	printf("전기요금은 %d원 입니다. ", sum);
	return 0;
}