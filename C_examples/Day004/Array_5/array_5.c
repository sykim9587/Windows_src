/*
	�ټ����� ���� �Է¹޾� �հ� �ִ밪�� ���
	�Է¹޴� ������ �迭 �����Ͽ� ���� �� ó��

		max = data[0];
	for (int j = 1; j < 5; j++) {
		if (max < data[j]) max = data[j];
	
*/

#include<stdio.h>
#pragma warning(disable:4996)


int maximum(int a[], int size) {
	int max = a[0]; 
	for (int j = 1; j < size; j++) {
		if (max < a[j]) max = a[j];
	}
	return max;
}

int main() {
	int data[5], sum = 0, max;

	for (int i = 0; i < 5; i++) {
		printf("%d ��° �� =", i+1);
		scanf("%d", &data[i]);

		sum += data[i];
	}

	max = maximum(data,5); //�迭���� �迭�� ���� �ּҿ� �����ϴ�
	// �迭�� ũ�⵵ ���� �����ش�. 


	printf("�Է¹��� �ڷ�: ");
	for (int i = 0; i < 5; i++) {
		printf("%5d", data[i]);
	}
	printf("�հ� = %d �ִ밪 = %d\n", sum, max);
	return 0;
}