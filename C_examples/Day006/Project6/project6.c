/*
	구조체와 동적할당
*/

#include <stdio.h>
#include <string.h>

typedef struct Person { //24 byte
	char* name;
	int age; 
}Person;

int main() {
	
	//기본형
	//Person people; //또는 초기값 주고 시작 = {"장보고", 20};
	//people.age = 20;
	//strcpy(people.name, "장보고");
	//printf("이름: %s, 나이: %d\n", people.name, people.age);
	

	//배열
	Person people[3] = { {"장보고",20},{"이순신",19},{"강감찬",19} };
	for (int i = 0; i < 3; i++) {
		printf("이름: %s, 나이: %d\n", people[i].name, people[i].age);
	}
	printf("Person 구조체의 크기: %d\n", sizeof(Person)); //char* name;으로 하면 8로! char name[20] 하면 총 24

	return 0;
}