/*
	BMI �񸸵� üũ ���α׷�

	BMI = ü�� / Ű ����
	BMI: 20 �̸� ��ü�� / 20-24 ǥ�� / 25 �̻�: ��ü��

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//����: ���� �ڷ����� �ʱⰪ
	int weight;
	double height;
	double bmi;

	//�Է¹� 
	printf("������(kg) = ");
	scanf("%d", &weight);
	printf("Ű(m) = ");
	scanf("%lf", &height);
	//ó����
	bmi = weight / (height * height);

	//��¹�

	printf("����� BMI = %.1lf\n", bmi);
	if (bmi > 25) {
		printf("��ü��\n");
	}
	else if (bmi >= 20) {
		printf("ǥ��\n");
	}
	else {
		printf("��ü��\n");
	}
	return 0;
}

