#include <stdio.h>
#pragma warning(disable: 4996)
#include "Profile.h"
#include "Student.h"

int main() {
	Student stu;

	stu.pf.age = 23;
	stu.pf.height = 183.7;
	stu.pf.name = "ȫ�浿"; //�Ϻη� �����ͻ�� ��Ҵ� strcpy�� ��������

	stu.num = 12345;
	stu.grade = 4.3;

	printf("�̸� : %s\n", stu.pf.name);
	printf("����: %d\n", stu.pf.age);
	printf("����: %.1lf\n", stu.pf.height);
	printf("�й�: %d\n", stu.num);
	printf("����: %.1lf\n", stu.grade);

	return 0; 
}