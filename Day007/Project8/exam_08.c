/*
	switch(������) {
	case ������1: ������ ����; break;
	case ������2: ������ ����; break;

	default: 
	}

	���ɸ޴� �����ϴ� ���α׷�
	1. ���
	2. �ڴٸ�����
	3. �߽�
	4. �Ͻ�
	5. ����
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int choice;
	printf("�޴����� = ");
	scanf("%d", &choice);

	switch (choice) {
	case 1: printf("������ ��� �Դϴ�. \n"); break;
	case 2: printf("������ �ڴٸ����� �Դϴ�. \n"); break;
	case 3: printf("������ �߽� �Դϴ�. \n"); break;
	case 4: printf("������ �Ͻ� �Դϴ�. \n"); break;
	default : printf("���̾�Ʈ!! \n");		
	}
	return 0;
}
