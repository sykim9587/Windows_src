#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


//����ü ����
typedef struct Student {
	//Menber field 
	int sub[4]; //kor, eng, math, tot
	char name[20];
	double avg;

}Student;

int main() {
	//struct Student stu;

	////1st method
	//typedef struct Student Student; // �� �ڷ����� �ڷ� ���̰ڴ�
	//Student stu; //�Ϲݺ���ó��

	//best method
	Student stu;

	stu.sub[0] = 90;
	stu.sub[1] = 87;
	stu.sub[2] = 88;
	strcpy(stu.name, "ȫ�浿");

	stu.sub[3] = stu.sub[0] + stu.sub[1] + stu.sub[2];
	stu.avg = stu.sub[3] / 3.0;

	printf("%s���� ������ ������ �����ϴ�.\n", stu.name);
	printf("���� : %d, ���: %.2lf\n", stu.sub[3], stu.avg);

	return 0;
}