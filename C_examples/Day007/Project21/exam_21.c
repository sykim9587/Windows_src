/*
	수입을 입력받아 세금을 계산하여 출력하는 프로그램을 기술하시오. 
	단 세금을 계산하는 작업을 tax라는 이름의 함수로 기술하시오

	<입력, 출력>
	수입=
	당신의 세금은 xxx입니다.

	세금은 소득액의 6%
*/

#include <stdio.h>
#pragma warning(disable:4996)

double tax(int val);

int main() {
	int income;
	double tot;

	printf("수입 =");
	scanf("%d", &income);
	tot=tax(income);

	printf("당신의 세금은 %.2lf입니다.\n", tot);
	return 0;
}

double tax(int val) {
	return val * 0.06;

}