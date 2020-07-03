/*
	두개 정수 받아 max, min 출력
	<입력>
	첫번째수 =
	두번째수 =
	세번째수 =

	<출력>
	최대값 =
	최소값 =
	중위수 =
	*/
#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int num1, num2, num3, max, min, median;

	printf("첫번째수 =");
	scanf("%d", &num1);
	printf("두번째수 =");
	scanf("%d", &num2);
	printf("세번째수 =");
	scanf("%d", &num3);

	/*
	//두개의 수 비교하는 문제
	if (num1>num2) {
		max = num1;
		min = num2;
	}
	else {
		max = num2;
		min = num1;
	}
	*/

	if (num1>num2 && num1>num3) {
		max = num1;
		if (num2 > num3) {
			min = num3;
			median = num2;

		}
		else {
			min = num2;
			median = num3;
		}
		
	}
	else if (num2>num1 && num2>num3) {
		max = num2;
		if (num1 > num3) {
			min = num3;
			median = num1;
		}
		else {
			min = num1;
			median = num3;
		}

	}
	else {
		max = num3;
		if (num1 > num2) {
			min = num2;
			median = num1;
		}
		else {
			min = num1;
			median = num2;
		}

	}

	printf("max = %d\n", max);
	printf("min = %d\n", min);
	printf("median = %d\n", median);

	return 0;
}

