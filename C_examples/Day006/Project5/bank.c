#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX 100		//���� -> ���߿� �����Ҵ� �ϸ� ���� ���Ѵ�.

////���ڿ� �ǹ̸� �ְ���� �� 
//#define NEW 1
//#define INPUT 2
//#define OUTPUT 3
//#define SHOW 4
//#define EXIT 5

////�ʹ� ��ϱ� ������!
//enum MENU{MAKE = 1, INPUT, OUTPUT, SHOW, EXIT}; //1�� �ʱ�ȭ 

typedef struct Account {
	char name[20];
	int id;					//���¹�ȣ
	int balance;			//�����ܾ�
}Account;

//�������� -> ����Լ����� ����� �� �ֵ���
Account* accList; //
int index = 0;				//�迭�� ��ġ, ������ ī��Ʈ 

//�Լ� �����
void showMenu(); //�޴� ���
void makeAccount(); //���� ����
void deposit(); //�Ա�ó��
void withdraw(); //���ó��
void showAccount(); //��ü �� ���

void main() {
	int menu;

	//enum MENU m; -> switch case �� ����.
	accList = (Account*)malloc(sizeof(Account) * 100);
	if (accList == NULL) {
		printf("�����Ҵ� ����\n");
	}

	while (1) { //����loop
		//�޴����
		showMenu();
		printf("�޴� = ");
		scanf("%d", &menu);


		if (menu == 1) {
			makeAccount();
		}
		else if (menu == 2) {
			deposit();
		}
		else if (menu == 3) {
			withdraw();
		}
		else if (menu == 4) {
			showAccount();
		}
		else if (menu == 5) {
			for(int i = 0; i < MAX; i++) free(accList[i]); //�� �����ϱ�. 
			break;
		}
		else { //�߸��Է�
			printf("�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n");
		}

	}
	printf("���α׷��� �����մϴ�.\n");

	return 0;
}

void showMenu() //�޴� ���
{
	printf("\n====Bank Menu====\n");
	printf("1.���°���\n");
	printf("2.�Ա�ó��\n");
	printf("3.���ó��\n");
	printf("4.��ü�� �ܾ���Ȳ\n");
	printf("5.���α׷� ����\n");
	printf("==================\n");
}

void makeAccount()//���� ����
{
	char curName[20];
	int id;
	int money;

	printf("====�Ա�ó��====\n");

	printf("���� ��ȣ =");
	scanf("%d", &id);


	printf("���̸� =");
	scanf("%s", curName);
	printf("���ݱݾ� = ");
	scanf("%d", &money);

	//�Է¹��� ���� ����ü �迭�� ����
	accList[index].id = id;
	strcpy(accList[index].name, curName); // ���ڿ��� ���Կ����� ��� ���Ѵ�. 
	accList[index].balance = money;

	printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�. \n");
	printf("������ �ܾ��� %d�� �Դϴ�. \n", accList[index].balance);

	index++;// ���ο� �� ���� ĭ���� �̵�
}

void deposit() //�Ա�ó��
{
	/* ���¹�ȣ Ȯ��, �Աݱݾ� �ް� �ش� ���¿� ����*/
	int id;
	int money;

	printf("\n===�Ա�ó��===\n");
	printf("���¹�ȣ = ");
	scanf("%d", &id);

	//�Է¹��� ���¹�ȣ�� ����ü�迭�� ��ġ�ϴ��� ����
	for (int i = 0; i < index; i++) {
		if (accList[i].id == id) {
			printf("�Աݱݾ� = ");
			scanf("%d", &money);
			accList[i].balance += money;

			printf("�Ա�ó�� �Ϸ�.\n");
			printf("���� ���� �ܾ��� %d ���Դϴ�. \n", accList[i].balance);
			return;
		}
	}
	printf("���¹�ȣ�� ��ġ���� �ʽ��ϴ�. \n");
}

void withdraw() //���ó��
{
	/* ���¹�ȣ �Է�, �Է��� ���¹�ȣ�� ����ü �迭�� �����ϴ��� �ľ�, ��ݱݾ� �Է�
		�� ��ݱݾ��� �����ϸ� �ܰ���� ���
	*/
	int id;
	int money;
	printf("\n===���ó��===\n");
	printf("���¹�ȣ = ");
	scanf("%d", &id);

	//�Է¹��� ���¹�ȣ�� ����ü�迭�� ��ġ�ϴ��� ����
	for (int i = 0; i < index; i++) {
		if (accList[i].id == id) {
			printf("��ݱݾ� = ");
			scanf("%d", &money);

			if (accList[i].balance < money) {
				printf("�ܾ׺����մϴ�. \n");
				printf("���� ���� �ܾ��� %d ���Դϴ�. \n", accList[i].balance);
				return;
			}
			accList[i].balance -= money;
			printf("���ó�� �Ϸ�.\n");
			printf("���� ���� �ܾ��� %d ���Դϴ�. \n", accList[i].balance);
			return;
		}
	}
	printf("���¹�ȣ�� ��ġ���� �ʽ��ϴ�. \n");
}

void showAccount() //��ü �� ���
{
	/*
		��ϵ� ���� ����ŭ �ݺ��ؼ� ���
	*/
	printf("\n====��ü�� ���===\n");
	for (int i = 0; i < index; i++) {
		printf("%5d %10s %20d\n", accList[i].id, accList[i].name, accList[i].balance);
	}

}