/*
	����ü�� �����Ҵ�
*/

#include <stdio.h>
#include <string.h>

typedef struct Person { //24 byte
	char* name;
	int age; 
}Person;

int main() {
	
	//�⺻��
	//Person people; //�Ǵ� �ʱⰪ �ְ� ���� = {"�庸��", 20};
	//people.age = 20;
	//strcpy(people.name, "�庸��");
	//printf("�̸�: %s, ����: %d\n", people.name, people.age);
	

	//�迭
	Person people[3] = { {"�庸��",20},{"�̼���",19},{"������",19} };
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s, ����: %d\n", people[i].name, people[i].age);
	}
	printf("Person ����ü�� ũ��: %d\n", sizeof(Person)); //char* name;���� �ϸ� 8��! char name[20] �ϸ� �� 24

	return 0;
}