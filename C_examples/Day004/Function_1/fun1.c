/*
	�Լ�(function)
	1. ���� -> ��ɾ��� ���� , ����(modul)
	2. ����
		��ȯ�� �Լ���(�Ű�����){
			����
			return;
		}
		-��ȯ�� �Ǵ� ����� ���ϰ�: ȣ��� ������ �ǵ����ִ� ���� �ڷ���
		-�Լ��� : ����� ���� ��Ģ�� �°� ����Ǹ�, �Ϲ��� �ҹ��� 
		-return  ��;
		-return ����;
		-return ;

	3. �Լ��� �ۼ� ���� 
		�Լ��� ���� : �Լ� ����ϴ� ��
		�Լ� ȣ��
		�Լ� ����: main �տ� �Լ��� ���縦 �˸��� ��

	4. �Լ��� ȣ��
		call by name 
		call by value : �Լ� ȣ��� Ư�� ���� �������� ó��
		call by reference: Ư�� ���� �ּҸ� �����ٰ� ó���ϴ� ����
	5. �Լ��� ���� ���
		-��ȯ���� �ִ�/���� 
		-�Ű������� �ִ�/����
		
*/

#include <stdio.h>
#pragma warning(disable:4996)

//�Լ����Ǻ�
void menu() { //�ܼ� ���
	printf("===���� ���α׷�===\n");
	printf("1.���ϱ�, 2. ����, 3.���ϱ� 4. ������\n");
	printf("-------------------------------------------------\n");
}

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	int res;
	res = x - y;
	return res;
}

int mul(int x, int y) {
	return x * y;

}

int div(int x, int y) {
	if (y == 0) y = 1;
	return x / y;
}

int main() {
	int su1, su2 = 0;

	int op;
	printf("ù��° �� =");
	scanf("%d", &su1);
	printf("�ι�° �� =");
	scanf("%d", &su2);

	menu();
	printf("������ = ");
	scanf("%d", &op);

	switch (op) {
	case 1:
	{//res = add(su1, su2); 
		printf("%d + %d = %d\n", su1, su2, add(su1, su2));
		break;
	}
	case 2: //res = sub(su1, su2);
		printf("%d - %d = %d\n", su1, su2, sub(su1, su2));
		break;
	case 3: //res = mul(su1, su2); 
		printf("%d * %d = %d\n", su1, su2, mul(su1, su2));
		break;
	case 4: //res = div(su1, su2);
		printf("%d / %d = %d\n", su1, su2, div(su1, su2));
	}

	//printf("����� %d\n", res);

	
	return 0;
}