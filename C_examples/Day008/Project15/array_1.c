/*
	2���� �迭�� ������ �迭
	1. 2���� �迭: 1���� �迭�� �迭�̴�. 

*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int sub[4]; //1���� ������ �迭
	int subject[3][4]; //�� [4]�κп� ������ ����ȴ�. 
	int tot;
	double avg;

	////4������ ������ �Է¹޴� ����
	//for (int i = 0; i < 4; i++) {
	//	printf("�������� = ");
	//	scanf("%d", &sub[i]);
	//}

	for (int k = 0; k < 3; k++) {
		printf("%d��° ����� ������ �Է����ּ���.\n", k);
		for (int i = 0; i < 4; i++) {
			printf("%d��° �������� = ", i);
			scanf("%d", &subject[k][i]);
		}
		tot = 0;
		for (int j = 0; j < 4; j++) {
			tot += subject[k][j];
		}
		avg = tot / 4.0;
		printf("%d��° ����� ���� = %d, ���= %.2lf\n", k, tot, avg);

	}

	//������ ����� ����ϴ� ����



	return 0;
}