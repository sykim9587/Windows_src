/*
	�ΰ� ���� �޾� max, min ���
	<�Է�>
	ù��°�� =
	�ι�°�� =
	����°�� =

	<���>
	�ִ밪 =
	�ּҰ� =
	������ =
	*/
#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int num1, num2, num3, max, min, median;

	printf("ù��°�� =");
	scanf("%d", &num1);
	printf("�ι�°�� =");
	scanf("%d", &num2);
	printf("����°�� =");
	scanf("%d", &num3);

	/*
	//�ΰ��� �� ���ϴ� ����
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

