/*
	���� ���� ���α׷�: 
	1�ܰ� - ��¹޾� ��� ��� ( 2���� �Ҽ���)
	2�ܰ� - + ���� ��� (switch case)
	3�ܰ� - ���� ��� ��� (2° �ڸ�����) �� ���� ���� 0-100, ���� ����� �ٽ� �Է�
	4�ܰ� (����) - 3���� ����, ����, ���� ������ �Է¹޾� ������ ��� ���, �迭 �̿�
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	//int kor, eng, math, tot;
	int score[4] = { 0 }; // �ʱⰪ �ָ� ����
	double avg;

	/*printf("����1 = ");
	scanf("%d", &score[0]);
	printf("����2 = ");
	scanf("%d", &score[1]);
	printf("����3 = ");
	scanf("%d", &score[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("����%d = ", i+1);
		scanf("%d", &score[i]);
		score[3] += score[i];
	}

	//score[3] = score[0] + score[1] + score[2];
	avg = score[3] / 3.0;

	printf("���� = %d, ��� %.2lf\n", score[3], avg);

	return 0;
}