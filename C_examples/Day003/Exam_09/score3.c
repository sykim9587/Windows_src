/*
	����ó�� ���α׷�

	<�Է�>
	���� = 
	���� =
	���� =

	<���>
	���� = xx, ��� = xx.xx , ���� = xx

	<ó������>
	1. ������ �ڷ����� �̸��� ���Ƿ� ����
	2. ����� �����̿�, �Ҽ��� 2�ڸ�����
	3. ������ ��� �̿�, 90�̻� A, 80-> B, 70-> C, 60-> D, else F
	4. ���� switch ~ case �� �̿�
	5. �� ������ ������ 0-100, ���� ����� �ٽ� �Է¹ޱ� 
*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {

	int kor, eng, math, tot;
	double avg; //�⺻���̴ϱ� double 
	char level;

	do {
		printf("���� = ");
		scanf("%d", &kor);
	} while (kor < 0 || kor >100);

	do {
		printf("���� = ");
		scanf("%d", &eng);
	} while (eng < 0 || eng >100);

	do {
		printf("���� = ");
		scanf("%d", &math);
	} while (math < 0 || math >100);

	//printf("���� = ");
	//scanf("%d", &kor);
	//printf("���� = ");
	//scanf("%d", &eng);
	//printf("���� = ");
	//scanf("%d", &math);

	
	tot = kor + eng + math;
	avg = tot / 3.0;

	switch ((int)avg / 10) {
	case 10: case 9: level = 'A'; break;
	case 8: level = 'B'; break;
	case 7: level = 'C'; break;
	case 6: level = 'D'; break;
	default: level = 'F';
	}
	printf("���� = %d, ���� =%.2lf , ���� =%c", tot, avg, level); 

	/*
		int => %d, long => %ld
		float => %f, double => %lf 
	*/
	return 0;
}