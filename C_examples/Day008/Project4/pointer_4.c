/*
	�迭�� ��հ��� ����Ͽ� ����ϴ� ���α׷�
	��, ������ �Լ��� �����Ͽ� �迭�� ��� ��� �� ��� �Ѱ��ֱ�

*/
#include <stdio.h>
double average(double* p, int size ) {
	double tot=0.0;

	for (int i = 0; i < size; i++) {
		tot += *(p + i);
	}
	return tot/size;
}

int main() {
	double ary[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	double avg;
	int size;
	size = sizeof(ary) / sizeof(ary[0]);

	avg = average(ary, size);

	printf("�迭�� ��հ�: %.2lf\n", avg);

	return 0;
}

