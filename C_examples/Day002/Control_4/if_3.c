/*
	�� ���� ������ �Է¹޾� �־��� ���ǰ� ������Ŀ� �°� ��µǵ��� ����

	<�Է¹��>
	ù��°��=
	�ι�°��=
	����°��=

	<���>
	�ִ밪 >= �߾Ӱ� >= �ּҰ�

	<ó������>
	1. �Է¹޴� ���� num1, num2, num3 �̿�, �ӽ� ������ tmp�̿�
	2. ��º����� num1>= num2 >= num3

*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	//�˰��� ����! ������ �۾����� �ڵ嵵 �۾�����. 
	int num1, num2, num3, tmp;
	
	printf("ù��°�� =  ");
	scanf("%d", &num1);
	printf("�ι�°�� =  ");
	scanf("%d", &num2);
	printf("����°�� =  ");
	scanf("%d", &num3);

	//���� ���� ū ���� num1 �� �ƴ϶�� -> num2 or num3 �� ū�����
	if (num2 > num1 && num2 > num3) { //num2 �� ���� ũ��
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	else if (num3 > num1 && num3 > num2) { //num3 �� ���� ũ��
		tmp = num1;
		num1 = num3;
		num3 = tmp;
	}

	if (num3 > num2) { //num2�� ���� ���� �ʴٸ�
		tmp = num2;
		num2 = num3;
		num3 = tmp;
	}

	//���� ū���� num1�� �����Ѵ�
	printf("%d >= %d >= %d\n", num1, num2, num3);
	return 0;
}