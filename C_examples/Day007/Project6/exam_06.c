/*
	��������� �������� �Ǵ��ؼ� ����ϴ� ���α׷�
	���� �Է��ϸ� ���� ���� ����
	<ó������> 
	1. 6�� ����, 70�� �̻� ����
	2  �׿� 3000

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int age; 
	
	printf("���� = ");
	scanf("%d", &age);

	if (age <= 6 || age >= 70) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("����� = 3000�� �Դϴ�\n");
	}

	return 0;
}