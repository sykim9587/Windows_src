/*
	3�ڸ� ���� ������ ������� 7�� ����� ������ ���� ����ϴ� ���α׷� ����
	(100~999) 

	for(�ʱ�;����;����){
		�ݺ�ó�� �� ����	
	}
	
*/

#include <stdio.h>

int main() {
	int sum = 0, count = 0;

	for (int num = 100; num <= 999; num++) {
		if (num % 7 == 0) {
			sum += num;
			count++;
		}
	}

	printf("��: %d, ����: %d\n", sum, count);

	return 0;
}