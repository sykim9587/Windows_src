/*
	�ΰ��� ���� �Է� -> ū�� ���
	���׿����� �̿�

	<�Է�����>
	ù��°�� =
	�ι�°�� =
	����°�� =

	<�������>
	ū�� : xx

	<tip>
	������ ���ϴ� ���� ���Ѵ�. �ش� ������ �ٸ��� ������ �� ���� ���� ��������. 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int num1, num2, num3,max; // first, second, max �̷��� ���� 

	printf("�� �� �Է�:");
	scanf("%d %d %d", &num1, &num2, &num3);
	max = num1 > num2 ? num1 : num2;
	max = max > num3 ? max : num3;
	printf("ū�� : %d",max);

	return 0;
}