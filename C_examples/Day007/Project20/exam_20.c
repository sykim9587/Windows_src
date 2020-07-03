/*
	�Լ�(function) : c���� �۾��� ����Ǵ� �⺻ ����
	-���� ���õ� ��ɾ �ϳ��� �̸����� ��� ó���ϴ� ����. 

	call back: �ý��ۿ� ���ؼ� ȣ��
	����ڿ� ���� ȣ��Ǵ� �Լ� -> ����� ���� �Լ�
	-c���� main���� �����ؼ� main ���� ������. 
	-��ȯ��(return type) : �Լ��� ȣ��Ǿ� ������ �� �� ����� �ǵ��� �� �� �ǵ����ִ� ���� �ڷ���
	return �̶�� Ű���尡 �����ǰų� ���� ������ void��� ���� ����. 
	(�迭)char, int, long, double ���..
	(����� ���� �ڷ���) �迭, ����ü, �������� 

	�Լ� ȣ��: call by name, call by value, call by Reference
	�Լ� ������ ���� -> depends on ��ȯ��, �Ű����� 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int plus(int x, int y);

int main() {
	//int num1 = 10, num2 = 20;
	int sum = 0;
	int num1, num2;

	printf("num1 = ");
	scanf("%d", &num1);
	
	printf("num2 = ");
	scanf("%d", &num2);


	sum = plus(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}


int plus(int x, int y) {
	return x + y;
}
