/*
	���� ó�� ���α׷� 
	<�Է� �� �������>
	==���� ���� ���α׷�==
	1. �л����
	2. �л��˻�
	3. �л�����
	4. �л�����
	5. �۾�����
	==================

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int a[5] = { 10,20,30,40,50 };
	int b[4] = { 0 }; 
	int value;
	int index; //������ ���� ��ġ �����ϴ� ����

	printf("������ �� = ");
	scanf("%d", &value);

	//for (int i = 0; i < 5; i++) { //�迭�� ũ��� �������. 
	//	if (a[i] == value) {
	//		a[i] = 0;
	//		break;
	//	}
	//}

	/*for (int i = 0; i < 5; i++) {
		if (a[i] != 0) printf("%5d", a[i]);
	}*/



	//����� �ϴ¹�
	for (int i = 0; i < 5; i++) { //�迭�� ũ��� �������. 
		if (a[i] == value) {
			index = i;

			break;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (i < index)
			b[i] = a[i];
		else {
			b[i] = a[i + 1];
		}
	}

	for (int i = 0; i < 4; i++) 
		 printf("%5d", b[i]);



	return 0;
}