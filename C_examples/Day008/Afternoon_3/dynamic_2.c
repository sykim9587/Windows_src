/*
	�ټ����� ���̸� �Է¹޾� ��� ���̸� ����Ͽ� ����ϴ� ���α׷� ����

*/

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	//int arr[5] = { 0 };
	int* ip; //�����Ҵ��� ���� �ּҸ� ������� ������ ����
	int sum = 0;

	ip = (int*)malloc(sizeof(int) * 5);
	printf("�ټ����� ���� �Է�\n ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", ip+i); //�ּҴϱ�
		sum += ip[i];
	}
	printf("�ټ����� ��ճ��� = %.2lf\n", sum / 5.0);

	free(ip); // ������Ų��. 
	return 0;
}