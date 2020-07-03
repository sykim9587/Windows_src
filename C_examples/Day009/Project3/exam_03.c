/*
	����ü (structure) : Ű���� (struct)
	-����ڿ� ���� ���Ӱ� ���ǵ� ����� ���� �ڷ����� ���̰� �ȴ�. 
	-�⺻�ڷ��� : char, int, long, float, double

	1. ����
		struct ����ü����{
			//����ʵ� (member field)
			int num;
			double grade;
		};
	2. ����ü���� ����
		struct ����ü���� ����ü����;
	
	//typedef int Lee �̷������� ������ ����
	3.����ü �������ϴ� ������ typedef
	  ���1.
	  typedef struct ����ü����{
		
	  }����ü����;

	  ���2.
	  typedef struct ����ü���� ����ü����;
	  ����ü���� ����ü����;

*/

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct Student {
	char name[20];
	int num;
	double score;
}Student;

int main() {
	//����ü������ �ʿ��ϴ�
	//typedef struct Student Student; �� �����ϴ�. 
	Student stu;

	//����ü ����� ���� direct ������
	strcpy(stu.name, "ȫ�浿");
	stu.num = 1234;
	stu.score = 89.7;

	printf("�̸�: %s\n", stu.name);
	printf("�й�: %d\n", stu.num);
	printf("����: %.1lf\n", stu.score);
	return 0;
}