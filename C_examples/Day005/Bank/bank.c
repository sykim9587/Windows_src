/*
	����ó���� �����ϴ� ���α׷�
	<�Է� �� ��������>

	==Bank Menu==
	1. �����
	2. �Ա�ó��
	3. ���ó��
	4. �ܾ���Ȳ
	5. �۾�����
	============
	�޴�=

	==����� ==
	id = sss
	money = 1000
	===========
	sss ���� ���°� ��ϵǾ����ϴ�.

	==�Ա�ó�� ==
	id = 
	money = 
	===========


*/

#include <stdio.h>
#pragma warning(disable : 4996)

//void makeAccount();
void input(int* id, int* balance);
void output(int* id, int* balance);			//���
void show(int* id, int* balance);				//�ܾ�
int disp();

int main() {

	int id, money; //����ȣ�� �ݾ�
	int menu =0;
	//���ѷ���
	while (menu != 5) {
		//ȭ�����
		menu = disp();

		//���õ� �޴��� ���� �۾��� �����ϴ� ����
		if (menu == 1) { 
			printf("id = ");
			scanf("%d", &id);
			printf("money = ");
			scanf("%d", &money);

			printf("%d���� ���°� ��ϵǾ����ϴ�. \n", id);
		}
		else if (menu == 2){
			input(&id, &money);
		}
		else if (menu == 3){ 
			output(&id, &money);
		}
		else if (menu == 4){ 
			show(&id, &money);
		}
		else if (menu == 5){
			printf("���α׷� �����մϴ�. \n"); //������ 5��� �ٷ� ������ �� �ƴϱ⶧����
			return 0;
		}
		else{
			printf("�޴��� ������ Ʋ��\n");
		}

	}

	return 0;
}

int  disp() {
	int menu;
	printf("==Bank Menu==\n1.�����\n2.�Ա�ó��\n3.���ó��\n4.�ܾ���Ȳ\n5.�۾�����\n=============\n");
	printf("menu = ");
	scanf("%d", &menu);
	return menu;

}


void input(int* id, int* balance) {
	/* 
		1. id ��ġ ���� 
		//sid�� ��ϵ� ���̵�
		2. ���� �� �����ܾ�  
	*/
	int sid; // �Է¹��� id
	int money;  //�Աݹ��� �Աݱݾ�
	
	printf("===�Ա�ó��===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid){
		do {
			printf("�Աݱݾ� =");
			scanf("%d", &money);
		} while (money < 0);

		*balance += money;
		printf("�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n");
	}
	else {
		printf("��ϵ� ���°� �������� �ʽ��ϴ�. \n");

	}

}

void show(int* id, int* balance) { //���ó��
	/*
		id�� ��ġ�ϴ� �� 
		��� �ݾ��� 0���� Ŀ���ϰ�, �����ܾ׿� ���ԵǾ�� �Ѵ�. 
	*/
	int sid;
	printf("===�ܾ׺���===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid) {
		printf("������ �ܾ��� %d�� �Դϴ�.\n", *balance);
		printf("��� ó���� �Ϸ�Ǿ����ϴ�.\n");
		

	}
	else {
		printf("��ϵ� ���°� �������� �ʽ��ϴ�. \n");

	}
}

void output(int* id, int* balance) {
	int sid;
	int money;
	printf("===���ó��===\n");
	printf("id = ");
	scanf("%d", &sid);

	if (*id == sid) {
		do {
			printf("��ݱݾ� =");
			scanf("%d", &money);
		} while (money < 0);

		if (*balance < money) {
			printf("�ܾ��� �����մϴ�.\n");
		}
		else {
			*balance -= money;
			printf("��� ó���� �Ϸ�Ǿ����ϴ�.\n");
		}

	}
	else {
		printf("��ϵ� ���°� �������� �ʽ��ϴ�. \n");

	}


}