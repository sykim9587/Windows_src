/*
	1���� 100���� �ڿ����� �Ҽ� ���
	�� ���ٿ� 5���� ���

	<��Ʈ> 
	�Ҽ�: 1�� �ڱ� �ڽ����θ� ������ ���� ��

*/

//�ϳ��� ���� �Է¹޾Ƽ� �Ҽ����� �ƴ��� �����ϴ� ���α׷�
#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int number;
	int flag, count=0;

	printf("�� = ");
	scanf("%d", &number);
	
	for (int k = 2; k <= number; k++) {
		

		flag = 1; //�Ź� 1�� �ʱ�ȭ 
		for (int i = 2; i < k; i++) {
			if (k % i == 0) {
				flag = 0; //�Ҽ��� �ƴϱ⿡ ������� �ʰ� ��������
				break; 
			}
		}
		if (flag) { // print �� 1�̸� ����ϰ� 0�̸� ������� �ʴ´�. 
			printf("%5d",k);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
		
	}

	
	return 0;
}