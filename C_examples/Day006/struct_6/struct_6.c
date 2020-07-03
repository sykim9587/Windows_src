/*
	�ڵ����� ������ ����մ� ��ü�� ����üȭ �� �� ���� �־��� ����� ����
	<ó������>
	1.�ڵ�����ü�� �������̸�, ���翬��, ����ӵ��� ��������� ����
	2.�ڵ����� ���Ӱ� ���ӽ� ����� �ӵ��� ��ȭ�� ����ϴ� �Լ� ����
	3.�ڵ��� �ְ�ӵ� 200, �ѹ� ���� �� �ӵ� 10 �߰�, ���Ǵ� ����� 2
	
*/

#include <stdio.h>

//��ũ�� ��� ����
#define MAX_SPEED 200
#define STEP 2
#define GAGE 10

//����ü ���� -> ���� ������ �Ѵ�. 
typedef struct Car {
	char name[20]; //������ �̸�
	int carSpeed; //���� �ӵ�
	int carGas; //���� ���ᷮ
}Car;

//�Լ� �����
void carExcel(Car* c); //�����д� ���� �� ��Ȳ
void carBreak(Car* c ); //break ���� �� ��Ȳ
void carDisp(Car* c); //�������


int main() {
	Car tico = { "Ƽ��", 0,100 };

	//������� ���
	carDisp(&tico);
	printf("\n");

	//����ó��
	carExcel(&tico);
	carDisp(&tico);
	printf("\n");

	carBreak(&tico);
	carDisp(&tico);
	printf("\n");

	return 0;
}

void carDisp(Car* tico) {
	printf("������ : %s\n", tico->name);
	printf("����ӵ�: %d \n", tico->carSpeed);
	printf("���� ����: %d\n", tico->carGas);
}

void carExcel(Car* tico) {
	/* �ְ�ӵ� 200, �ӵ��� 10�� ����, ����� 2�� ����*/
	//1.���ᰡ �ֳ�?
	
	if (tico->carGas >= STEP) {
		tico->carGas -= STEP;
		if (tico->carSpeed + GAGE > 200) {
			tico->carSpeed = 200;
		}
		else {
			tico->carSpeed += GAGE;
		}
	}
}

void carBreak(Car* tico) {
	/* �ӵ� 10 �ش�, ���� 2 �ش�, �ӵ��� ���*/
	if (tico->carGas >= STEP) {
		tico->carGas -= STEP;
		if (tico->carSpeed - GAGE <0) {
			tico->carSpeed = 0;
		}
		else {
			tico->carSpeed -= GAGE;
		}
	}
}