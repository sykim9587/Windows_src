/* 
	�� ������ : ������ ���´�. �ϳ��̻��� ���迬���ڸ� ��� ��� ����� ���� ��� �ȴ�. 
	NOT(!: ������), OR, AND
*/

#include <stdio.h>

int main() {
	int num1 = 10, num2 = 12;
	int res1, res2, res3;

	res1 = num1 == 10 && num2 == 12;
	res2 = num1 < 12 || num2 >12;
	res3 = !num1; // �����ϰ� C�� 0�� �ƴϸ� ���̴�. 

	printf("res1 = %d res2 = %d res3 = %d\n", res1, res2, res3);
	return 0;

}