/*
	BMI�� ���ϴ� ���α׷�-  �����Կ� Ű�� �Է¹޾� ��ü���������� ����Ͽ� ������ ���� ���
	BMI = ������ (kg) / Ű (m) �� ����, �� Ű�� ������ ����
	<�Է� �� �������>
	������(kg) = 45
	Ű(m) = 1.68

	����� BMI : 15.9
	<�߰� ����>
	���� BMI 20-23 ������ �����ε� 15.9�� ���纸���� �ʿ���
	��ü��, ����ü��, ��ü������ �Ǵ��Ͽ� ��°���
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

	return 0;
}

