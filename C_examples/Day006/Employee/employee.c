/*
	ȸ�簡 ������ ���� �޿� ���� ���α׷��� �����.
	�� �̻��� ���� �޿��� ������ �� �ִ� ���α׷� ����
	<�Է� �� �������>
	==�������� ���α׷� ==
	1.�������
	2. ���޵� �޿� ���� ���
	3. ��ü ���� �޿� ���� ���
	4. ���α׷� ����
	==================
	�޴� =

	<ó������>
	1. ������ ��üȭ�ϴ� ����ü permanent �� �����϶�, ����ʵ�� ������ �̸��� �޿��� ���´�. 
	2. �� ����� �Լ���

*/

#include <stdio.h>
#pragma warning(disable : 4996)

typedef struct Employee {
	char name[20];
	int salary;
}Permanent;

Permanent emp[100];
int index = 0;

//�Լ������
void addEmployee();
void totSalary(); // ���޵� �����޿� ����
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
			printf("���α׷� ����\n");
			return 0;
		default: 
			printf("�߸��Է�\n");
			getchar();
		}

	}

	return 0;
}

void menu() {
	printf("\n==�������� ���α׷� ==\n");
	printf("1.�������\n");
	printf("2.���޵� �޿� ���� ���\n");
	printf("3.��ü ���� �޿� ���� ���\n");
	printf("4. ���α׷� ����\n");
	printf("====================\n");
	printf("�޴� =\n");
}

void addEmployee() {
	int salary;

	
	printf("==�������==\n");
	printf("�̸� = ");
	scanf("%s", &emp[index].name);
	printf("���� = ");
	scanf("%d", &emp[index].salary);

	index++;
	printf("���� ��� �Ϸ�\n");

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
		printf("�̸�: %s ����: %d\n", emp[i].name, emp[i].salary);
	}

}