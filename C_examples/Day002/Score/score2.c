/*
	����ó�����α׷� 2�ܰ�
	���� ���� ���� ���� �޾� ����, ���, ���� ���

	<�Է�>
	����=
	����=
	����=

	<���>
	����: xx, ���: xx.xx, ����: x

	<ó������>
	1. �־��� ��������Ŀ� �°� ����
	2. ����� �Ҽ��� ���� ��°�ڸ�
	3. ������ ������� A, B, C, D, F
	4. ����� 90 �̻�: A, 80 �̻�: B, 70�̻�: C, 60�̻�: D, �ܴ̿� F
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int kor, eng, math, tot;
	float avg;
	char grade;

	printf("���� = ");
	scanf("%d", &kor);
	printf("���� = ");
	scanf("%d", &eng);
	printf("���� = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg =(float) tot / 3; //casting �� ����
	
	if (avg >= 90)	grade = 'A'; //�پ��ϰ� ����
	else if (avg >= 80)	grade = 'B';
	else if (avg >= 70)	grade = 'C';
	else if (avg >= 60)	grade = 'D';
	else  grade = 'F';


	printf("����: %d, ���: %.2f, ����: %c\n", tot, avg, grade);
	return 0;
}