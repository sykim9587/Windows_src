#include <stdio.h>
#include "struct.h"
#pragma warning(disable:4996)
#include <string.h>
#include <stdlib.h>

//�������� 
Account* acc;
int size = 3; //�ʱ��� �����Ҵ� ������

//�Լ����Ǻ�
void showAccount();
void makeAccount();
void addAccount();
void remove();

int main() {
	//�ʱⰪ�� ������ ���� ������� 
	//Account acc =  {"ȫ�浿",1,10000} ;

	//Account acc[3]; //�̷��� �ϸ� ������ �ȵȴ�. 

	acc = (Account*)malloc(sizeof(Account) * size);
	if (acc == NULL) {
		printf("�����Ҵ� ����\n");
		return 0;
	}
	makeAccount();
	showAccount();
	addAccount();
	//printf("%d", size);
	showAccount();

	//printf("�����Ҵ� ũ�� %d\n", sizeof(p));
	//free(acc);
	return 0;
}

void showAccount() {
	for (int i = 0; i < size; i++) {
		printf("���¹�ȣ: %d\n", acc[i].id);
		printf("���̸�: %s\n", acc[i].name);
		printf("�����ܾ�: %d\n", acc[i].balance);
		printf("------------------------------------------\n");
	}
}

void makeAccount() {
	for (int i = 0; i < 3; i++) {
		acc[i].id = 1;
		acc[i].balance = 10000;
		strcpy(acc[i].name, "ȫ�浿");
	}
}

void addAccount() {
	char curName[20];
	int id;
	int money;


	printf("���¹�ȣ = ");
	scanf("%d", &id);
	printf("���̸� =");
	scanf("%s", curName);
	printf("���ݱݾ� =");
	scanf("%d", &money);
	//�Ҵ�� ������ ũ�⸦ ����� �����Ҵ� ������ �籸���ؾ� �Ѵ�. 

	acc = (Account*)realloc(acc, size * sizeof(Account) + 1);
	if (acc == NULL) {
		printf("�����Ҵ� ����\n");
	}
	(acc + size)->id = id;
	(acc + size)->balance = money;
	strcpy((acc + size)->name, curName);
	size += 1;
}

//�迭�� �籸��
/*
Account acc[3] �϶� 

Add count �Լ� ȣ�� ��
Account tmp[4];
for(int i = 0; i<3; i++){
	tmp[i].id = acc[i].id;
	tmp[i].balance = acc[i].balance;
	strcpy(tmp[i].name, acc[i].name);
}
 tmp[3].id = id;
	tmp[3].balance = money;
	strcpy(tmp[3].name, curName);

*/

void remove() {
	/*
		�輳�� ���� �Է¹޾� �����ϴ��� �Ǵ� �� �� �����ϸ� ���� ����
		���� �������� ������ "�Է��Ͻ� ���¹�ȣ�� ���� ���Ѵٰ� ����Ʈ
	*/

}