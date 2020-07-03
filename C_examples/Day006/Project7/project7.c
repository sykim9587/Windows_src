/*
	구조체 안에 또 다른 구조체의 객체를 담을 수 있다. 
*/

#include<stdio.h>

typedef struct Info {
	char* school;
	char* subject;

}Info;

typedef struct Person {
	char* name;
	int age;
	double height;

	Info info; //구조체 안에 다른 구조체
}Person;

int main() {
	Person people;

	people.name = "홍길동";
	people.age = 33;
	people.height = 190.7;

	people.info.school = "한국대학교";
	people.info.subject = "컴퓨터공학과";

	return 0;
}