/*
	2���� �迭 : 1���� �迭�� �ߺ� ó���ϱ� ���� �迭
	���� 
		�ڷ��� �迭��[÷��1][÷��2];
		�Ǵ�
		�ڷ��� �迭��[÷��1][÷��2] = {{...},{,,,}};
		ex) int x[2][3] = {1,2,3,4,5,6,}
		int x[2][3] = {{1,2,3},{4,5,6}}
		int x[][3] = {1,2,3,4,5,6} //�ո� ���� �����ϴ�
*/

#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//int kor, eng, math, tot;
	int x[3][4] = { 0 };
	double avg[3];

	for (int inwon = 0; inwon < 3; inwon++) {
		for (int sub = 0; sub < 3; sub++) {
			printf("%d��° �������� = ", sub);
			scanf("%d", &x[inwon][sub]);

			x[inwon][3] += x[inwon][sub]; //���� ���
		}
		avg[inwon] = x[inwon][3] / 3.0; //��� ���
	}

	for (int inwon = 0; inwon < 3; inwon++){
		printf("���� = %d, ��� = %.2lf\n", x[inwon][3], avg[inwon]);
	}


	return 0;
}