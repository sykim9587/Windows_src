#include <stdio.h>
#pragma warning(disable:4996)

//1�ܰ�: ������ ��� �Ҽ� .2�ڸ�����
//int main() {
//	int kor, eng, math, tot;
//	double avg;
//
//	printf("���� = ");
//	scanf("%d", &kor);
//	//���� 
//
//	return 0;
//}


//2�ܰ� ����
/*
int main() {
	int kor, eng, math, tot;
	double avg;
	char grade;

	printf("���� = ");
	scanf("%d", &kor);
	printf("���� = ");
	scanf("%d", &eng);
	printf("���� = ");
	scanf("%d", &math);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg/10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("���� = %d, ��� = %.2lf, ���� = %c\n", tot, avg, grade);

	return 0;
}
*/


//3�ܰ� �� ������ ������ 0-100����, �ƴϸ� �ٽ� �Է�
/*
int main() {
	int kor, eng, math, tot;
	double avg;
	char grade;

	do {
		printf("���� = ");
		scanf("%d", &kor);
	} while (kor < 0 || kor > 100);

	do {
	printf("���� = ");
	scanf("%d", &eng);
	} while (eng < 0 || eng > 100);

	do {
	printf("���� = ");
	scanf("%d", &math);
	} while (math < 0 || math > 100);

	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("���� = %d, ��� = %.2lf, ���� = %c\n", tot, avg, grade);

	return 0;
}
*/

//4�ܰ�: �迭�� �̿��� �� 
int main() {
	//int kor, eng, math, tot;
	int sub[4] = { 0 };
	char* title[3] = { "����", "����", "����" }; //���ڿ������ ������
	double avg;
	char grade;

	for (int i = 0; i < 3; i++) {
		do {
			printf("%s = ", title[i]);
			scanf("%d", &sub[i]);
		} while (sub[i] < 0 || sub[i] > 100);
		sub[3] += sub[i];
	}

	avg = sub[3] / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'c'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F'; break;
	}

	printf("���� = %d, ��� = %.2lf, ���� = %c\n", sub[3], avg, grade);

	return 0;
}