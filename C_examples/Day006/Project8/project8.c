#include <stdio.h>

typedef struct Student{
	char name[20];
	int id;
	int kor, eng, math;
}Student;

int main() {
	Student  s1 = { "aaa",1234, 90,88,100 };
	Student* sp; //�����ͺ���
	sp = &s1; //���� ����Ŵ

	printf("�̸�: %s\n", s1.name);
	printf("�й� : %d\n", sp->id); //������ ���� 
	printf("�й�: %��\n", (*sp).id); //�̷��Ե� ����.. 
	
	return 0;
}