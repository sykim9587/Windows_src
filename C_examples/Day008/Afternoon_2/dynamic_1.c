/*
	�����Ҵ� : malloc() , free() => stdlib.h
	1. �����Ҵ�
		�����ͺ��� = void* malloc(�����Ҵ�ũ��); //�ּҸ� ������ ������ �ʿ��ϴ�. 

	2. ��������

*/

#include <stdio.h>
#include <stdlib.h> //malloc �Լ��� ����ϱ� ���� ������� �߰�

int main() {
	int* ip; //int ���� ����ų �����ͺ���
	double* dp;

	ip = (int*)malloc(sizeof(int)); // malloc(4)�� ����, ip�� �ּҸ� ������ �ִ�. 

	if (ip == NULL) {
		printf("�����Ҵ��� ���� �ʾҴ�.\n");
		return 0;
	}
	dp = (double*)malloc(sizeof(double)); 

	*ip = 10;
	*dp = 3.4;

	printf("��������: %d\n", *ip);
	printf("�Ǽ�����: %.1lf\n", *dp);


	free(ip); 
	free(dp);
	return 0;
}