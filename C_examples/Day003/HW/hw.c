/* 
	�� �Է¹޾� ��, ��, ��, �� ���

	�Է� 
	��=

	���
	 �� �� �� ��

	 ��Ʈ 
	 1�� = 60��
	 1�ð� = 3600��
	 �Ϸ� = 86400��
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int time, tmp;
	int day, hour, min, sec;

	printf("�� = ");
	scanf("%d", &time);

	day = time / 86400;
	tmp = time % 86400;
	hour = tmp / 3600;
	tmp = tmp % 3600;
	min = tmp / 60;
	sec = tmp % 60;

	printf("%d day %d hour %d min %d sec\n", day, hour, min, sec);

	return 0;
}