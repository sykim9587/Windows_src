/*
	2���� ���ڹ迭 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char animal[5][20]; //�������� ���� ũ��. 

	printf("�����̸��� �Է����ּ���. \n");
	for (int i = 0; i < 5; i++) {
		printf("�̸� = ");
		scanf("%s", animal[i]); // �迭�� �� �κ��� �ּ�!
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n ", animal[i]);

	}

	return 0;
}