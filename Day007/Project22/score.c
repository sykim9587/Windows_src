/*
	�Լ� Ȱ���� ���� ó�� ���α׷� �����ϱ�. 
	��, ��, �� �Է¹޾� ������ ��� ����
	������ ����ϴ� �Լ��� ��� ����ϴ� �Լ� ������ ����
*/

#include <stdio.h>
#pragma warning(disable:4996)

int total(int kor, int eng, int math);
double average(int tot);

int main() {
	int kor, eng, math, tot;
	double avg;

	printf("���� = ");
	scanf("%d", &kor);
	printf("���� = ");
	scanf("%d", &eng);
	printf("���� = ");
	scanf("%d", &math);

	tot = total(kor, eng, math);
	avg = average(tot);

	printf("���� = %d, ��� = %.2lf\n", tot, avg);
	return 0;
}

int total(int kor, int eng, int math) {
	return kor + eng + math;

}

double average(int tot) {

	return tot / 3.0;
}