/*
	������ �Է¹޾� ������ ����Ͽ� ����ϴ� ���α׷��� ����Ͻÿ�. 
	�� ������ ����ϴ� �۾��� tax��� �̸��� �Լ��� ����Ͻÿ�

	<�Է�, ���>
	����=
	����� ������ xxx�Դϴ�.

	������ �ҵ���� 6%
*/

#include <stdio.h>
#pragma warning(disable:4996)

double tax(int val);

int main() {
	int income;
	double tot;

	printf("���� =");
	scanf("%d", &income);
	tot=tax(income);

	printf("����� ������ %.2lf�Դϴ�.\n", tot);
	return 0;
}

double tax(int val) {
	return val * 0.06;

}