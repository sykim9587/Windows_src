/*
	�迭�� ����� �����͸� ó���ϴ� ���α׷�
	1���� 20������ ���ڷθ� �ʱ�ȭ�� �迭 data�� ������ ���� ����Ǿ��ִ�. 
	����ڷκ��� Ư�� ���ڸ� �Է¹޾� �ش� ���ڰ� �迭�� ��� ����Ǿ��ִ��� ����ϴ� ���α׷��� �����Ͻÿ�. 
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int data[] = {1,4,3,2,6,5,5,4,7,12,14,15,19,20,9,10,11,11,10,12,1,8,9,8,13,16,18,17,19};

	int num;
	int count = 0;

	printf("���� �Է�: ");
	scanf("%d", &num);
	int size = sizeof(data) / sizeof(data[0]);

	for (int i = 0; i < size; i++) {
		if (num == data[i]) count++;
	}

	printf("�迭�� ���� %d�� %d�� �ֽ��ϴ�. \n", num, count);
	return 0;
}