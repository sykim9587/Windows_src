#include <stdio.h>
#pragma warning(disable:4996)

//1�ܰ�
//int main() {
//
//	int kor, eng, math, tot;
//	double avg;
//
//	printf("���� = ");
//	scanf("%d", &kor);
//	printf("���� = ");
//	scanf("%d", &eng);
//	printf("���� = ");
//	scanf("%d", &math);
//
//	tot = kor + eng + math;
//	avg = tot / 3.0;
//
//	printf("���� %d ��� %.2lf\n", tot, avg);
//	return 0;
//}

//int main() {
//
//	//int kor, eng, math, tot;
//	int sub[4]; // ������� ����
//	double avg;
//	//char* kkk = "����"; //ũ�� 5byte
//	//char* ccc = "����";
//	//char* ddd = "����";
//
//	//�迭�� �̸��� �� �ּ��̹Ƿ� char* kkk �ɼ��ִ� char kkk[5] ���. 
//	char* title[3] = { "����", "����", "����" };
//
//
//	/*printf("%s = ", title[0]);
//	scanf("%d", &sub[0]);
//	printf("%s = ", title[1]);
//	scanf("%d", &sub[1]);
//	printf("%s = ",title [2]);
//	scanf("%d", &sub[2]);*/
//
//	/*sub[3] = sub[0] + sub[1] + sub[2];
//	avg = sub[3] / 3.0;*/
//
//
//
//	printf("���� %d ��� %.2lf\n", sub[3], avg);
//	return 0;
//}


//������ �̿�

int main() {
	//int kor, eng, math, tot;
	int sub[4] = { 0 };
	/* sub[0] = kor, sub[1] = eng, sub[2] = math, sub[3] = tot */
	double avg;
	//char* kkk = "����";  // char* kkk;
	//char* ccc = "����";
	//char* ddd = "����";
	/*
		ss[3][5] �̷��� ��������� ���� �� ���� ����. �׸��� ������. �׷��� 
		�����ͷ� �����°� �� ȿ����! 
	*/

	char* title[3] = { "����", "����", "����" };

	/*printf("%s = ", title[0]);
	scanf("%d", &sub[0]);

	printf("%s = ", title[1]);
	scanf("%d", &sub[1]);

	printf("%s = ", title[2]);
	scanf("%d", &sub[2]);*/

	for (int i = 0; i < 3; i++) {
		printf("%s = ", title[i]);
		scanf("%d", &sub[i]);
		sub[3] += sub[i];
	}

	//sub[3] = sub[0] + sub[1] + sub[2];
	avg = sub[3] / 3.0;

	printf("���� = %d, ��� = %.2lf\n", sub[3], avg);

	return 0;
}