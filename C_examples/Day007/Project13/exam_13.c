/*
	Ű����� ���� ���� �Է��� �� ���� ����ϴ� ���α׷�
	��, �Է��ϴ� ������ ������ �Ǳ� ������ �ݺ�.
	<�Է� ���>
	���� = 5
	�� = 5
	���� = 15
	�� = 20
	����= -1
	���α׷� ����.
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;
	int sum =0;
	while (1) {
		printf("���� =");
		scanf("%d", &num);
		if (num < 0) break;
		sum += num;
		printf("���� �� = %d\n", sum);
	}
	printf("���α׷� ����\n");
	return 0;
}