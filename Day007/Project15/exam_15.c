/*
	������ �߿��� �Ѱ��� ���� �Է¹޾Ƽ� �� ���� ����ϴ� ���α׷� �ۼ�
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int dan;
	int i=1;
	printf("�ܼ� = ");
	scanf("%d", &dan);

	/*for (i = 1; i < 10; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}*/

	//while ������ Ǯ��
	while (i <= 9) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}

	return 0;
}