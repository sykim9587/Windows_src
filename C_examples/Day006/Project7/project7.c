/*
	����ü �ȿ� �� �ٸ� ����ü�� ��ü�� ���� �� �ִ�. 
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

	Info info; //����ü �ȿ� �ٸ� ����ü
}Person;

int main() {
	Person people;

	people.name = "ȫ�浿";
	people.age = 33;
	people.height = 190.7;

	people.info.school = "�ѱ����б�";
	people.info.subject = "��ǻ�Ͱ��а�";

	return 0;
}