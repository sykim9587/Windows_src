/*
	���ѵ� ���ǿ��� �ݺ��� ó���� �� ����Ѵ�. Ƚ���� ��Ȯ�ϴ�. 
	1���� 100���� Ȧ���� �� = 2500

*/

#include <stdio.h>

int main() {
	int sum = 0;
	int i;

	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) continue;
		sum += i;
	}

	printf("1���� 100������ Ȧ���� �� = %d", sum);

	return 0;

}