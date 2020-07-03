/*
	���� �־��� ���ǿ� �����ϴ� ���α׷��� �����Ͻÿ�
	<ó������>
	1.�ֱ� 10�Ⱓ�� ����������� �Է¹޾Ƽ� �迭�� �����Ѵ�. 
	2.��� ����������� ����Ͽ� ����Ѵ�. 
	3.����� �ʰ��� �ش� ������� ���

	�����ʹ� 90��� �ѱ� ����������� ���
	1990	1		2		3		4		5		6		7		8		9	
	9.3	5.3	5.7	8.4	8.1	4.8	2.1	-9.1	9.4	3.6
*/
#include <stdio.h>
#pragma warning(disable:4996)

void input_growth(double*);							//�迭�� �����͸� �����ϴ� �Լ�
double average_growth(double*);				//��� ����������� ����ϴ� �Լ�
int extra_growth(double*, double);				//����� �ʰ��� Ƚ���� ����ϴ� �Լ�

int main() {
	double growth[10];
	double avg;
	int ext;
	input_growth(growth);
	avg = average_growth(growth);
	ext = extra_growth(growth, avg);

	printf("���: %.2lf, Ƚ��: %d\n", avg, ext);

	return 0;
}

void input_growth(double* arr) {
	for (int i = 0; i < 10; i++) {
		printf("199%d�⵵ ���������: ", i);
		scanf("%lf", arr + i);
	}
	printf("��������� ���� �Ϸ�\n");
}
double average_growth(double* arr) {
	double tot=0.0;
	for (int i = 0; i < 10; i++) {
		tot += *(arr + i);
		//tot+= p[i] �� �����ϴ� �迭ó��. 
	}
	return tot / 10.0;

}
int extra_growth(double* arr, double avg) {
	
	int count=0;
	for (int i = 0; i < 10; i++) {
		if (*(arr + i) > avg) count++;
	}
	return count;
}