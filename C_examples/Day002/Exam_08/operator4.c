/*
	���迬���� : ��� ���
	- ������ ����� ��, �������� ���
	-������ ������ �¿��� ��� ����ȴ�. 

*/

#include <stdio.h>

int main() {
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	res1 = num1 == num2; 
	res2 = num1 <= num2;
	res3 = num1 > num2;

	printf(" res1: %d, res2: %d, res3: %d\n", res1, res2, res3);

	return 0;
}