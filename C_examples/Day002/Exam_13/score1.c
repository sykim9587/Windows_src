/*
	����ó�����α׷� 1�ܰ�
	����, ����, ���� �Է¹޾� ���� ��� ��� -> ���
	�� �־��� �����

	<�Է� �� ���>
	���� = 
	���� = 
	���� =

	����: xx��, ���: xx.xx��
*/

#include <stdio.h>
#pragma warning(disable: 4996)


int main() {

	int kor, eng, math, tot;
	float avg;

	printf("���� =");
	scanf("%d", &kor);
	printf("���� =");
	scanf("%d", &eng);
	printf("���� =");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0f; // 3.0 �ϸ� double �̴�. 
	//printf("\n");
	printf("\n����: %d ���: %.2f\n", tot, avg);

	return 0;
}