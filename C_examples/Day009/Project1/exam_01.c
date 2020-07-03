/*
	�����Ҵ� (dynamic Alllocation)
	-���α׷� �����߿� �ʿ信 ���� ������ ���Ƿ� �Ҵ��ؼ� ����ϴ� ������ ���α׷� �����߿� �������� �Ҵ�� ������ ������ �� �ִ�.
	-�ֿ��Լ�
		void* malloc(�Ҵ��� ������ ũ�� = byte)
		void* calloc (�迭��Ұ���, �ϳ��� ������ ũ��) : �ʱ�ȭ
		void realloc(�̹��Ҵ�Ȱ���, ���Ҵ������ ũ��) :���α׷� �߰��� ũ�⸦ ������
*/

#include <stdio.h>
#include<stdlib.h>

int main() {
	double* ap;
	//ap = (double*)malloc(5 * sizeof(double)); //�ʱ�ȭ�� �����ʾƼ� �����Ⱚ�� ���´�.
	ap = (double*)calloc(5,sizeof(double)); //�ȿ� ���°� �ٸ���. �� 0���� �ʱ�ȭ�� �ȴ�. 

	if (ap == NULL) {
		printf("�����Ҵ翡 �����Ͽ����ϴ�. \n");
		return 0;
	}

	for (int i = 0; i < 5; i++) {
		printf("%lf\n", ap[i]); 
	}

	for (int i = 0; i < 5; i++) {
		free(ap + i); //�ȿ� �ּҸ� ����� �Ѵ�. 
	}
	return 0;
}