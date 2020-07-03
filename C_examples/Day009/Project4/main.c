#include <stdio.h>
#pragma warning(disable: 4996)
#include "Profile.h"
#include "Student.h"

int main() {
	Student stu;

	stu.pf.age = 23;
	stu.pf.height = 183.7;
	stu.pf.name = "홍길동"; //일부러 포인터상수 담았다 strcpy안 쓰기위해

	stu.num = 12345;
	stu.grade = 4.3;

	printf("이름 : %s\n", stu.pf.name);
	printf("나이: %d\n", stu.pf.age);
	printf("신장: %.1lf\n", stu.pf.height);
	printf("학번: %d\n", stu.num);
	printf("학점: %.1lf\n", stu.grade);

	return 0; 
}