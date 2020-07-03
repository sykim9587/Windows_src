#include <stdio.h>

typedef struct Student{
	char name[20];
	int id;
	int kor, eng, math;
}Student;

int main() {
	Student  s1 = { "aaa",1234, 90,88,100 };
	Student* sp; //포인터변수
	sp = &s1; //이제 가르킴

	printf("이름: %s\n", s1.name);
	printf("학번 : %d\n", sp->id); //포인터 연산 
	printf("학번: %ㅇ\n", (*sp).id); //이렇게도 가능.. 
	
	return 0;
}