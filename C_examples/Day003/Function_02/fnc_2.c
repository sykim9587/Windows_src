/* 
	1. �Լ��� ���� ����
		�Լ����� => �Լ�ȣ�� => �Լ� ����
*/

/*
	�� ������ �Է¹޾� �� ���� ����Ͽ� ���
*/

#include <stdio.h>
#pragma warning(disable:4996)
int adder(int x, int y); // �Ű����� (���μ� = ��¥����) �ƹ��ų� ���ָ� �ȴ�. 
//�Ǵ�int adder(int , int)�� �ص� �ȴ�. 

int main() {
	int num1, num2, sum;

	printf("num1 = ");
	scanf("%d", &num1);
	printf("num2 = ");
	scanf("%d", &num2);
	
	sum = adder(num1, num2); // call by value //���μ� (�����μ�)
	printf("%d + %d = %d\n", num1, num2, sum);
	return 0;
}

int adder( int x, int y) {

	return x + y;


}