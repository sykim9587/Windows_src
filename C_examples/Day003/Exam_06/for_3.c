/*
	�������� ����ϴ� ���α׷�
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int dan, i; // i is �����

	printf("�Է��ϼ���: ");
	scanf("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	return 0;
}