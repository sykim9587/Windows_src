/*
	����ó�����α׷�
	1�ܰ�: ����, ����, ���������� �Է¹޾� ������ ����� ���
	2�ܰ�: ���� ���(switch-case)
	3�ܰ�: do while, �� ������ 0~100����
	4�ܰ�: �迭�� Ȱ��
	5�ܰ�: 5���� ������ ó���� �� �ֵ��� 2���� �迭�� Ȱ���� ��. 
				����: �� ���� ������ ����Ͽ� ����ϴ� ���α׷� ����
	6�ܰ�: ����ü 
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int score[5][4] = { 0 }; //�迭 �����Ⱚ �� ������ �ʱ�ȭ
	double avg[5];

	/*char kor[] = "����";
	char eng[] = "����";
	char math[] = "����";*/

	//char sub[3][5] = { "����", "����", "����" }; //5char ��

	//����
	//char* kor = "����"; //�迭�� ��ü�� �ּҴϱ�

	//������
	char* sub[3] = { "����", "����", "����" }; //����� ���� �ڷ��� 

	for (int i = 0; i < 5; i++) {
		printf("%d�� ����\n", i+1);
		//������
		/*do {
			printf("���� =");
			scanf("%d", &score[i][0]);
		} while (score[i][0] < 0 || score[i][0]>100);
		do {

			printf("���� =");
			scanf("%d", &score[i][1]);
		} while (score[i][1] < 0 || score[i][1]>100);
		do {

			printf("���� =");
			scanf("%d", &score[i][2]);
		} while (score[i][2] < 0 || score[i][2]>100);*/

		//���� ��
		for (int k = 0; k < 3; k++) {
			do {
				printf("%s = ", sub[k]);
				scanf("%d", &score[i][k]);
			} while (score[i][k] < 0 || score[i][k]>100);
			score[i][3] += score[i][k];
		}
		//score[i][3] = score[i][1] + score[i][0] + score[i][2];
		avg[i] = score[i][3] / 3.0;
	}
	for (int i = 0; i < 5; i++) {
		printf("\n���� = %d, ��� = %.2lf\n", score[i][3], avg[i]);
	}
	return 0;
}