/*
	shift ������: �������� �ڷ��̵�
	1. ����
		-left shift: �������� �־��� ��Ʈ����ŭ �̵�, ��ĭ�� 0����
		 ����: ����*2^(�̵��ϴº�Ʈ��)
		-right shift
		 ����: ����/2^�̵���Ʈ��
	2. 
	<<
	>>
*/

#include <stdio.h>

int main() {
	int su1 = 8, su2 = 1;
	int res1, res2;

	res1 = su1 >> 3;
	res2 = su2 << 3;

	printf("res1 = %d res2 = %d\n", res1, res2);

	return 0;
}
