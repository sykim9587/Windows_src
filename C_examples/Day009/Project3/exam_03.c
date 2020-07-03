/*
	구조체 (structure) : 키워드 (struct)
	-사용자에 의해 새롭게 정의된 사용자 정의 자료형을 쓰이게 된다. 
	-기본자료형 : char, int, long, float, double

	1. 선언
		struct 구조체형명{
			//멤버필드 (member field)
			int num;
			double grade;
		};
	2. 구조체변수 생성
		struct 구조체형명 구조체변수;
	
	//typedef int Lee 이런식으로 재정의 가능
	3.구조체 재정의하는 연산자 typedef
	  방법1.
	  typedef struct 구조체형명{
		
	  }구조체형명;

	  방법2.
	  typedef struct 구조체형명 구조체형명;
	  구조체형명 구조체변수;

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
	//구조체변수가 필요하다
	//typedef struct Student Student; 도 가능하다. 
	Student stu;

	//구조체 멤버에 접근 direct 연산자
	strcpy(stu.name, "홍길동");
	stu.num = 1234;
	stu.score = 89.7;

	printf("이름: %s\n", stu.name);
	printf("학번: %d\n", stu.num);
	printf("학점: %.1lf\n", stu.score);
	return 0;
}