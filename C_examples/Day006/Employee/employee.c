/*
	회사가 정규직 직원 급여 관리 프로그램을 만든다.
	둘 이상의 직원 급여를 관리할 수 있는 프로그램 구현
	<입력 및 출력형식>
	==직원관리 프로그램 ==
	1.직원등록
	2. 지급될 급여 총합 출력
	3. 전체 직원 급여 정보 출력
	4. 프로그램 종료
	==================
	메뉴 =

	<처리조건>
	1. 직원을 객체화하는 구조체 permanent 를 구현하라, 멤버필드는 직원의 이름과 급여를 갖는다. 
	2. 각 기능은 함수로

*/

#include <stdio.h>
#pragma warning(disable : 4996)

typedef struct Employee {
	char name[20];
	int salary;
}Permanent;

Permanent emp[100];
int index = 0;

//함수선언부
void addEmployee();
void totSalary(); // 지급될 직원급여 총합
void disp();
void menu();

int main() {
	int choice;
	
	while (1) {
		menu();
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			addEmployee();
			break;
		case 2:
			totSalary();
			break;
		case 3:
			disp();
			break;
		case 4:
			printf("프로그램 종료\n");
			return 0;
		default: 
			printf("잘못입력\n");
			getchar();
		}

	}

	return 0;
}

void menu() {
	printf("\n==직원관리 프로그램 ==\n");
	printf("1.직원등록\n");
	printf("2.지급될 급여 총합 출력\n");
	printf("3.전체 직원 급여 정보 출력\n");
	printf("4. 프로그램 종료\n");
	printf("====================\n");
	printf("메뉴 =\n");
}

void addEmployee() {
	int salary;

	
	printf("==직원등록==\n");
	printf("이름 = ");
	scanf("%s", &emp[index].name);
	printf("월급 = ");
	scanf("%d", &emp[index].salary);

	index++;
	printf("직원 등록 완료\n");

}

void totSalary() {
	int sum=0;
	for (int i = 0; i < index; i++) {
		sum += emp[i].salary;
	}
	printf("sum = %d\n", sum);

}

void disp() {
	for (int i = 0; i < index; i++) {
		printf("이름: %s 월급: %d\n", emp[i].name, emp[i].salary);
	}

}