/*
	������ ����ϴ� ���α׷� ����
	Ű���� ���� �ڵ��ȣ�� �����뷮(kw)�Է¹޾� �ش� ���ǿ� �´� ���� ã�� ��� ���� �� ��� ���
	<ó������>
	1. ������ = �⺻��� + (��뷮 * kw�� ���) + ����
	2. �ڵ庰 ��� ���� ����
		code = 1, ������ �⺻��� 1130, kw ��� 127.8��, ���� (��ü�ݾ� 9%)
		code = 2,  ����� �⺻��� 660, kw ��� 88.5��, ���� (��ü�ݾ� 8%)
		code = 3, ������ �⺻��� 370, kw ��� 52.0��, ���� (��ü�ݾ� 5%)

	<�Է� ���>
	code(1.������ 2.����� 3.������) = 3
	���� ��뷮 (kw) =  500

	�������� 27689�� �Դϴ�. 

*/

#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
	int code;
	int elec;
	int basic;
	double kw;
	int tax;
	int sum = 0;

	printf("code(1.������ 2.����� 3.������) = ");
	scanf("%d", &code);
	printf("���� ��뷮 (kw) = ");
	scanf("%d", &elec);

	switch (code) {
	case 1:
		basic = 1130; kw = 127.8; tax = 9; break;
	case 2:
		basic = 660; kw = 88.5; tax = 8; break;
	case 3:
		basic = 370; kw = 52.0; tax = 5; break;
	default: 
		printf("�߸��Է�.\n"); return 0;
	}

	sum = basic + elec * kw;
	sum = sum + sum*(tax * 0.01);

	printf("�������� %d�� �Դϴ�. ", sum);
	return 0;
}