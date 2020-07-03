/*
	구조체 배열의 초기화
*/
#include <stdio.h>
typedef struct Person {
	char name[20];
	char phone[14];// NULL 포인트 자리를 줘야한다 
	int age;
}Person;

int main() {
	Person p[3] = { {"홍길동", "010-1234-5678", 19},
							{"장보고", "010-3333-4343", 21},
							{"이순신", "010-4343-3424", 20} }; //구조체 이후에도 세미콜론

	//구조체 포인터 변수
	Person* cp = p; // &p[0]

	////일반형
	//for (int i = 0; i < 3; i ++ ) {
	//	printf("%s : %s: %d\n", p[i].name, p[i].phone, p[i].age);
	//}
	
	//포인터 변수 
	for (int i = 0; i < 3; i++) {
		printf("%s : %s: %d\n", (cp+i)->name, (cp+i)->phone, (cp+i)->age); //->:포인터 연산자 
	}
							
							
	return 0;
}