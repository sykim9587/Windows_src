#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int score[5][3] = { 0 }; //�迭 �����Ⱚ �� ������ �ʱ�ȭ
	int sum[3] = { 0 };
	char* sub[3] = { "����", "����", "����" }; //����� ���� �ڷ��� 

	for (int i = 0; i < 5; i++) { //�л� 5���� ���� �Է�
		printf("%d�� ����\n", i + 1);
		for (int k = 0; k < 3; k++) { //�� ���� ���� �Է�
			do {
				printf("%s = ", sub[k]);
				scanf("%d", &score[i][k]);
			} while (score[i][k] < 0 || score[i][k]>100);
		}
	}
	
	for (int i = 0; i < 3; i++) { //�� ������ ���� ���ϱ�
		for (int k = 0; k < 5; k++){
			sum[i] += score[k][i];
		}
		printf("%s �� ���� = %d\n", sub[i], sum[i]);
	}
	return 0;
}