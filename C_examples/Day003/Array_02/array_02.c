/*
	�ټ����� ������ �Է¹޾� ���� ū �� ã�� ����ϴ� ���α׷�

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//int a, b, c, d, e, max; //�Ϲ������� + �� �Է¹ް� max�� a �ְ� ������� �� ->
	// �迭 �̿��ϸ� ���� �ʿ����. 
	int data[5], max;

	for (int i = 0; i < 5; i++) {
		printf("num = ");
		scanf("%d", &data[i]);
	}

	max = data[0];

	for (int k = 0; k < 5; k++) {
		if (max < data[k]) max = data[k];
	}

	printf("max = %d\n", max);
	return 0;
}