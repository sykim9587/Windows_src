/*
	�ϳ��� �� �Է¹޾� ������� �������� �����Ͽ� ���

	<�Է�>
	�� = 

	<���>
	����Դϴ�. 
	�����Դϴ�.
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	
	int su;

	printf("�� = ");
	scanf("%d", &su);

	//su > 0 ? printf("����Դϴ�.\n") : printf("�����Դϴ�.\n");

	if (su > 0) {
		printf("����Դϴ�\n");
	}
	else if(su<0) {
		printf("�����Դϴ�\n");
	}
	else {
		printf("��(0)�Դϴ�.\n");
	}

	return 0;
}