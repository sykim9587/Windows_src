/*
	����������: 1�� ����, ����
	-���� ������: ++ a
	-���� ������: a -- 
	-������������ ���� ������ ���Կ����ں��� �ʴ�. 
*/

#include <stdio.h>

int main() {

	int num1 = 10, num2 = (num1--)+2;

	printf(" num1 = %d, num2 = %d\n", num1, num2);

	printf(" num1 = %d, num2 = %d\n", ++num1, num2++); //��º��ٵ� ������. 

	return 0;
}