/*
	�������Կ����� (���մ��Կ����� )
	- ���Կ����ڿ� ��������� �����س��� ������
	- ���������� ++/--
		a++ // a= a+1, a +=1;
	- +=, -=, *=, /=, %=
*/

#include <stdio.h>

int main() {

	int num1 = 2, num2 = 4, num3 = 6;

	num1 += 3;
	num2 *= 4;
	num3 %= 5;

	printf(" num1 : %d, num2: %d, num3: %d\n", num1, num2, num3);
	return 0;
}