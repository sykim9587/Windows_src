/*
	�迭�� ������ 
*/

#include <stdio.h>

void ary_prn(int* p, int size) {
	for (int i = 0; i < size; i++) {
		printf("%5d", *(p+i));
	}
	printf("\n");
}

int main() {
	int arr[5] = { 10,20,30,40,50 };
	//int* p;
	//p = arr; // p = &arr[0] -> ��� �ʿ����. arr�� �ּҴϱ�

	ary_prn(arr, 5); //�̷� �Լ��� ��������� ���� ������. 
	return 0;
}